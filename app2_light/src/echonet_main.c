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
#include "rtc_api.h"
#include "tMainTask_tecsgen.h"


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

/* 一般照明クラス */
struct ecn_cls0290_t general_lighting_class_data = {
	0x30,	/* 動作状態 */
	0x41,	/* 点灯モード設定 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
	{
		0x00,	/* 時 */
		0x00,	/* 分 */
	},
	{
		0x0001,	/* 年 */
		0x01,	/* 月 */
		0x01,	/* 日 */
	},
};

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t human_detection_sensor_node_data = {
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
	0x41,	/* 人体検知状態 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x41,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* 電源LED */
gpio_t pow_led;
/* リレー出力 */
gpio_t relay_sw;
/* カラーLED */
gpio_t led_blue, led_green, led_red;
/* ユーザースイッチ CN16-4 */
gpio_t sw1, sw2;

/*
 * 動作状態ON/OFF設定関数（0x30, 0x31のみ受け付け）設定コールバック関数
 */
int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t *)item->exinf) != *((uint8_t *)src);
	syslog(LOG_NOTICE,"%d",*anno);

	switch (*(uint8_t *)src) {
		//syslog(LOG_NOTICE,"%x",*((uint8_t *)src));
	/* ONの場合 */
	case 0x30:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDをON */
		//gpio_write(&pow_led, 1);
		//cLight_setOn( );
		tMainTask_cLight_setOn();
		/* リレー出力をON */
		//gpio_write(&relay_sw, 1);
		
		//syslog(LOG_NOTICE, "led on");
		break;
	/* OFFの場合 */
	case 0x31:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDをOFF */
		//gpio_write(&pow_led, 0);
		tMainTask_cLight_setOff();
		/* リレー出力をOFF */
		//gpio_write(&relay_sw, 0);

		//syslog(LOG_NOTICE,"led off");
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
 * 点灯モード設定設定関数
 */
int lighting_mode_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが1以外は受け付けない */
	if (size != 1)
		return 0;

	switch (*(uint8_t *)src) {
	/* 自動の場合 */
	case 0x41:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* カラーLEDを緑で点灯 */
		gpio_write(&led_blue, 0);
		gpio_write(&led_green, 1);
		gpio_write(&led_red, 0);
		break;
	/* 通常灯の場合 */
	case 0x42:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* カラーLEDを赤で点灯 */
		gpio_write(&led_blue, 0);
		gpio_write(&led_green, 0);
		gpio_write(&led_red, 1);
		break;
	/* 常夜灯の場合 */
	case 0x43:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* カラーLEDを赤で点灯 */
		gpio_write(&led_blue, 0);
		gpio_write(&led_green, 0);
		gpio_write(&led_red, 1);
		break;
	/* カラー灯の場合 */
	case 0x45:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* カラーLEDを白で点灯 */
		gpio_write(&led_blue, 1);
		gpio_write(&led_green, 1);
		gpio_write(&led_red, 1);
		break;
	default:
		/* 上記以外は受け付けない */
		return 0;
	}

	return 1;
}

/*
 * 人体検知状態設定関数
 */
int human_detection_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[2];

	if (size != 1)
		return 0;

	switch (*(uint8_t *)src) {
	/* 人体検出ありの場合 */
	case 0x41:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);

		/* メインタスクに通知 */
		data[0] = 0xB1;
		data[1] = *(uint8_t *)src;
		ret = ecn_brk_wai(data, sizeof(data));
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_brk_wai");
			return 1;
		}
		break;
	/* 人体検出なしの場合 */
	case 0x42:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);

		/* メインタスクに通知 */
		data[0] = 0xB1;
		data[1] = *(uint8_t *)src;
		ret = ecn_brk_wai(data, sizeof(data));
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_brk_wai");
			return 1;
		}
		break;
	default:
		/* 上記以外は受け付けない */
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
	uint8_t *p_src;
	time_t temp;
	struct tm _tm;

	if (size != 4)
		return 0;

	temp = rtc_read();
	gmtime_r(&temp, &_tm);

	/* 年月日設定 */
	p_src = (uint8_t *)src;
	_tm.tm_year = (*(p_src++) * 100) + *p_src++;
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
	syslog(LOG_NOTICE,"[@@echonet_main_task]:started");
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
		//syslog(LOG_NOTICE,"[@@msg_wait]");
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
		//syslog(LOG_NOTICE,"main_progress"); /*checked*/
		main_progress(now - prev);
		/* Echonet電文受信の場合 */
		if (ret == E_OK) {
			/* Echonet電文受信処理 */
			syslog(LOG_NOTICE,"main_recv_esv");
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
		//syslog(LOG_NOTICE,"[@@timeout]");
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
int main_btn_timer = TMO_FEVR;
enum main_state_t main_state = main_state_start;
bool_t main_btn1_state;
int main_btn1_count = 0;
bool_t main_btn2_state;
int main_btn2_count = 0;

/*
 * 初期化
 */
static void main_initialize()
{
	uint8_t btn1, btn2;

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

	/* ECHONETミドルウェアを起動するのを待つ */
	main_state = main_state_start;
	main_timer = 1000 * 1000;

	/* 10ms後にボタン状態を確認 */
	main_btn_timer = 10 * 1000;

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
	int result = main_timer;

	if ((result == TMO_FEVR)
		|| ((main_btn_timer != TMO_FEVR) && (main_btn_timer < result))) {
		result = main_btn_timer;
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
}

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

	syslog(LOG_NOTICE,"@@ecn_get_eobj");
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
				case main_state_search:
					if (eobjid == HUMAN_DETECTION_SENSER_ENOD) {
						/* 人体検知センサ検索完了 */
						main_state = main_state_idle;
						main_timer = TMO_FEVR;
					}
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

static void human_detectino_changed(uint8_t state);

/*
 * 応答電文待ちの割り込み処理
 */
static void main_break_wait(uint8_t *brkdat, int32_t len)
{
	ER ret;

	switch (main_state) {
	case main_state_idle:
		if (len < 2)
			break;

		switch (brkdat[0]) {
		case 0x01:
			break;
		case 0xB1:
			human_detectino_changed(brkdat[1]);
			break;
		}
		break;
	}
}

static void main_ontimer();
static void main_btn_ontimer();

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

		/* １秒後に人体検知センサを検索 */
		main_state = main_state_search;
		main_timer = 1000 * 1000;
		break;
	case main_state_search:
		/* 人体検知センサ再検索 */
		main_search();
		main_state = main_state_search;
		main_timer = 5000 * 1000;
		break;
	}
}

static void main_search()
{
	ER ret;
	T_EDATA *esv;

	/* 人体検知センサ検索 */
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

/*
 * タイムアウト処理
 */
static void main_btn_ontimer()
{
	uint8_t btn1, btn2;

	/* 10ms後にボタン状態を確認 */
	main_btn_timer = 10 * 1000;

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
}

enum lighting_mode_t {
	lighting_mode_auto,		/* 自動の場合 */
	lighting_mode_normal,	/* 通常灯の場合 */
	lighting_mode_night,	/* 常夜灯の場合 */
	lighting_mode_coler		/* カラー灯の場合 */
};
bool_t main_on = false;
enum lighting_mode_t main_mode = lighting_mode_auto;

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

	/* ON/OFF状態の切り替え */
	main_on = !main_on;
	p_edt[0] = main_on ? 0x30 : 0x31;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, GENERAL_LIGHTING_CLASS_EOBJ, 0x80, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	syslog(LOG_NOTICE,"ecn_snd_esv started");
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

	/* 点灯モードの切り替え */
	switch (main_mode) {
	/* 自動の場合 */
	case lighting_mode_auto:
		/* 通常灯に変更 */
		main_mode = lighting_mode_normal;
		p_edt[0] = 0x42;
		break;
	/* 通常灯の場合 */
	case lighting_mode_normal:
		/* 常夜灯の場合 */
		main_mode = lighting_mode_night;
		p_edt[0] = 0x43;
		break;
	/* 常夜灯の場合 */
	case lighting_mode_night:
		/* カラー灯の場合 */
		main_mode = lighting_mode_coler;
		p_edt[0] = 0x45;
		break;
	/* カラー灯の場合 */
	case lighting_mode_coler:
	default:
		/* 自動の場合 */
		main_mode = lighting_mode_auto;
		p_edt[0] = 0x41;
		break;
	}

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, GENERAL_LIGHTING_CLASS_EOBJ, 0xB6, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}

static void human_detectino_changed(uint8_t state)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[1];

	/* 照明がOFFで人体検出ありの場合 */
	if (!main_on && state == 0x41) {
		/* 照明をON */
		main_on = true;
	}
	/* 照明がOFFで人体検出ありの場合 */
	else if (main_on && state == 0x42) {
		/* 照明をOFF */
		main_on = false;
	}
	else
		return;

	p_edt[0] = main_on ? 0x30 : 0x31;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, GENERAL_LIGHTING_CLASS_EOBJ, 0x80, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}
