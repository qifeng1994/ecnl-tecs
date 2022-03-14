/*
 *  TOPPERS PROJECT Home Network Working Group Software
 *
 *  Copyright (C) 2016-2019 Cores Co., Ltd. Japan
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
#include "ff.h"
#include "diskio.h"
#include <tinet_defs.h>
#include <tinet_config.h>
#include <netinet/in.h>
#include <netinet/in_var.h>
#include <net/ethernet.h>
#include <net/if_var.h>
#include "gpio_api.h"
#include "analogin_api.h"
#include "rtc_api.h"
#include "pinmap.h"
#include "ntshell_main.h"
#include "adafruit_st7735.h"
#include "draw_font.h"
#include "netcmd.h"

extern uint8_t mac_addr[6];

/* TODO: メーカーコードを設定 */
#define MAKER_CODE	{ 0x00, 0x00, 0xB3 }	/* TOPPERSプロジェクト */

/* ノードプロファイルオブジェクト */
struct node_profile_object_t local_node_data = {
	0x30,	/* 動作状態 */
	{ 0x01, 0x0A, { 0x01, 0x00 } },	/* Ｖｅｒｓｉｏｎ情報 */
	{
		0xFE,	/* 下位通信層IDフィールド */
		{ MAKER_CODE },	/* メーカーコード */
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },	/* ユニークID部(メーカー独自) */
	},
	0,
	{ MAKER_CODE },	/* メーカーコード */
};

struct watt_hour_meter_t electric_energy_meter_data[6] = {
	/* 電力量メータ１ */
	{
		0x30,	/* 動作状態 */
		0x00,	/* 設置場所 */
		{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
		0x41,	/* 異常発生状態 */
		{ MAKER_CODE },	/* メーカーコード */
		0x02,	/* 積算電力量単位 */
		0x00000000,	/* 積算電力量計測値 */
		{ 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, },	/* 積算電力量計測値履歴１ */
	},
	/* 電力量メータ２ */
	{
		0x30,	/* 動作状態 */
		0x00,	/* 設置場所 */
		{0x00, 0x00, 'C', 0x00},	/* 規格Ｖｅｒｓｉｏｎ情報 */
		0x41,	/* 異常発生状態 */
		{MAKER_CODE},	/* メーカーコード */
		0x02,	/* 積算電力量単位 */
		0x00000000,	/* 積算電力量計測値 */
		{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,},	/* 積算電力量計測値履歴１ */
	},
	/* 電力量メータ３ */
	{
		0x30,	/* 動作状態 */
		0x00,	/* 設置場所 */
		{0x00, 0x00, 'C', 0x00},	/* 規格Ｖｅｒｓｉｏｎ情報 */
		0x41,	/* 異常発生状態 */
		{MAKER_CODE},	/* メーカーコード */
		0x02,	/* 積算電力量単位 */
		0x00000000,	/* 積算電力量計測値 */
		{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,},	/* 積算電力量計測値履歴１ */
	},
	/* 電力量メータ４ */
	{
		0x30,	/* 動作状態 */
		0x00,	/* 設置場所 */
		{0x00, 0x00, 'C', 0x00},	/* 規格Ｖｅｒｓｉｏｎ情報 */
		0x41,	/* 異常発生状態 */
		{MAKER_CODE},	/* メーカーコード */
		0x02,	/* 積算電力量単位 */
		0x00000000,	/* 積算電力量計測値 */
		{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,},	/* 積算電力量計測値履歴１ */
	},
	/* 電力量メータ５ */
	{
		0x30,	/* 動作状態 */
		0x00,	/* 設置場所 */
		{0x00, 0x00, 'C', 0x00},	/* 規格Ｖｅｒｓｉｏｎ情報 */
		0x41,	/* 異常発生状態 */
		{MAKER_CODE},	/* メーカーコード */
		0x02,	/* 積算電力量単位 */
		0x00000000,	/* 積算電力量計測値 */
		{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,},	/* 積算電力量計測値履歴１ */
	},
	/* 電力量メータ６ */
	{
		0x30,	/* 動作状態 */
		0x00,	/* 設置場所 */
		{0x00, 0x00, 'C', 0x00},	/* 規格Ｖｅｒｓｉｏｎ情報 */
		0x41,	/* 異常発生状態 */
		{MAKER_CODE},	/* メーカーコード */
		0x02,	/* 積算電力量単位 */
		0x00000000,	/* 積算電力量計測値 */
		{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,},	/* 積算電力量計測値履歴１ */
	}
};

/* 電源LED */
gpio_t pow_led;

/*
 * 動作状態ON/OFF設定関数（0x30, 0x31のみ受け付け）
 */
int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);

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
 * 現在時刻設定関数
 */
int time_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	uint8_t *p_src;
	time_t temp;
	struct tm _tm;

	if (size != 2)
		return 0;

	temp = rtc_read();
	gmtime_r(&temp, &_tm);

	/* 時刻設定 */
	p_src = (uint8_t *)src;
	_tm.tm_hour = *p_src++;
	_tm.tm_min = *p_src++;
	_tm.tm_sec = 0x00;

	temp = mktime(&_tm);
	rtc_write(temp);

	return (intptr_t)p_src - (intptr_t)src;
}

/*
 * 現在時刻取得関数
 */
int time_prop_get(const EPRPINIB *item, void *dst, int size)
{
	uint8_t *p_dst;
	time_t temp;
	struct tm _tm;

	if (size != 2)
		return 0;

	temp = rtc_read();
	gmtime_r(&temp, &_tm);

	/* 時刻設定 */
	p_dst = (uint8_t *)dst;
	*p_dst++ = _tm.tm_hour;
	*p_dst++ = _tm.tm_min;

	return (intptr_t)p_dst - (intptr_t)dst;
}

/*
 * 現在年月日設定関数
 */
int date_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	const uint8_t *p_src;
	time_t temp;
	struct tm _tm;

	if (size != 4)
		return 0;

	temp = rtc_read();
	gmtime_r(&temp, &_tm);

	/* 年月日設定 */
	p_src = (uint8_t *)src;
	_tm.tm_year = (*p_src++ * 100) + *p_src++;
	_tm.tm_mon = (*p_src++) - 1;
	_tm.tm_mday = *p_src++;

	temp = mktime(&_tm);
	rtc_write(temp);

	return (intptr_t)p_src - (intptr_t)src;
}

/*
 * 現在年月日取得関数
 */
int date_prop_get(const EPRPINIB *item, void *dst, int size)
{
	uint8_t *p_dst;
	time_t temp;
	struct tm _tm;

	if (size != 4)
		return 0;

	temp = rtc_read();
	gmtime_r(&temp, &_tm);

	p_dst = (uint8_t *)dst;
	*p_dst++ = _tm.tm_year / 100;
	*p_dst++ = _tm.tm_year % 100;
	*p_dst++ = _tm.tm_mon + 1;
	*p_dst++ = _tm.tm_mday;

	return (intptr_t)p_dst - (intptr_t)dst;
}

/*
 * 積算電力量計測値取得関数
 */
int watt_hour_meter_integral_electric_energy_measurement_value_get(const EPRPINIB *item, void *dst, int size)
{
	struct watt_hour_meter_t *meter = (struct watt_hour_meter_t *)(item->exinf - (intptr_t)&((struct watt_hour_meter_t *)0)->integral_electric_energy_measurement_value);

	/* サイズが4以外は受け付けない */
	if (size != 4)
		return 0;

	*((uint32_t *)dst) = meter->integral_electric_energy_measurement_value;

	return 4;
}

int watt_hour_meter_integral_electric_energy_measurement_log_get(const EPRPINIB *item, void *dst, int size)
{
	struct watt_hour_meter_t *meter = (struct watt_hour_meter_t *)(item->exinf - (intptr_t)&((struct watt_hour_meter_t *)0)->integral_electric_energy_measurement_log);
	int len;

	/* サイズが192以外は受け付けない */
	if (size != 192)
		return 0;

	wai_sem(MAIN_SEMAPHORE);

	len = 48 - meter->current_pos;
	if (len > 0)
		memcpy(dst, &meter->integral_electric_energy_measurement_log[meter->current_pos], sizeof(uint32_t) * len);
	dst = &((uint8_t *)dst)[len];
	len = 48 - len;
	if (len > 0)
		memcpy(dst, &meter->integral_electric_energy_measurement_log[0], sizeof(uint32_t) * len);

	sig_sem(MAIN_SEMAPHORE);

	return 192;
}

static uint32_t whm_add_integral_value(struct watt_hour_meter_t *meter, uint32_t watt_hour)
{
	bool_t carry;
	uint32_t value = watt_hour;
	int current_pos = meter->current_pos;
	current_pos++;
	if (current_pos >= 48)
		current_pos = 0;

	carry = value >= 100000000;
	if (carry)
		value -= 100000000;

	wai_sem(MAIN_SEMAPHORE);

	meter->integral_electric_energy_measurement_value = value;
	meter->integral_electric_energy_measurement_log[current_pos] = value;
	meter->current_pos = current_pos;

	sig_sem(MAIN_SEMAPHORE);

	return carry ? 100000000 : 0;
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
int main_lcd_state = 0;
int main_lcd_timer = TMO_FEVR;
int main_adv_timer = TMO_FEVR;
int main_whm_counter;

analogin_t analogin[6];
gpio_t user_btn;

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
	analogin_init(&analogin[3], A3);
	analogin_init(&analogin[4], A4);
	analogin_init(&analogin[5], A5);

	/* ユーザーボタンの初期化 */
	gpio_init_in(&user_btn, USER_BUTTON0);

	/* ジョイスティックの初期化 */
	analogin_init(&joystick, P1_12);

	/* ECHONETミドルウェアを起動するのを待つ */
	main_state = main_state_start;
	main_timer = 1000 * 1000;

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

	/* 1秒後に表示を更新 */
	main_adv_timer = 1000 * 1000;

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

	if ((result == TMO_FEVR)
		|| ((main_adv_timer != TMO_FEVR) && (main_adv_timer < result))) {
		result = main_adv_timer;
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

	if (main_adv_timer != TMO_FEVR) {
		main_adv_timer -= interval;
		if (main_adv_timer < 0) {
			main_adv_timer = 0;
		}
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
	char mac_text[30] = "mac: ";
	char ipaddr_text[30] = "ipadr: ";
	const T_IN4_ADDR *ip4_addr;
	int pos;

	switch (main_state) {
	case main_state_idle:
		if (len == 0)
			break;

		switch (brkdat[0]) {
		case 1:
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
		}
		break;
	}
}

static void main_ontimer();
static void main_lcd_ontimer();
static void main_adv_ontimer();

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

	if (main_adv_timer == 0) {
		main_adv_ontimer();
	}
}

#define main_7seg_count 4
static uint8_t main_7seg[6][main_7seg_count];

static void main_lcd_ontimer()
{
	char text[] = "No.0 電流：0.00A";
	char *btn_texts[] = { "none  ", "down  ", "left  ", "select", "up    ", "right " };
	int port_no, btn;

	switch (main_lcd_state) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		port_no = main_lcd_state;
		text[14] = '0' + main_7seg[port_no][1];
		text[16] = '0' + main_7seg[port_no][2];
		text[17] = '0' + main_7seg[port_no][3];
		lcd_drawString(&lcd, &text[14], X_LINE_HALF_TO_PIX(&lcd, 11), Y_ROW_TO_PIX(&lcd, main_lcd_state + 2), ST7735_BLACK, ST7735_WHITE);
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
		lcd_drawString(&lcd, "USB電力計", X_LINE_TO_PIX(&lcd, 6), Y_ROW_TO_PIX(&lcd, 0), ST7735_BLACK, ST7735_WHITE);
		for (port_no = 0; port_no < 6; port_no++) {
			text[3] = '1' + port_no;
			lcd_drawString(&lcd, text, X_LINE_TO_PIX(&lcd, 0), Y_ROW_TO_PIX(&lcd, port_no + 2), ST7735_BLACK, ST7735_WHITE);
		}
		main_lcd_state = 0;
		break;
	default:
		main_lcd_state++;
		break;
	}

	/* 100ms後にLCD表示を更新 */
	main_lcd_timer = 100 * 1000;
}

#define main_ad_count 8
#define main_ad_table_count 64
static uint16_t main_ad_table[main_ad_count][main_ad_table_count];
static int main_ad_pos = 0;
static uint32_t main_ad_avelage[main_ad_count];
static uint64_t main_ad_integral[main_ad_count];

uint8_t main_port_no = 1;
static void main_7seg_view(int port_no, int ad);
static void main_btn1_change(bool_t push);
static void main_btn2_change(bool_t push);

/*
 * タイムアウト処理
 */
static void main_ontimer()
{
	ER ret;
	uint8_t btn;
	uint16_t ad_value;

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
			ad_value = analogin_read_u16(&analogin[i]);	// 16bit値取得
			main_ad_integral[i] += 5/*[V]*/ * (ad_value >> 4)/*[A]*/;	// 積算値
			main_ad_table[i][main_ad_pos] = ad_value;
			main_ad_avelage[i] += ad_value;
		}

		main_ad_pos++;
		if (main_ad_pos >= main_ad_table_count) {
			main_ad_pos = 0;
		}

		main_whm_counter += 10;
		if (main_whm_counter >= 1250/* 180000=30分 */) {
			main_whm_counter = 0;

			for (int i = 0; i < 6; i++) {
				uint64_t carry;
				carry = whm_add_integral_value(&electric_energy_meter_data[i],
					main_ad_integral[i] / ((uint64_t)(10LL/* 0.01kWh */ * 360000LL/*=hour*/ * ((1 << 12) - 1) / 2.4/*4095=2.4A*/)));

				main_ad_integral[i] -= carry * ((uint64_t)(10LL/* 0.01kWh */ * 360000LL/*=hour*/ * ((1 << 12) - 1) / 2.4/*4095=2.4A*/));
			}

			if (electric_energy_meter_data[0].current_pos == 0) {
				cmd_execute("logupload", NULL);
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

		main_7seg_view(1, false);
		main_7seg_view(2, false);
		main_7seg_view(3, false);
		main_7seg_view(4, false);
		main_7seg_view(5, false);
		main_7seg_view(6, false);

		break;
	}
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

bool_t main_rev = false;

/*
 * ボタン１状態変化処理
 */
static void main_btn1_change(bool_t push)
{
	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* 表示ポート番号 */
	if (!main_rev) {
		main_port_no--;
		if (main_port_no < 1) {
			main_port_no = 1;
			main_rev = true;
			main_adv_timer = 2000 * 1000;
		}
	}
	else {
		main_port_no++;
		if (main_port_no > main_ad_count) {
			main_port_no = main_ad_count;
			main_rev = false;
			main_adv_timer = 2000 * 1000;
		}
	}
}

/*
 * ボタン２状態変化処理
 */
static void main_btn2_change(bool_t push)
{
	/* 押されて戻った時に処理する */
	if (push)
		return;

	int swt = gpio_read(&user_btn);
	if (swt == 0) {
		return;
	}

	/* 表示ポート番号 */
	if (!main_rev) {
		main_port_no++;
		if (main_port_no > main_ad_count) {
			main_port_no = main_ad_count;
			main_rev = false;
			main_adv_timer = 2000 * 1000;
		}
	}
	else {
		main_port_no--;
		if (main_port_no < 1) {
			main_port_no = 1;
			main_rev = true;
			main_adv_timer = 2000 * 1000;
		}
	}
}

static void main_adv_ontimer()
{
	int swt = gpio_read(&user_btn);
	if (swt != 0) {
		main_adv_timer = TMO_FEVR;
		return;
	}

	main_port_no++;
	if (main_port_no > main_ad_count)
		main_port_no = 1;

	main_adv_timer = 2000 * 1000;
}

static void main_7seg_view(int port_no, int ad)
{
	if ((port_no < 1) || (port_no > main_ad_count))
		return;

	port_no--;

	uint32_t adv = (main_ad_avelage[port_no] / main_ad_table_count);

	if (ad) {
		main_7seg[port_no][0] = port_no + 1;
		main_7seg[port_no][1] = (adv & 0xF000) >> 12;
		main_7seg[port_no][2] = (adv & 0x0F00) >> 8;
		main_7seg[port_no][3] = (adv & 0x00F0) >> 4;
	}
	else {
		uint32_t tmp = adv / 26214;

		main_7seg[port_no][0] = port_no + 1;
		main_7seg[port_no][1] = tmp;
		adv = 10 * (adv - tmp * 26214);
		tmp = adv / 26214;
		main_7seg[port_no][2] = tmp;
		adv = 10 * (adv - tmp * 26214);
		tmp = adv / 26214;
		main_7seg[port_no][3] = tmp;
	}
}
