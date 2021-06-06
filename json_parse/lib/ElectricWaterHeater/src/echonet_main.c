
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

static void main_initialize();
static int main_get_timer();
static void main_progress(int interval);
static void main_recv_esv(T_EDATA *esv);
static void main_break_wait(uint8_t *brkdat, int32_t len);
static void main_timeout();

void echonet_main_task(intptr_t exinf)
{
	ER ret, ret2;
	SYSTIM prev, now;
	int timer;
	T_EDATA *esv;
	uint8_t brkdat[64];
	int32_t len;

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

static void main_initialize()
{
	/* メインタスクを起動 */
	ER ret = act_tsk(MAIN_TASK);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "act_tsk");
	}
}

static int main_get_timer()
{
	int result = main_timer;

	if ((result == TMO_FEVR)
		|| ((main_btn_timer != TMO_FEVR) && (main_btn_timer < result))) {
		result = main_btn_timer;
	}

	return result;
}

static void main_progress(int interval)
{
	if (main_timer != TMO_FEVR) {
		main_timer -= interval;
		if (main_timer < 0) {
			main_timer = 0;
		}
	}

	if (main_btn_timer != TMO_FEVR) {
		main_btn_timer -= interval;
		if (main_btn_timer < 0) {
			main_btn_timer = 0;
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
			case :
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
		break;
	}
}

static void main_timeout()
{
	if(main_timer != 0)
		return;

	switch(main_state){
	case main_state_idle:
		break;
	}
}

struct electric_water_heater_t electric_water_heater_class_data = {
};
void participation_in_energy_shift_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size != 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x01: cElectricWaterHeater_setParticipation( );
        break;
      case 0x00: cElectricWaterHeater_setNonParticipation( );
        break;
default:
        return 0;
}
void daytimeHeatingShiftTime1_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 9) && (*(uint8_t*)src <= 17)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cElectricWaterHeater_SetDaytimeHeatingShiftTime1( );
    }
    else{
        return 0;
    }
    return 1;
void daytimeHeatingShiftTime2_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 10) && (*(uint8_t*)src <= 17)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cElectricWaterHeater_SetDaytimeHeatingShiftTime2( );
    }
    else{
        return 0;
    }
    return 1;
void automatic_bath_water_heating_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size != 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cElectricWaterHeater_setOn( );
        break;
      case 0x42: cElectricWaterHeater_setOff( );
        break;
default:
        return 0;
}