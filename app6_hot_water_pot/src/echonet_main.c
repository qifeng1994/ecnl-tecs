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

/* TODO: メーカーコードを設定 */
#define MAKER_CODE	{ 0x00, 0x00, 0xB3 }	/* TOPPERSプロジェクト */

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t node_local_profile_data = {
	0x30,	/* 動作状態 */
	{ 0x01, 0x0A, { 0x01, 0x00 } },	/* Ｖｅｒｓｉｏｎ情報 */
	{
		0xFE,	/* 下位通信層IDフィールド */
		{ MAKER_CODE },	/* メーカーコード */
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },	/* ユニークID部(メーカー独自) */
	},
	{ MAKER_CODE },	/* メーカーコード */
};

/* 電気ポットクラス */
struct ecn_cls03B2_t electric_hot_water_pot_data = {
	0x30,	/* 動作状態 */
	0x41,	/* 湯切れ警告状態 */
	0x41,	/* 出湯状態 */
	0x00,	/* 設置場所 */
	{ 0x00, 0x00, 'C', 0x00 },	/* 規格Ｖｅｒｓｉｏｎ情報 */
	0x42,	/* 異常発生状態 */
	{ MAKER_CODE },	/* メーカーコード */
};

/* ノードプロファイルオブジェクト */
struct ecn_cls0EF0_t node_remote_profile_data = {
	0x30,	/* 動作状態 */
	{ 0x01, 0x0A, { 0x01, 0x00 } },	/* Ｖｅｒｓｉｏｎ情報 */
	{
		0xFE,	/* 下位通信層IDフィールド */
		{ MAKER_CODE },	/* メーカーコード */
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },	/* ユニークID部(メーカー独自) */
	},
	{ MAKER_CODE },	/* メーカーコード */
};

/* ブザークラス */
struct ecn_cls02A0_t buzzer_data = {
	0x30,	/* 動作状態 */
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
 * 湯切れ警告状態設定関数
 */
int no_water_warning_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[1];

	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);

	switch (*(uint8_t *)src) {
	/* 湯切れ無しの場合 */
	case 0x40:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDの赤をOFF */
		gpio_write(&led_red, 0);
		break;
	/* 湯切れ有りの場合 */
	case 0x41:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDの赤をON */
		gpio_write(&led_red, 1);
		break;
	/* 0x40か0x41以外は受け付けない */
	default:
		return 0;
	}

	/* メインタスクに通知 */
	data[0] = 0xB1;
	ret = ecn_brk_wai(data, sizeof(data));
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_brk_wai");
	}

	return 1;
}

/*
 * 出湯状態設定関数
 */
int discharge_status_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	/* サイズが１以外は受け付けない */
	if (size != 1)
		return 0;

	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);

	switch (*(uint8_t *)src) {
	/* 出湯有の場合 */
	case 0x41:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDの青をON */
		gpio_write(&led_blue, 1);
		break;
	/* 出湯無の場合 */
	case 0x42:
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		/* LEDの青をOFF */
		gpio_write(&led_blue, 0);
		break;
	/* 0x41か0x42以外は受け付けない */
	default:
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
	main_state_wait_res,
};

int main_timer = TMO_FEVR;
enum main_state_t main_state = main_state_start;
int main_retry;

int main_btn_timer = TMO_FEVR;

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

	eobjid = ecn_get_eobj(esv);
	if (eobjid == EOBJ_NULL) {
		syslog(LOG_ERROR, "ecn_get_eobj");
		return;
	}

	ret = ecn_itr_ini(&enm, esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_itr_ini");
		return;
	}

	for (;;) {
		while ((ret = ecn_itr_nxt(&enm, &epc, &pdc, p_edt)) == E_OK) {
			switch (epc) {
			case 0xB1:
				switch (main_state) {
				/* プロパティ通知応答待ちの場合 */
				case main_state_wait_res:
					/* プロパティ通知応答のみ処理 */
					if ((esv->hdr.edata.esv == ESV_INFC_RES) && (eobjid == BUZZER_NODE_EOBJ)) {
						/* 応答受信 */
						main_state = main_state_idle;
						main_timer = TMO_FEVR;
					}
					break;
				}
				break;
			case 0xD6:
				switch (main_state) {
				case main_state_search:
					if (eobjid == BUZZER_NODE_EOBJ) {
						/* ブザー検索完了 */
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

/*
 * 応答電文待ちの割り込み処理
 */
static void main_break_wait(uint8_t *brkdat, int32_t len)
{
	ER ret;
	T_EDATA *esv;

	if (brkdat[0] == 0x01) {
		// Link up/down
		return;
	}

	switch (main_state) {
	case main_state_idle:
	case main_state_wait_res:
		if ((len >= 1) && (*brkdat == 0xB1)) {
			/* ブザーに湯切れ警告状態通知 */
			ret = ecn_esv_infc(&esv, BUZZER_NODE_EOBJ, ELECTRIC_HOT_WATER_POT_EOBJ, 0xB1);
			if (ret != E_OK) {
				syslog(LOG_ERROR, "ecn_esv_infc");
				return;
			}

			/* 電文送信 */
			ret = ecn_snd_esv(esv);
			if (ret != E_OK) {
				syslog(LOG_ERROR, "ecn_snd_esv");
			}

			/* ブザーからの応答待ち（タイムアウト１秒、リトライ３回） */
			main_state = main_state_wait_res;
			main_timer = 1000 * 1000;
			main_retry = 3;
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
	T_EDATA *esv;

	switch (main_state) {
	case main_state_start:
		/* ECHONETミドルウェアを起動 */
		ret = ecn_sta_svc();
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_sta_svc");
		}

		/* １秒後にブザーを検索 */
		main_state = main_state_search;
		main_timer = 1000 * 1000;
		break;
	case main_state_idle:
		syslog(LOG_ERROR, "timeout faild on main_state_idle");
		main_timer = TMO_FEVR;
		break;
	case main_state_search:
		/* ブザー再検索 */
		main_search();
		main_state = main_state_search;
		main_timer = 5000 * 1000;
		break;
	case main_state_wait_res:
		/* リトライアウトの場合 */
		if (main_retry == 0) {
			/* あきらめる */
			main_state = main_state_idle;
			main_timer = TMO_FEVR;
			break;
		}

		/* ブザーに湯切れ警告状態通知を再送 */
		ret = ecn_esv_infc(&esv, BUZZER_NODE_EOBJ, ELECTRIC_HOT_WATER_POT_EOBJ, 0xB1);
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_esv_infc");
			main_state = main_state_idle;
			main_timer = TMO_FEVR;
			return;
		}

		/* 電文送信 */
		ret = ecn_snd_esv(esv);
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_snd_esv");
			main_state = main_state_idle;
			main_timer = TMO_FEVR;
			return;
		}

		/* 応答待ち */
		main_state = main_state_wait_res;
		main_timer = 1000 * 1000;
		main_retry--;
		break;
	}
}

static void main_search()
{
	ER ret;
	T_EDATA *esv;

	/* ブザー検索 */
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

bool_t main_no_wather;

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

	/* 湯切れ警告状態 */
	main_no_wather = !main_no_wather;

	p_edt[0] = main_no_wather ? 0x41 : 0x40;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_seti(&esv, ELECTRIC_HOT_WATER_POT_EOBJ, 0xB1, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_seti");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
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

	/* 出湯操作状態（押している時が出湯あり、押していない時は出湯なし） */
	p_edt[0] = push ? 0x41 : 0x42;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_seti(&esv, ELECTRIC_HOT_WATER_POT_EOBJ, 0xE2, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_seti");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_snd_esv");
	}
}
