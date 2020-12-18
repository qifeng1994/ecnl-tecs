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

#include "shellif.h"
#include <kernel.h>
#include <t_stdlib.h>
#include <sil.h>
#include <stdlib.h>
#include <setjmp.h>
#include <string.h>
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
#include "target_syssvc.h"
#include "kernel_cfg.h"
#include "main.h"
#include "ffarch.h"
#include "ff.h"
#include <stdio.h>
#include "usrcmd.h"
#include "gpio_api.h"
#include "usb_hbth.h"
#include "ntshell_main.h"
#include <btstack/utils.h>
#include "hal/pinmap.h"
#include "if_btusb.h"
#include "if_mbed.h"

ID ws_api_mailboxid = MAIN_DATAQUEUE;
extern int bt_bnep_mode;
/* PANU向けリモートアドレス */
// BUFFALLO
//bd_addr_t remote_addr = { 0x00,0x1B,0xDC,0x04,0x5C,0x2D };
// Raspberry Pi 3
//bd_addr_t remote_addr = {0xB8,0x27,0xEB,0x10,0x6D,0x60};
// PRINCETON
//bd_addr_t remote_addr = {0x00,0x1B,0xDC,0x06,0x6E,0x98};
// ELECOM
bd_addr_t remote_addr = {0x00,0x1B,0xDC,0x09,0x27,0x26};

/* ネットワークインタフェースに依存しないソフトウェア情報 */

T_IF_SOFTC if_softc = {
	{0,},						/* ネットワークインタフェースのアドレス	*/
	0,							/* 送信タイムアウト			*/
	NULL,						/* ディバイス依存のソフトウェア情報	*/
	NULL,						/* ディバイス依存のソフトウェア情報	*/
	SEM_IF_MBED_SBUF_READY,	/* 送信セマフォ			*/
	SEM_IF_MBED_RBUF_READY,	/* 受信セマフォ			*/

#ifdef SUPPORT_INET6

	IF_MADDR_INIT,				/* マルチキャストアドレスリスト	*/

#endif	/* of #ifdef SUPPORT_INET6 */
};

PRI main_task_priority = MAIN_PRIORITY + 1;

static void netif_link_callback(T_IFNET *ether);
extern int execute_command(int wait);

enum main_state_t {
	main_state_start,
	main_state_idle,
};

struct main_t {
	TMO timer;
	enum main_state_t state;
	SYSTIM prev, now;
};
struct main_t main_obj;

static void main_initialize();
static TMO main_get_timer();
static void main_progress(TMO interval);
static void main_timeout();

extern int ntshell_exit;

int uart_read(char *buf, int cnt, void *extobj)
{
	struct main_t *obj = (struct main_t *)extobj;
	int result;
	ER ret;
	int timer;

	obj->prev = obj->now;

	/* タイマー取得 */
	timer = main_get_timer();

	/* 待ち */
	ret = serial_trea_dat(SIO_PORTID, buf, cnt, timer);
	if ((ret < 0) && (ret != E_OK) && (ret != E_TMOUT)) {
		syslog(LOG_NOTICE, "tslp_tsk ret: %s %d", itron_strerror(ret), timer);
		ntshell_exit = 1;
		return -1;
	}
	result = (int)ret;

	ret = get_tim(&obj->now);
	if (ret != E_OK) {
		syslog(LOG_NOTICE, "get_tim ret: %s", itron_strerror(ret));
		ntshell_exit = 1;
		return -1;
	}

			/* 時間経過 */
	int elapse = obj->now - obj->prev;
	main_progress(elapse);

	/* タイムアウト処理 */
	main_timeout();

	return result;
}

int uart_write(const char *buf, int cnt, void *extobj)
{
	return serial_wri_dat(SIO_PORTID, buf, cnt);
}

ntshell_t ntshell;

/*
 * メインタスク
 */
void main_task(intptr_t exinf)
{
	// NAP mode
	bt_bnep_mode = 1;

	main_initialize();

	ntshell_init(&ntshell, uart_read, uart_write, cmd_execute, &main_obj);
	ntshell_set_prompt(&ntshell, "NTShell>");
	ntshell_execute(&ntshell);
}

/*
 * 初期化
 */
static void main_initialize()
{
	FILINFO fno;
#if FF_USE_LFN
	char lfn[FF_MAX_LFN + 1];
	fno.lfname = lfn;
	fno.lfsize = FF_MAX_LFN + 1;
#endif
	ER ret;

	ntshell_task_init(SIO_PORTID);

	main_obj.timer = TMO_FEVR;
	main_obj.state = main_state_start;

	gpio_t led_blue, led_green, led_red, sw;
	gpio_init_out(&led_blue, LED_BLUE);
	gpio_init_out(&led_green, LED_GREEN);
	gpio_init_out(&led_red, LED_RED);
	gpio_init_in(&sw, USER_BUTTON0);

	bool_t exec = gpio_read(&sw) == 1;

	gpio_write(&led_blue, 1);
	gpio_write(&led_green, exec ? 1 : 0);
	gpio_write(&led_red, 0);

	ether_set_link_callback(netif_link_callback);

	/* 初期化 */
	ffarch_init();

	gpio_write(&led_green, 0);

	usbhost_init(USBHOST_TASK);

	ret = get_tim(&main_obj.now);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "get_tim");
		ext_tsk();
		return;
	}
}

/*
 * タイマー取得
 */
static TMO main_get_timer()
{
	TMO timer = main_obj.timer;

	return timer;
}

/*
 * 時間経過
 */
static void main_progress(TMO interval)
{
	if (main_obj.timer != TMO_FEVR) {
		main_obj.timer -= interval;
		if (main_obj.timer < 0) {
			main_obj.timer = 0;
		}
	}
}

/*
 * タイムアウト処理
 */
static void main_timeout()
{
	//if (main_obj.timer == 0) {
	//}
}

void ntshell_change_netif_link(uint8_t link_up, uint8_t up);

static void netif_link_callback(T_IFNET *ether)
{
	uint8_t link_up = (ether->flags & IF_FLAG_LINK_UP) != 0;
	uint8_t up = (ether->flags & IF_FLAG_UP) != 0;

	ntshell_change_netif_link(link_up, up);
}

static const cmd_table_t cmdlist[] = {
	{"cd", "change directory", usrcmd_cd },
	{"ls", "list files", usrcmd_ls },
	{"cp", "copy file", usrcmd_cp },
	{"rm", "remove file", usrcmd_rm },
	{"mv", "move file", usrcmd_mv },
	{"mkdir", "Make directory", usrcmd_mkdir},
	{"hexdump", "Hex dump", usrcmd_hexdump},
	{"date", "print date and time", usrcmd_date},
	{"info", "This is a description text string for info command.", usrcmd_info},
	{"exit", "Exit Natural Tiny Shell", usrcmd_exit},
};
cmd_table_info_t cmd_table_info = { cmdlist, sizeof(cmdlist) / sizeof(cmdlist[0]) };

static T_IFNET ether_ifnet;

T_IFNET *ether_get_ifnet()
{
	return &ether_ifnet;
}

/**
 * Called by a driver when its link goes up
 */
void ether_set_link_up(T_IF_SOFTC *ic)
{
  if (!(ether_ifnet.flags & IF_FLAG_LINK_UP)) {
    ether_ifnet.flags |= IF_FLAG_LINK_UP;

    if (ether_ifnet.flags & IF_FLAG_UP) {
#if LWIP_ARP
      /* For Ethernet network interfaces, we would like to send a "gratuitous ARP" */ 
      if (ether_ifnet.flags & IF_FLAG_ETHARP) {
        etharp_gratuitous(&ether_ifnet);
      }
#endif /* LWIP_ARP */

#if LWIP_IGMP
      /* resend IGMP memberships */
      if (ether_ifnet._flags & IF_FLAG_IGMP) {
        igmp_report_groups(&ether_ifnet);
      }
#endif /* LWIP_IGMP */
    }
    if (ether_ifnet.link_callback) {
      (ether_ifnet.link_callback)(&ether_ifnet);
    }
  }
}

/**
 * Called by a driver when its link goes down
 */
void ether_set_link_down(T_IF_SOFTC *ic)
{
  if (ether_ifnet.flags & IF_FLAG_LINK_UP) {
    ether_ifnet.flags &= ~IF_FLAG_LINK_UP;
    if (ether_ifnet.link_callback) {
      (ether_ifnet.link_callback)(&ether_ifnet);
    }
  }
}

/**
 * Set callback to be called when link is brought up/down
 */
void ether_set_link_callback(ether_status_callback_fn link_callback)
{
	ether_ifnet.link_callback = link_callback;
}

/*
 *  Ethernet 入力タスク
 */

void
ether_input_task(intptr_t exinf)
{
	T_IF_SOFTC	*ic = &if_softc;
	T_NET_BUF	*input;
	ER ret;

	btusb_probe(ic);
	btusb_init(ic);

	if_mbed_probe(ic);
	if_mbed_init(ic);

	while (true) {
		ret = wai_sem(ic->semid_rxb_ready);
		if (ret != E_OK) {
			syslog(LOG_DEBUG, "wai_sem(ic->semid_rxb_ready) = %d", ret);
			return;
		}

		if ((input = if_mbed_read(ic)) != NULL) {
			int rel = btusb_start(ic, input);
			if (rel) {
				rel_net_buf(input);
			}
		}
	}
}

ER tget_net_buf (T_NET_BUF **blk, uint_t len, TMO tmout)
{
	T_NET_BUF *buf;

	buf = malloc(sizeof(T_NET_BUF) + len);
	*blk = buf;
	if (buf == NULL)
		return E_TMOUT;

	buf->len = len;
	buf->idix = 0;
	buf->flags = 0;

	return E_OK;
}

ER rel_net_buf (T_NET_BUF *blk)
{
	free(blk);

	return E_OK;
}
