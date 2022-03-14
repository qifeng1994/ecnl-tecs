/*
 *  TOPPERS PROJECT Home Network Working Group Software
 *
 *  Copyright (C) 2014-2019 Cores Co., Ltd. Japan
 *
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 *
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 *
 *  @(#) $Id$
 */

/*
 *  サンプルプログラム(1)の本体
 */

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
#include "analogin_api.h"

/* TODO: メーカーコードを設定 */
#define MAKER_CODE	{ 0x00, 0x00, 0xB3 }	/* TOPPERSプロジェクト */

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t node_profile_data = {
	0x30,	/* 動作状態 */
	{ 0x01, 0x0A, { 0x01, 0x00 } },	/* Ｖｅｒｓｉｏｎ情報 */
	{
		0xFE,	/* 下位通信層IDフィールド */
		{ MAKER_CODE },	/* メーカーコード */
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },	/* ユニークID部(メーカー独自) */
	},
	0x0000,	/* 異常内容 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* 人体検知センサクラス */
struct ecn_cls0007_t human_detection_sensor_data = {
	0x30,	/* 動作状態 */
	0x35,	/* 検知閾値レベル設定（初期値として1～4が未検出、初期値として4～8が検出） */
	0x31,	/* 検知レベル状態（人体検知状態用）*/
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* 電源LED */
gpio_t pow_led;
/* カラーLED */
gpio_t led_blue, led_green, led_red;
/* ユーザースイッチ CN16-4 */
gpio_t sw1, sw2;

/*
 * 動作状態ON/OFF設定関数（0x30, 0x31のみ受け付け）
 */
int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t *)item->exinf) != *((uint8_t *)src);

	switch (*(uint8_t *)src) {
	/* ONの場合 */
	case 0x30:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDをON */
		gpio_write(&pow_led, 1);
		break;
	/* OFFの場合 */
	case 0x31:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDをOFF */
		gpio_write(&pow_led, 0);
		break;
	/* 0x30か0x31以外は受け付けない */
	default:
		return 0;
	}

	return 1;
}

/*
 * 異常発生状態設定関数（0x41, 0x42のみ受け付け）
 */
int alarm_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t *)item->exinf) != *((uint8_t *)src);

	switch (*(uint8_t *)src) {
	/* 異常発生ありの場合 */
	case 0x41:
	/* 異常発生なしの場合 */
	case 0x42:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		break;
	/* 0x41か0x42以外は受け付けない */
	default:
		return 0;
	}

	return 1;
}

/*
 * 検知閾値レベル設定設定関数
 */
int detection_threshold_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが1以外は受け付けない */
	if (size != 1)
		return 0;

	if ((*(uint8_t *)src >= 0x31) && (*(uint8_t *)src <= 0x38)) {
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
	}
	/* 上記以外は受け付けない */
	else {
		return 0;
	}

	return 1;
}

uint8_t led_disp[] = { 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07 };

/*
 * 検知レベル設定関数
 */
int detection_state_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	struct ecn_cls0007_t *eobj = (struct ecn_cls0007_t *)item->exinf;
	ER ret;
	T_EDATA *esv;
	uint8_t prev_state;
	int temp;

	/* サイズが1以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = false;

	if ((*(uint8_t *)src >= 0x31) && (*(uint8_t *)src <= 0x38)) {
		/* 以前の検知レベルを保存 */
		prev_state = eobj->state;
		/* 検知レベル設定 */
		eobj->state = *((uint8_t *)src);
		/* LEDに検知レベルを表示 */
		temp = led_disp[eobj->state - 0x30];
		gpio_write(&led_blue, (temp & 0x01) != 0 ? 1 : 0);
		gpio_write(&led_green, (temp & 0x02) != 0 ? 1 : 0);
		gpio_write(&led_red, (temp & 0x04) != 0 ? 1 : 0);

		/* 人体検知状態に変化があった場合 */
		if ((prev_state < eobj->threshold) != (eobj->state < eobj->threshold)) {
			/* プロパティ通知 */
			*anno = true;
		}
	}
	/* 上記以外は受け付けない */
	else {
		return 0;
	}

	return 1;
}

/*
 * 人体検知状態取得関数
 */
int detection_state_get(const EPRPINIB *item, void *dst, int size)
{
	struct ecn_cls0007_t *eobj = (struct ecn_cls0007_t *)item->exinf;

	/* 閾値より検知レベルが低い場合 */
	if (eobj->state < eobj->threshold) {
		/* 人体検知なし */
		((uint8_t *)dst)[0] = 0x42;
	}
	/* 閾値より検知レベルが高い場合 */
	else {
		/* 人体検知あり */
		((uint8_t *)dst)[0] = 0x41;
	}

	return 1;
}

static void main_initialize();
static int main_get_timer();
static void main_progress(int interval);
static void main_recv_esv(T_EDATA *esv);
static void main_break_wait(uint8_t *brkdat, int32_t len);
static void main_timeout();

/*
 *  メインタスク
 */
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
};

int main_timer = TMO_FEVR;
enum main_state_t main_state = main_state_start;
bool_t main_btn1_state;
int main_btn1_count = 0;
bool_t main_btn2_state;
int main_btn2_count = 0;

analogin_t analogin;

/*
 * 初期化
 */
static void main_initialize()
{
	uint8_t btn1, btn2;

	/* LEDの初期化 */
	gpio_init_out(&pow_led, LED_USER);
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

	/* ECHONETミドルウェアを起動するのを待つ */
	main_state = main_state_start;
	main_timer = 1000 * 1000;

	/* アナログ入力の初期化 */
	analogin_init(&analogin, A0);

	/* ボタン状態読み込み */
	btn1 = gpio_read(&sw1);
	btn2 = gpio_read(&sw2);
	main_btn1_state = btn1 != 0;
	main_btn2_state = btn2 != 0;

	/* メインタスクを起動 */
	ER ret = act_tsk(MAIN_TASK);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "act_tsk");
	}
}

/*
 * タイマー取得
 */
static int main_get_timer()
{
	return main_timer;
}

/*
 * 時間経過
 */
static void main_progress(int interval)
{
	if (main_timer == TMO_FEVR)
		return;

	main_timer -= interval;
	if (main_timer < 0) {
		main_timer = 0;
	}
}

/*
 * Echonet電文受信処理
 */
static void main_recv_esv(T_EDATA *esv)
{
	ER ret;
	uint8_t epc;
	uint8_t pdc;
	uint8_t p_edt[256];
	T_ENUM_EPC enm;

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
			case 0x81:
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

/*
 * 応答電文待ちの割り込み処理
 */
static void main_break_wait(uint8_t *brkdat, int32_t len)
{
	switch (main_state) {
	case main_state_idle:
		break;
	}
}

static uint8_t main_ad_level = 1;
static uint16_t main_ad_table[64];
#define main_ad_table_count (sizeof(main_ad_table) / sizeof(main_ad_table[0]))
static int main_ad_pos = 0;
static uint32_t main_ad_avelage;
static int main_count;

static void main_ad_change();
static void main_btn1_change(bool_t push);
static void main_btn2_change(bool_t push);

/*
 * タイムアウト処理
 */
static void main_timeout()
{
	ER ret;
	uint8_t btn1, btn2;
	uint16_t ad_value;
	uint8_t ad_level;

	if (main_timer != 0)
		return;

	switch (main_state) {
	case main_state_start:
		/* ECHONETミドルウェアを起動 */
		ret = ecn_sta_svc();
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_sta_svc");
		}

		/* 10ms後にボタン状態を確認 */
		main_state = main_state_idle;
		main_timer = 10 * 1000;
		break;
	case main_state_idle:
		/* 10ms後にボタン状態を確認 */
		main_timer = 10 * 1000;

		/* ADCの変換結果取得 */
		main_ad_avelage -= main_ad_table[main_ad_pos];
		ad_value = analogin_read_u16(&analogin) >> 4;	// 16bit値取得->12bit
		main_ad_table[main_ad_pos] = ad_value;
		main_ad_avelage += ad_value;

		main_ad_pos++;
		if (main_ad_pos >= main_ad_table_count) {
			main_ad_pos = 0;
		}

		ad_level = 8 - (((main_ad_avelage / main_ad_table_count) >> 9) & 0x7);
		if (main_ad_level != ad_level) {
			/* １秒変化が続いたら */
			if (main_count < 100) {
				main_count++;
			}
			else {
				main_ad_level = ad_level;

				/* ADC状態変化処理 */
				main_ad_change();
			}
		}
		else {
			main_count = 0;
		}

		/* ボタン状態読み込み */
		btn1 = gpio_read(&sw1);
		btn2 = gpio_read(&sw2);

		/* ボタン１の処理 */
		if ((btn1 != 0) && !main_btn1_state) {
			main_btn1_count++;
			if (main_btn1_count > 10) {
				main_btn1_count = 0;
				main_btn1_state = true;

				main_btn1_change(true);
			}
		}
		else if ((btn1 == 0) && main_btn1_state) {
			main_btn1_count++;
			if (main_btn1_count > 10) {
				main_btn1_count = 0;
				main_btn1_state = false;

				main_btn1_change(false);
			}
		}

		/* ボタン２の処理 */
		if ((btn2 != 0) && !main_btn2_state) {
			main_btn2_count++;
			if (main_btn2_count > 10) {
				main_btn2_count = 0;
				main_btn2_state = true;

				main_btn2_change(true);
			}
		}
		else if ((btn2 == 0) && main_btn2_state) {
			main_btn2_count++;
			if (main_btn2_count > 10) {
				main_btn2_count = 0;
				main_btn2_state = false;

				main_btn2_change(false);
			}
		}
		break;
	}
}

/*
 * ADC状態変化処理
 */
static void main_ad_change()
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[1];

	p_edt[0] = 0x30 + main_ad_level;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, HUMAN_DETECTION_SENSOR_EOBJ, 0xB1, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}

uint8_t main_level = 1;
bool_t main_rev = false;

/*
 * ボタン１状態変化処理
 */
static void main_btn1_change(bool_t push)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[1];

	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* 人体検知状態 */
	if (!main_rev) {
		main_level--;
		if (main_level < 1) {
			main_level = 1;
			main_rev = true;
		}
	}
	else {
		main_level++;
		if (main_level > 8) {
			main_level = 8;
			main_rev = false;
		}
	}

	p_edt[0] = 0x30 + main_level;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, HUMAN_DETECTION_SENSOR_EOBJ, 0xB1, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}

/*
 * ボタン２状態変化処理
 */
static void main_btn2_change(bool_t push)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[1];

	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* 人体検知状態 */
	if (!main_rev) {
		main_level++;
		if (main_level > 8) {
			main_level = 8;
			main_rev = false;
		}
	}
	else {
		main_level--;
		if (main_level < 1) {
			main_level = 1;
			main_rev = true;
		}
	}

	p_edt[0] = 0x30 + main_level;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, HUMAN_DETECTION_SENSOR_EOBJ, 0xB1, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}
