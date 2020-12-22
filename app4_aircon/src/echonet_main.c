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
#include "adafruit_st7735.h"
#include "draw_font.h"
#include <tinet_defs.h>
#include <tinet_config.h>
#include <netinet/in.h>
#include <netinet/in_var.h>
#include <net/ethernet.h>
#include <net/if_var.h>

extern uint8_t mac_addr[6];

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

/* 家庭用エアコンクラス */
struct ecn_cls0130_t home_air_conditioner_data = {
	0x30,	/* 動作状態 */
	0x41,	/* 運転モード設定 */
	0x14,	/* 温度設定値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t temp_sensor_01_node_data = {
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

/* 温度センサクラス */
struct ecn_cls0011_t temp_sensor_01_data = {
	0x31,	/* 動作状態 */
	0xF554,	/* 温度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t temp_sensor_02_node_data = {
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

/* 温度センサクラス */
struct ecn_cls0011_t temp_sensor_02_data = {
	0x31,	/* 動作状態 */
	0xF554,	/* 温度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t temp_sensor_03_node_data = {
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

/* 温度センサクラス */
struct ecn_cls0011_t temp_sensor_03_data = {
	0x31,	/* 動作状態 */
	0xF554,	/* 温度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t temp_sensor_04_node_data = {
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

/* 温度センサクラス */
struct ecn_cls0011_t temp_sensor_04_data = {
	0x31,	/* 動作状態 */
	0xF554,	/* 温度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

gpio_t relay_sw;
gpio_t pow_led;
/*
 * 動作状態ON/OFF設定関数（0x30, 0x31のみ受け付け）
 */
int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[1];

	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t *)item->exinf) != *((uint8_t *)src);
	syslog(LOG_NOTICE,"%x",*((uint8_t *)src));
	switch (*(uint8_t *)src) {
	/* ONの場合 */
	case 0x30:
	//gpio_write(&relay_sw, 1);
	//gpio_write(&pow_led, 1);
	syslog(LOG_NOTICE, "led on");
	break;
	/* OFFの場合 */
	case 0x31:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		//gpio_write(&relay_sw, 0);
		//gpio_write(&pow_led, 0);
		syslog(LOG_NOTICE, "led off");
		/* メインタスクに通知 */
		data[0] = 0x80;
		ret = ecn_brk_wai(data, sizeof(data));
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_brk_wai");
			return 2;
		}
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
 * 運転モード設定設定関数
 */
int ecn_cls0130_propertyB0_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[1];

	/* サイズが1以外は受け付けない */
	if (size != 1)
		return 0;

	switch (*(uint8_t *)src) {
	/* 自動の場合 */
	case 0x41:
	/* 冷房の場合 */
	case 0x42:
	/* 暖房の場合 */
	case 0x43:
	/* 除湿の場合 */
	case 0x44:
	/* 送風の場合 */
	case 0x45:
	/* その他の場合 */
	case 0x40:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* メインタスクに通知 */
		data[0] = 0xB0;
		ret = ecn_brk_wai(data, sizeof(data));
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_brk_wai");
			return 2;
		}
		break;
	default:
		/* 上記以外は受け付けない */
		return 0;
	}

	return 1;
}

/*
 * 温度設定値設定関数
 */
int ecn_cls0130_propertyB3_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[1];

	/* サイズが1以外は受け付けない */
	if (size != 1)
		return 0;

	/* 0℃～50℃ */
	if ((*(uint8_t *)src >= 0x00) && (*(uint8_t *)src <= 0x32)) {
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* メインタスクに通知 */
		data[0] = 0xB3;
		ret = ecn_brk_wai(data, sizeof(data));
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_brk_wai");
			return 2;
		}
	}
	/* 上記以外は受け付けない */
	else {
		return 0;
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
	data[1] = (up ? 0x01 : 0x02) | (link_up ? 0x10 : 0x20);
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
	main_state_survey_01,
	main_state_survey_02,
	main_state_survey_03,
	main_state_survey_04,
	main_state_interval,
};

int main_timer = TMO_FEVR;
enum main_state_t main_state = main_state_start;
int16_t main_ave_templ;
bool_t main_tmp_fan_on;
bool_t main_ctl_fan_on;
gpio_t relay_sw;

int main_btn_timer = TMO_FEVR;

int main_lcd_timer = TMO_FEVR;
int main_lcd_state = 0;

/* ジョイスティック種別 */
#define BUTTON_NONE		0
#define BUTTON_DOWN		1
#define BUTTON_LEFT		2
#define BUTTON_SELECT	3
#define BUTTON_UP		4
#define BUTTON_RIGHT	5

analogin_t joystick;
static uint8_t main_read_button(analogin_t *obj);

bool_t main_btn1_state;
int main_btn1_count = 0;
bool_t main_btn2_state;
int main_btn2_count = 0;

LCD_Handler_t lcd;
LCD_DrawProp_t drawProp;

enum main_rly_state_t {
	main_rly_state_off,
	main_rly_state_on
};

int main_rly_timer = TMO_FEVR;
enum main_rly_state_t main_rly_state = main_rly_state_off;
static void main_rly_onoff(bool_t onoff);

/*
 * 初期化
 */
static void main_initialize()
{
	uint8_t btn;

	/* ECHONETミドルウェアを起動するのを待つ */
	main_state = main_state_start;
	main_timer = 1000 * 1000;

	gpio_init_out(&relay_sw, P4_4);

	/* ジョイスティックの初期化 */
	analogin_init(&joystick, P1_12);

	/* 10ms後にボタン状態を確認 */
	main_btn_timer = 10 * 1000;

	/* ボタン状態読み込み */
	btn = main_read_button(&joystick);
	main_btn1_state = btn == BUTTON_LEFT;
	main_btn2_state = btn == BUTTON_RIGHT;

	// 1.8" TFTの初期化
	spi_init(&lcd.hspi, P10_14, P10_15, P10_12, NC);
	spi_format(&lcd.hspi, 8, 0, 0);
	spi_frequency(&lcd.hspi, 4000000);

	gpio_init_out(&lcd.cs_pin, P10_13);
	gpio_init_out(&lcd.rs_pin, P8_15);
	gpio_init_out(&lcd.rst_pin, P8_14);
	gpio_init_out(&lcd.cs2_pin, NC);

	lcd_initR(&lcd, /*INITR_REDTAB?*/INITR_18BLACKTAB);

	drawProp.hlcd = &lcd;
	drawProp.TextColor = ST7735_BLACK;
	drawProp.BackColor = ST7735_WHITE;
	drawProp.pFont = NULL;
	lcd_fillScreen(&drawProp);

	/* 1秒後にLCD表示を更新 */
	main_lcd_state = 10;
	main_lcd_timer = 1000 * 1000;

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
	int result = main_timer;

	if ((result == TMO_FEVR)
		|| ((main_btn_timer != TMO_FEVR) && (main_btn_timer < result))) {
		result = main_btn_timer;
	}

	if ((result == TMO_FEVR)
		|| ((main_lcd_timer != TMO_FEVR) && (main_lcd_timer < result))) {
		result = main_lcd_timer;
	}

	if ((result == TMO_FEVR)
		|| ((main_rly_timer != TMO_FEVR) && (main_rly_timer < result))) {
		result = main_rly_timer;
	}

	return result;
}

/*
 * 時間経過
 */
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

	if (main_lcd_timer != TMO_FEVR) {
		main_lcd_timer -= interval;
		if (main_lcd_timer < 0) {
			main_lcd_timer = 0;
		}
	}

	if (main_rly_timer != TMO_FEVR) {
		main_rly_timer -= interval;
		if (main_rly_timer < 0) {
			main_rly_timer = 0;
		}
	}
}

static void main_survey_templ(int no);
static void main_calc_ave_templ();

/*
 * Echonet電文受信処理
 */
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
			case 0xD6:
				switch (main_state) {
				case main_state_idle:
				case main_state_search:
					/* 温度センサー１温度監視 */
					main_survey_templ(1);
					main_state = main_state_survey_01;
					main_timer = 1000 * 1000;
					break;
				}
				break;
			case 0xE0:
				switch (main_state) {
				case main_state_survey_01:
					/* 温度センサー２温度監視 */
					main_survey_templ(2);
					main_state = main_state_survey_02;
					main_timer = 1000 * 1000;
					break;
				case main_state_survey_02:
					/* 温度センサー３温度監視 */
					main_survey_templ(3);
					main_state = main_state_survey_03;
					main_timer = 1000 * 1000;
					break;
				case main_state_survey_03:
					/* 温度センサー４温度監視 */
					main_survey_templ(4);
					main_state = main_state_survey_04;
					main_timer = 1000 * 1000;
					break;
				case main_state_survey_04:
					/* 温度センサー１～４平均値計算 */
					main_calc_ave_templ();
					/* 温度監視休止１０秒 */
					main_state = main_state_interval;
					main_timer = 10000 * 1000;
					break;
				}
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
 * 温度センサー温度監視
 */
static void main_survey_templ(int no)
{
	const ID senserids[] = {
		TEMP_SENSOR_01_EOBJ,
		TEMP_SENSOR_02_EOBJ,
		TEMP_SENSOR_03_EOBJ,
		TEMP_SENSOR_04_EOBJ
	};
	ER ret;
	T_EDATA *esv;

	/* 温度センサー動作状態取得電文作成 */
	ret = ecn_esv_get(&esv, senserids[no - 1], 0x80);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_get");
		return;
	}

	/* 温度計測値取得追加 */
	ret = ecn_add_epc(esv, 0xE0);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_add_epc");

		ret = ecn_rel_esv(esv);
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_rel_esv");
		}
		return;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
}

/*
 * 温度センサー１～４平均値計算
 */
static void main_calc_ave_templ()
{
	int count = 0;
	int templ = 0;

	if (temp_sensor_01_data.property80 == 0x30) {
		templ += ((((uint16_t)temp_sensor_01_data.propertyE0) & 0xFF) << 8)
			| ((((uint16_t)temp_sensor_01_data.propertyE0) & 0xFF00) >> 8);
		count++;
	}
	if (temp_sensor_02_data.property80 == 0x30) {
		templ += ((((uint16_t)temp_sensor_02_data.propertyE0) & 0xFF) << 8)
			| ((((uint16_t)temp_sensor_02_data.propertyE0) & 0xFF00) >> 8);
		count++;
	}
	if (temp_sensor_03_data.property80 == 0x30) {
		templ += ((((uint16_t)temp_sensor_03_data.propertyE0) & 0xFF) << 8)
			| ((((uint16_t)temp_sensor_03_data.propertyE0) & 0xFF00) >> 8);
		count++;
	}
	if (temp_sensor_04_data.property80 == 0x30) {
		templ += ((((uint16_t)temp_sensor_04_data.propertyE0) & 0xFF) << 8)
			| ((((uint16_t)temp_sensor_04_data.propertyE0) & 0xFF00) >> 8);
		count++;
	}

	if (count > 0) {
		templ = templ / count;
		if (templ < -2732)
			main_ave_templ = 0x8000;
		else if (templ > 32766)
			main_ave_templ = 0x7FFF;
		else
			main_ave_templ = (int16_t)templ;

		/* FANが停止中の場合 */
		if (!main_tmp_fan_on) {
			if (main_ave_templ > (10 * home_air_conditioner_data.propertyB3 + 5)) {
				main_tmp_fan_on = true;

				/* リレー出力をON */
				if (!main_ctl_fan_on)
					main_rly_onoff(true);
			}
		}
		/* FANが稼働中の場合 */
		else {
			if (main_ave_templ < (10 * home_air_conditioner_data.propertyB3 - 5)) {
				main_tmp_fan_on = false;

				/* リレー出力をOFF */
				if (!main_ctl_fan_on)
					main_rly_onoff(false);
			}
		}
	}
	else
		main_ave_templ = 0x7FFF;
}

/*
 * 応答電文待ちの割り込み処理
 */
static void main_break_wait(uint8_t *brkdat, int32_t len)
{
	char mac_text[30] = "mac: ";
	char ipaddr_text[30] = "ipadr: ";
	const T_IN4_ADDR *ip4_addr;
	int pos;
	bool_t prev;

	switch (brkdat[0]) {
	case 0x01:
		switch (brkdat[1] >> 4) {
		case 1:
			break;
		case 2:
			break;
		}

		pos = str_macaddr(&mac_text[4], sizeof(mac_text) - 4, mac_addr, 0);
		mac_text[pos + 4] = '\0';
		lcd_drawString(&lcd, mac_text, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 11), ST7735_BLACK, ST7735_WHITE);

		ip4_addr = in4_get_ifaddr(0);
		pos = str_ipv4addr(&ipaddr_text[6], sizeof(ipaddr_text) - 6, ip4_addr, 0);
		ipaddr_text[pos + 6] = '\0';
		lcd_drawString(&lcd, ipaddr_text, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 12), ST7735_BLACK, ST7735_WHITE);
		break;
	}

	/* 運転モードが送風の場合、温度によらずFANをON */
	switch (*brkdat) {
	case 0x80:
		if (main_ctl_fan_on) {
			/* リレー出力をON/OFF */
			main_rly_onoff(home_air_conditioner_data.property80 == 0x30);
		}
		break;
	case 0xB0:
		prev = main_ctl_fan_on;
		main_ctl_fan_on = home_air_conditioner_data.propertyB0 == 0x45;

		if (prev != main_ctl_fan_on) {
			if (main_ctl_fan_on) {
				/* リレー出力をON/OFF */
				main_rly_onoff(home_air_conditioner_data.property80 == 0x30);
			}
			else {
				/* リレー出力をON/OFF */
				main_rly_onoff(main_tmp_fan_on);
			}
		}
	}
}

static void main_ontimer();
static void main_btn_ontimer();
static void main_lcd_ontimer();
static void main_rly_ontimer();

/*
 * タイムアウト処理
 */
static void main_timeout()
{
	if (main_timer == 0) {
		main_ontimer();
	}

	if (main_btn_timer == 0) {
		main_btn_ontimer();
	}

	if (main_lcd_timer == 0) {
		main_lcd_ontimer();
	}

	if (main_rly_timer == 0) {
		main_rly_ontimer();
	}
}

static void main_search();

static void main_ontimer()
{
	ER ret;

	switch (main_state) {
	case main_state_start:
		/* ECHONETミドルウェアを起動 */
		ret = ecn_sta_svc();
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_sta_svc");
		}

		/* １秒後に温度センサーを探す */
		main_state = main_state_idle;
		main_timer = 1000 * 1000;
		break;
	case main_state_idle:
	case main_state_search:
		/* 温度センサー再検索 */
		main_search();
		main_state = main_state_search;
		main_timer = 5000 * 1000;
		break;
	case main_state_survey_01:
		/* 応答がない場合動作状態OFFとする */
		temp_sensor_01_data.property80 = 0x31;
		/* 温度センサー２温度監視 */
		main_survey_templ(2);
		main_state = main_state_survey_02;
		main_timer = 1000 * 1000;
		break;
	case main_state_survey_02:
		/* 応答がない場合動作状態OFFとする */
		temp_sensor_02_data.property80 = 0x31;
		/* 温度センサー３温度監視 */
		main_survey_templ(3);
		main_state = main_state_survey_03;
		main_timer = 1000 * 1000;
		break;
	case main_state_survey_03:
		/* 応答がない場合動作状態OFFとする */
		temp_sensor_03_data.property80 = 0x31;
		/* 温度センサー４温度監視 */
		main_survey_templ(4);
		main_state = main_state_survey_04;
		main_timer = 1000 * 1000;
		break;
	case main_state_survey_04:
		/* 応答がない場合動作状態OFFとする */
		temp_sensor_04_data.property80 = 0x31;
		/* 温度センサー１～４平均値計算 */
		main_calc_ave_templ();
		/* 温度監視休止１０秒 */
		main_state = main_state_interval;
		main_timer = 10000 * 1000;
		break;
	case main_state_interval:
		/* 温度センサー１温度監視 */
		main_survey_templ(1);
		main_state = main_state_survey_01;
		main_timer = 1000 * 1000;
		break;
	}
}

static void main_search()
{
	ER ret;
	T_EDATA *esv;

	/* 温度センサー検索 */
	ret = ecn_esv_inf_req(&esv, EOBJ_NULL, 0xD6);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_inf_req");
		return;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
}

static void main_btn1_change(bool_t push);
static void main_btn2_change(bool_t push);

static void main_btn_ontimer()
{
	uint8_t btn;

	/* 10ms後にボタン状態を確認 */
	main_btn_timer = 10 * 1000;

	/* ボタン状態読み込み */
	btn = main_read_button(&joystick);

	/* ボタン１の処理 */
	if ((btn == BUTTON_LEFT) && !main_btn1_state) {
		main_btn1_count++;
		if (main_btn1_count > 10) {
			main_btn1_count = 0;
			main_btn1_state = true;

			main_btn1_change(true);
		}
	}
	else if ((btn != BUTTON_LEFT) && main_btn1_state) {
		main_btn1_count++;
		if (main_btn1_count > 10) {
			main_btn1_count = 0;
			main_btn1_state = false;

			main_btn1_change(false);
		}
	}

	/* ボタン２の処理 */
	if ((btn == BUTTON_RIGHT) && !main_btn2_state) {
		main_btn2_count++;
		if (main_btn2_count > 10) {
			main_btn2_count = 0;
			main_btn2_state = true;

			main_btn2_change(true);
		}
	}
	else if ((btn != BUTTON_RIGHT) && main_btn2_state) {
		main_btn2_count++;
		if (main_btn2_count > 10) {
			main_btn2_count = 0;
			main_btn2_state = false;

			main_btn2_change(false);
		}
	}
}

static void main_lcd_ontimer()
{
	char power[] = "電源：off";
	char temp1[] = "設定温度：+00℃";
	char temp2[] = "測定温度：+00.0℃";
	char mode[] = "運転モード：自動  ";
	char *mode_texts[] = { "その他", "自動  ", "冷房  ", "暖房  ", "除湿  ", "送風  " };
	char *btn_texts[] = { "none  ", "down  ", "left  ", "select", "up    ", "right " };
	int temp, btn;

	switch (main_lcd_state) {
	case 0:
		if (home_air_conditioner_data.property80 == 0x30) {
			power[9] = 'o';
			power[10] = 'n';
			power[11] = ' ';
		}
		else {
			power[9] = 'o';
			power[10] = 'f';
			power[11] = 'f';
		}
		lcd_drawString(&lcd, &power[9], X_LINE_HALF_TO_PIX(&lcd, 6), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 1:
		temp1[15] = (home_air_conditioner_data.propertyB3 >= 0) ? ' ' : '-';
		temp = (home_air_conditioner_data.propertyB3 / 10) % 10;
		if (temp < 0)
			temp = -temp;
		temp1[16] = '0' + temp;
		temp = (home_air_conditioner_data.propertyB3 / 1) % 10;
		if (temp < 0)
			temp = -temp;
		temp1[17] = '0' + temp;
		lcd_drawString(&lcd, &temp1[15], X_LINE_HALF_TO_PIX(&lcd, 10), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 2:
		temp2[15] = (main_ave_templ >= 0) ? ' ' : '-';
		temp = (main_ave_templ / 100) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[16] = '0' + temp;
		temp = (main_ave_templ / 10) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[17] = '0' + temp;
		temp = (main_ave_templ / 1) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[19] = '0' + temp;
		lcd_drawString(&lcd, &temp2[15], X_LINE_HALF_TO_PIX(&lcd, 10), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 3:
		temp = home_air_conditioner_data.propertyB0 - 0x40;
		lcd_drawString(&lcd, mode_texts[temp], X_LINE_HALF_TO_PIX(&lcd, 12), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 4:
	case 5:
		main_lcd_state++;
		break;
	case 6:
		btn = main_read_button(&joystick);
		lcd_drawString(&lcd, btn_texts[btn], X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 9), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 9:
		main_lcd_state = 0;
		break;
	case 10:
		lcd_drawString(&lcd, "エアコン", X_LINE_TO_PIX(&lcd, 6), Y_ROW_TO_PIX(&lcd, 0), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, power, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 0 + 2), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, temp1, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 1 + 2), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, temp2, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 2 + 2), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, mode, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 3 + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state = 0;
		break;
	default:
		main_lcd_state++;
		break;
	}

	/* 100ms後にLCD表示を更新 */
	main_lcd_timer = 100 * 1000;
}

static uint8_t main_read_button(analogin_t *obj)
{
	int a = analogin_read_u16(obj);

	a *= 5;

	//printf("Button read analog = %f\r\n",a);
	if (a < (int)(0.2 * 65536))
		return BUTTON_DOWN;
	if (a < (int)(1.0 * 65536))
		return BUTTON_RIGHT;
	if (a < (int)(1.7 * 65536))
		return BUTTON_SELECT;
	if (a < (int)(2.6 * 65536))
		return BUTTON_UP;
	if (a < (int)(4.6 * 65536))
		return BUTTON_LEFT;
	else
		return BUTTON_NONE;
}

uint8_t main_templ = 20;	/* 20℃ */

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

	/* 設定温度 */
	if (main_templ > 0)
		main_templ--;	/* - 1℃ */

	p_edt[0] = main_templ;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_seti(&esv, HOME_AIR_CONDITIONER_EOBJ, 0xB3, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_seti");
		return;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
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

	/* 設定温度 */
	if (main_templ < 50)
		main_templ++;	/* + 1.0℃ */

	p_edt[0] = main_templ;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_seti(&esv, HOME_AIR_CONDITIONER_EOBJ, 0xB3, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_seti");
		return;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
}
#if 1
static void main_rly_onoff(bool_t onoff)
{
	if (onoff) {
		/* リレー出力をON */
		gpio_write(&relay_sw, 1);
	}
	else {
		/* リレー出力をOFF */
		gpio_write(&relay_sw, 0);
	}
}

static void main_rly_ontimer()
{
	main_rly_timer = TMO_FEVR;
}
#else
static void main_rly_onoff(bool_t onoff)
{
	/* リレー出力をON */
	gpio_write(&relay_sw, 1);

	/* 500msパルス出力 */
	main_rly_state = main_rly_state_on;
	main_rly_timer = 500 * 1000;
}

/*
 * リレーパルス出力処理
 */
static void main_rly_ontimer()
{
	switch (main_rly_state) {
	case main_rly_state_off:
		main_rly_timer = TMO_FEVR;
		break;
	case main_rly_state_on:
		/* リレー出力をOFF */
		gpio_write(&relay_sw, 0);

		main_rly_state = main_rly_state_off;
		main_rly_timer = TMO_FEVR;
		break;
	}
}
#endif
