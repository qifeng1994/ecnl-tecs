#include <kernel.h>
#include <t_syslog.h>
#include <t_stdlib.h>
#include <sil.h>
#include <string.h>
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
#include "kernel_cfg.h"
#include "echonet_main.h"
#include "echonet_cfg.h"
#include "target_kernel_impl.h"
#include "gpio_api.h"
#include "rtc_api.h"
#include "tECNLGeneralLighting_tecsgen.h"

#define MAKER_CODE	{0x00, 0x00, 0xB3}

struct general_lighting_t general_lighting_class_data = {
	0x30,
	0x00,
	{ 0x00, 0x00, 'C', 0x00 },
	0x42,
	{MAKER_CODE},
	0x41,
};
struct node_profile_object_t local_node_data = {
	0x30,
	{ 0x01, 0x0A, { 0x01, 0x00 } },
	{
		0xFE,
		{ MAKER_CODE },
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
	},
	{MAKER_CODE},
};

static void main_initialize();
static int main_get_timer();
static void main_progress(int interval);
static void main_recv_esv(T_EDATA *esv);
static void main_break_wait(uint8_t *brkdat, int32_t len);
static void main_timeout();


/* 電源LED */
gpio_t pow_led;
/* リレー出力 */
gpio_t relay_sw;
/* カラーLED */
gpio_t led_blue, led_green, led_red;
/* ユーザースイッチ CN16-4 */
gpio_t sw1, sw2;

void echonet_main_task(intptr_t exinf)
{
	ER ret, ret2;
	SYSTIM prev, now;
	int timer;
	T_EDATA *esv;
	uint8_t brkdat[64];
	int32_t len;

	syslog(LOG_NOTICE,"[echonet_main_task]:started");
	//exinf初期值0
	/* アプリケーションの初期化 */
	main_initialize();

	ret2 = get_tim(&now);
	if (ret2 != E_OK) {
		syslog(LOG_ERROR, "get_tim");
		return;
	}

	for (;;) {
		prev = now;

		/* タイマー取得 */
		timer = main_get_timer();

		/* 応答電文待ち */
		ret = ecn_trcv_esv(&esv, timer);
		if ((ret != E_OK) && (ret != E_BRK) && (ret != E_TMOUT)) {
			syslog(LOG_ERROR, "ecn_trcv_esv");
			break;
		}

		ret2 = get_tim(&now);
		if (ret2 != E_OK) {
			syslog(LOG_ERROR, "get_tim");
			break;
		}

		/* 時間経過 */
		main_progress(now - prev);
		/* Echonet電文受信の場合 */
		if (ret == E_OK) {
			/* Echonet電文受信処理 */
			main_recv_esv(esv);
			/* 領域解放 */
			ret = ecn_rel_esv(esv);
			if (ret != E_OK) {
				syslog(LOG_ERROR, "ecn_rel_esv");
				break;
			}
		}
		/* 応答電文待ちの割り込みの場合 */
		else if (ret == E_BRK) {
			/* 応答電文待ちの割り込みデータ取得 */
			ret = ecn_get_brk_dat(esv, brkdat, sizeof(brkdat), &len);
			if (ret != E_OK) {
				syslog(LOG_ERROR, "ecn_get_brk_dat");
				break;
			}

			/* 応答電文待ちの割り込み処理 */
			main_break_wait(brkdat, len);

			/* 領域解放 */
			ret = ecn_rel_esv(esv);
			if (ret != E_OK) {
				syslog(LOG_ERROR, "ecn_rel_esv");
				break;
			}
		}

		/* タイムアウト処理 */
		main_timeout();
	}
}

void echonet_change_netif_link(uint8_t link_up, uint8_t up)
{
	ER ret;

	if (link_up == 0)
		return;

	if (up) {
		/* インスタンスリスト通知の送信 */
		ret = ecn_ntf_inl();
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_ntf_inl");
		}
	}

	/* メインタスクに通知 */
	uint8_t data[2];
	data[0] = 0x01;
	data[1] = up ? 0x01 : 0x02;
	ret = ecn_brk_wai(data, sizeof(data));
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_brk_wai");
		return;
	}
}

enum main_state_t {
	main_state_start,
	main_state_idle,
	main_state_search,
};
int main_timer = TMO_FEVR;
enum main_state_t main_state = main_state_start;

static void main_initialize()
{
		/* LEDの初期化 */
	gpio_init_out(&pow_led, LED_USER);
	gpio_init_out(&relay_sw, P4_4);
	gpio_init_out(&led_blue, LED_BLUE);
	gpio_init_out(&led_green, LED_GREEN);
	gpio_init_out(&led_red, LED_RED);

	/* スイッチの初期化 */
	gpio_init_in(&sw1, USER_BUTTON0);
	gpio_init_in(&sw2, P1_12);

	/* カラーLEDを消灯 */
	gpio_write(&led_blue, 0);
	gpio_write(&led_green, 0);
	gpio_write(&led_red, 0);


	main_state = main_state_start;
	main_timer = 1000 * 1000;
	/* メインタスクを起動 */
	ER ret = act_tsk(MAIN_TASK);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "act_tsk");
	}
}

static int main_get_timer()
{
	return main_timer;
}

static void main_progress(int interval)
{
	if (main_timer != TMO_FEVR) {
		main_timer -= interval;
		if (main_timer < 0) {
			main_timer = 0;
		}
	}
}

static void main_recv_esv(T_EDATA *esv)
{
	ER ret;
	ID eobjid;
	uint8_t epc;
	uint8_t pdc;
	uint8_t p_edt[256];
	T_ENUM_EPC enm;

	eobjid = ecn_get_eobj(esv);
	
	if (eobjid == EOBJ_NULL) {
		syslog(LOG_ERROR, "ecn_get_eobj");
	}

	ret = ecn_itr_ini(&enm, esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_itr_ini");
		return;
	}

	for (;;) {
		while ((ret = ecn_itr_nxt(&enm, &epc, &pdc, p_edt)) == E_OK) {
			switch (epc) {
			case 0x80:
                break;
			}
		}
		if (ret != E_BOVR) {
			syslog(LOG_ERROR, "ecn_itr_nxt");
			break;
		}
		if (enm.is_eof)
			break;
	}
}

static void main_break_wait(uint8_t *brkdat, int32_t len)
{
	switch(main_state){
	case main_state_idle:
			if (len < 2)
			break;
		break;
	}
}

static void main_ontimer();

static void main_timeout()
{
	if (main_timer == 0) {
		main_ontimer();
	}
}

static void main_ontimer()
{
	ER ret;
	T_EDATA *esv;

	switch (main_state){
		case main_state_start:
		/* ECHONETミドルウェアを起動 */
		ret = ecn_sta_svc();
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_sta_svc");
		}

		main_timer = 1000 * 1000;
		break;
	}

		/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
}
