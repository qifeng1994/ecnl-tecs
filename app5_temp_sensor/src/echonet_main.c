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

/* 温度センサクラス */
struct ecn_cls0011_t temperature_sensor1_data = {
	0x30,	/* 動作状態 */
	0xF554,	/* 温度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* 温度センサクラス */
struct ecn_cls0011_t temperature_sensor2_data = {
	0x30,	/* 動作状態 */
	0xF554,	/* 温度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* 湿度センサクラス */
struct ecn_cls0012_t humidity_sensor_data = {
	0x30,	/* 動作状態 */
	0x00,	/* 相対湿度計測値 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/*
 * 動作状態ON/OFF設定関数（0x30, 0x31のみ受け付け）
 */
int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[2];

	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t *)item->exinf) != *((uint8_t *)src);

	switch (*(uint8_t *)src) {
	/* ONの場合 */
	case 0x30:
	/* OFFの場合 */
	case 0x31:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* メインタスクに通知 */
		data[0] = 0x80;
		data[1] = *(uint8_t *)src;
		ret = ecn_brk_wai(data, sizeof(data));
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_brk_wai");
			return 1;
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
 * 温度測定値設定関数
 */
int temperature_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	struct ecn_cls0011_t *eobj = (struct ecn_cls0011_t *)item->exinf;
	int16_t value;
	ER ret;
	uint8_t data[1];

	/* サイズが2以外は受け付けない */
	if (size != 2)
		return 0;

	value = (((uint8_t *)src)[0] << 8) | (((uint8_t *)src)[1] & 0xFF);

	if ((value >= -2732) && (value <= 32766)) {
		eobj->propertyE0 = value;
		/* メインタスクに通知 */
		data[0] = 0xE0;
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

	return 2;
}

/*
 * 温度計測値取得関数
 */
int temperature_get(const EPRPINIB *item, void *dst, int size)
{
	struct ecn_cls0011_t *eobj = (struct ecn_cls0011_t *)item->exinf;
	int16_t value = eobj->propertyE0;

	/* サイズが2以外は受け付けない */
	if (size != 2)
		return 0;

	((uint8_t *)dst)[0] = value >> 8;
	((uint8_t *)dst)[1] = value & 0xFF;

	return 2;
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
};

int main_timer = TMO_FEVR;
enum main_state_t main_state = main_state_start;

int main_lcd_timer = TMO_FEVR;
int main_lcd_state = 0;

gpio_t pow_led;
analogin_t analogin[3];

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

/*
 * 初期化
 */
static void main_initialize()
{
	uint8_t btn;

	/* LEDの初期化 */
	gpio_init_out(&pow_led, LED_USER);

	/* アナログ入力の初期化 */
	analogin_init(&analogin[0], A0);
	analogin_init(&analogin[1], A1);
	analogin_init(&analogin[2], A2);

	/* ジョイスティックの初期化 */
	analogin_init(&joystick, P1_12);

	/* ECHONETミドルウェアを起動するのを待つ */
	main_state = main_state_start;
	main_timer = 1000 * 1000;

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
		|| ((main_lcd_timer != TMO_FEVR) && (main_lcd_timer < result))) {
		result = main_lcd_timer;
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

	if (main_lcd_timer != TMO_FEVR) {
		main_lcd_timer -= interval;
		if (main_lcd_timer < 0) {
			main_lcd_timer = 0;
		}
	}
}

static bool_t check_response(uint8_t pdc, uint8_t *p_edt);

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
	bool_t in_get = false;

	ret = ecn_itr_ini(&enm, esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_itr_ini");
		return;
	}

	for (;;) {
		while ((ret = ecn_itr_nxt(&enm, &epc, &pdc, p_edt)) == E_OK) {
			switch (epc) {
			case 0xE0:
				if (in_get && (esv->hdr.edata.esv == ESV_SET_GET_RES)) {
					check_response(pdc, p_edt);
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

		/* GET_SETのGETへ */
		in_get = true;
	}
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

	if (brkdat[0] == 0x01) {
		pos = str_macaddr(&mac_text[4], sizeof(mac_text) - 4, mac_addr, 0);
		mac_text[pos + 4] = '\0';
		lcd_drawString(&lcd, mac_text, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 11), ST7735_BLACK, ST7735_WHITE);

		ip4_addr = in4_get_ifaddr(0);
		pos = str_ipv4addr(&ipaddr_text[6], sizeof(ipaddr_text) - 6, ip4_addr, 0);
		ipaddr_text[pos + 6] = '\0';
		lcd_drawString(&lcd, ipaddr_text, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 12), ST7735_BLACK, ST7735_WHITE);
		return;
	}

	if ((len == 2) && (brkdat[0] == 0x80)) {
		switch (brkdat[1]) {
		/* ONの場合 */
		case 0x30:
			/* LEDをON */
			gpio_write(&pow_led, 1);
			break;
		/* OFFの場合 */
		case 0x31:
			/* LEDをOFF */
			gpio_write(&pow_led, 0);
			break;
		}
	}
}

static void main_ontimer();
static void main_lcd_ontimer();

/*
 * タイムアウト処理
 */
static void main_timeout()
{
	if (main_timer == 0) {
		main_ontimer();
	}

	if (main_lcd_timer == 0) {
		main_lcd_ontimer();
	}
}

#define main_ad_count 3
#define main_ad_table_count 64
static int16_t main_ad_tempr[main_ad_count] = { 200, 200, 200 };
static uint16_t main_ad_table[main_ad_count][main_ad_table_count];
static int main_ad_pos = 0;
static uint32_t main_ad_avelage[main_ad_count];
static int main_count[main_ad_count];

static void main_ad_change(int no, int adv);
static void main_btn1_change(bool_t push);
static void main_btn2_change(bool_t push);

static void main_ontimer()
{
	ER ret;
	uint8_t btn;
	uint16_t ad_value;
	int16_t ad_tempr;

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
		for (int i = 0; i < main_ad_count; i++) {
			main_ad_avelage[i] -= main_ad_table[i][main_ad_pos];
			ad_value = analogin_read_u16(&analogin[i]) >> 4;	// 16bit値取得->12bit
			main_ad_table[i][main_ad_pos] = ad_value;
			main_ad_avelage[i] += ad_value;
		}

		main_ad_pos++;
		if (main_ad_pos >= main_ad_table_count) {
			main_ad_pos = 0;
		}

		for (int i = 0; i < main_ad_count; i++) {
			ad_tempr = ((int16_t)(((main_ad_avelage[i] / main_ad_table_count) >> 3) & 0x1FF)) - 100;
			if (main_ad_tempr[i] != ad_tempr) {
				/* １秒変化が続いたら */
				if (main_count[i] < 100) {
					main_count[i]++;
				}
				else {
					main_count[i] = 0;
					main_ad_tempr[i] = ad_tempr;

					/* ADC状態変化処理 */
					main_ad_change(i + 1, ad_tempr);
				}
			}
			else {
				main_count[i] = 0;
			}
		}

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
		break;
	}
}

static void main_lcd_ontimer()
{
	char temp1[] = "温度1：+000.0℃";
	char temp2[] = "温度2：+000.0℃";
	char humid[] = "湿度 ：+000.0％";
	char *btn_texts[] = { "none  ", "down  ", "left  ", "select", "up    ", "right " };
	int temp, btn;

	switch (main_lcd_state) {
	case 0:
		temp1[10] = (temperature_sensor1_data.propertyE0 >= 0) ? ' ' : '-';
		temp = (temperature_sensor1_data.propertyE0 / 1000) % 10;
		if (temp < 0)
			temp = -temp;
		temp1[11] = '0' + temp;
		temp = (temperature_sensor1_data.propertyE0 / 100) % 10;
		if (temp < 0)
			temp = -temp;
		temp1[12] = '0' + temp;
		temp = (temperature_sensor1_data.propertyE0 / 10) % 10;
		if (temp < 0)
			temp = -temp;
		temp1[13] = '0' + temp;
		temp = (temperature_sensor1_data.propertyE0 / 1) % 10;
		if (temp < 0)
			temp = -temp;
		temp1[15] = '0' + temp;
		lcd_drawString(&lcd, &temp1[10], X_LINE_HALF_TO_PIX(&lcd, 7), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 1:
		temp2[10] = (temperature_sensor2_data.propertyE0 >= 0) ? ' ' : '-';
		temp = (temperature_sensor2_data.propertyE0 / 1000) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[11] = '0' + temp;
		temp = (temperature_sensor2_data.propertyE0 / 100) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[12] = '0' + temp;
		temp = (temperature_sensor2_data.propertyE0 / 10) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[13] = '0' + temp;
		temp = (temperature_sensor2_data.propertyE0 / 1) % 10;
		if (temp < 0)
			temp = -temp;
		temp2[15] = '0' + temp;
		lcd_drawString(&lcd, &temp2[10], X_LINE_HALF_TO_PIX(&lcd, 7), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 2:
		humid[10] = ' ';
		humid[11] = ' ';
		temp = (humidity_sensor_data.propertyE0 / 100) % 10;
		humid[12] = '0' + temp;
		temp = (humidity_sensor_data.propertyE0 / 10) % 10;
		humid[13] = '0' + temp;
		temp = (humidity_sensor_data.propertyE0 / 1) % 10;
		humid[15] = '0' + temp;
		lcd_drawString(&lcd, &humid[10], X_LINE_HALF_TO_PIX(&lcd, 7), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state++;
		break;
	case 3:
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
		lcd_drawString(&lcd, "温度湿度計", X_LINE_TO_PIX(&lcd, 5), Y_ROW_TO_PIX(&lcd, 0), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, temp1, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 0 + 2), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, temp2, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 1 + 2), ST7735_BLACK, ST7735_WHITE);
		lcd_drawString(&lcd, humid, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, 2 + 2), ST7735_BLACK, ST7735_WHITE);
		main_lcd_state = 0;
		break;
	default:
		main_lcd_state++;
		break;
	}

	/* 100ms後にLCD表示を更新 */
	main_lcd_timer = 100 * 1000;
}

/*
 * ADC状態変化処理
 */
static void main_ad_change(int no, int adv)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[2];
	uint8_t eobj;

	switch (no) {
	case 1:
		eobj = TEMP_SENSOR_01_EOBJ;
		break;
	case 2:
		eobj = TEMP_SENSOR_02_EOBJ;
		break;
	case 3:
		eobj = HUMIDITY_SENSOR_EOBJ;
		break;
	default:
		return;
	}

	p_edt[0] = ((uint16_t)adv) >> 8;
	p_edt[1] = ((uint16_t)adv) & 0xFF;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, eobj, 0xE0, 2, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
}

static uint8_t main_read_button(analogin_t *obj)
{
	float a = analogin_read(obj);

	a *= 5.0;

	//printf("Button read analog = %f\r\n",a);
	if (a < 0.2)
		return BUTTON_DOWN;
	if (a < 1.0)
		return BUTTON_RIGHT;
	if (a < 1.7)
		return BUTTON_SELECT;
	if (a < 2.6)
		return BUTTON_UP;
	if (a < 4.6)
		return BUTTON_LEFT;
	else
		return BUTTON_NONE;
}

int16_t main_tmpr = 200;	/* 20.0℃ */

/*
 * ボタン１状態変化処理
 */
static void main_btn1_change(bool_t push)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[2];
	int trn_pos;

	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* 温度計測値 */
	main_tmpr -= 10;	/* - 1.0℃ */
	if (main_tmpr < -100)	/* -10.0℃までとする */
		main_tmpr = -100;

	p_edt[0] = ((uint16_t)main_tmpr) >> 8;
	p_edt[1] = ((uint16_t)main_tmpr) & 0xFF;

	/* プロパティ値書き込み・読み出し要求電文作成 */
	ret = ecn_esv_set_get(&esv, TEMP_SENSOR_02_EOBJ, 0xE0, 2, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	p_edt[0] = 0x30;

	/* 書き込みプロパティ追加 */
	ret = ecn_add_edt(esv, 0x80, 1, p_edt);
	if (ret) {
		syslog(LOG_ERROR, "ecn_add_edt");
		goto error;
	}

	/* プロパティ値書き込み・読み出し要求電文作成：折り返し指定 */
	ret = ecn_trn_set_get(esv, &trn_pos);
	if (ret) {
		syslog(LOG_ERROR, "ecn_trn_set_get");
		goto error;
	}

	/* 読み出しプロパティ追加 */
	ret = ecn_add_epc(esv, 0xE0);
	if (ret) {
		syslog(LOG_ERROR, "ecn_add_epc");
		goto error;
	}

	/* プロパティ値書き込み・読み出し要求電文作成：終了指定 */
	ret = ecn_end_set_get(esv, trn_pos);
	if (ret) {
		syslog(LOG_ERROR, "ecn_end_set_get");
		goto error;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
	return;
error:
	/* 領域解放 */
	ret = ecn_rel_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_rel_esv");
	}
}

/*
 * ボタン２状態変化処理
 */
static void main_btn2_change(bool_t push)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[2];
	int trn_pos;

	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* 温度計測値 */
	main_tmpr += 10;	/* + 1.0℃ */
	if (main_tmpr > 400)	/* +40.0℃までとする */
		main_tmpr = 400;

	p_edt[0] = ((uint16_t)main_tmpr) >> 8;
	p_edt[1] = ((uint16_t)main_tmpr) & 0xFF;

	/* プロパティ値書き込み・読み出し要求電文作成 */
	ret = ecn_esv_set_get(&esv, TEMP_SENSOR_02_EOBJ, 0xE0, 2, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	p_edt[0] = 0x30;

	/* 書き込みプロパティ追加 */
	ret = ecn_add_edt(esv, 0x80, 1, p_edt);
	if (ret) {
		syslog(LOG_ERROR, "ecn_add_edt");
		goto error;
	}

	/* プロパティ値書き込み・読み出し要求電文作成：折り返し指定 */
	ret = ecn_trn_set_get(esv, &trn_pos);
	if (ret) {
		syslog(LOG_ERROR, "ecn_trn_set_get");
		goto error;
	}

	/* 読み出しプロパティ追加 */
	ret = ecn_add_epc(esv, 0xE0);
	if (ret) {
		syslog(LOG_ERROR, "ecn_add_epc");
		goto error;
	}

	/* プロパティ値書き込み・読み出し要求電文作成：終了指定 */
	ret = ecn_end_set_get(esv, trn_pos);
	if (ret) {
		syslog(LOG_ERROR, "ecn_end_set_get");
		goto error;
	}

	/* 電文送信 */
	ret = ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
	return;
error:
	/* 領域解放 */
	ret = ecn_rel_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_rel_esv");
	}
}

/*
 * ボタンによる温度設定結果確認
 */
static bool_t check_response(uint8_t pdc, uint8_t *p_edt)
{
	if ((pdc != 2)
		|| (p_edt[0] != ((uint16_t)main_tmpr) >> 8)
		|| (p_edt[1] != ((uint16_t)main_tmpr) & 0xFF)) {
		syslog(LOG_WARNING, "epc_set_get response NG");
		return false;
	}
	return true;
}
