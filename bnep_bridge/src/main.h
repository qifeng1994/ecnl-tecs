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

#ifndef _MAIN_H_
#define _MAIN_H_

/*
 *		サンプルプログラム(1)のヘッダファイル
 */

/*
 *  ターゲット依存の定義
 */
#include <kernel.h>

/*
 *  各タスクの優先度の定義
 */

#define MAIN_PRIORITY	5		/* メインタスクの優先度 */
#define ETHER_INPUT_PRIORITY	5	/* Ethernet 入力タスクの優先度		*/

#define MAIN_STACK_SIZE		2048	/* メインタスクのスタック領域のサイズ */
#define	ETHER_INPUT_STACK_SIZE	1024	/* Ethernet 入力タスクのスタックサイズ	*/

#define NUM_MAIN_DATAQUEUE	1	/* メインタスクで待ち受けているデータキューのサイズ */

#define ETHER_ADDR_LEN		6	/* Ethernet (MAC) Address	*/
#define ETHER_TYPE_LEN		2	/* Type		*/
#define ETHER_CRC_LEN		0/*4*/	/* CRC		*/

#define IF_FLAG_UP				0x01U
#define IF_FLAG_LINK_UP			0x10U

#define ETHER_MIN_LEN		64
#define ETHER_MAX_LEN		(IF_MTU + sizeof(T_ETHER_HDR) + ETHER_CRC_LEN)

#define IF_MIN_LEN		ETHER_MIN_LEN

#define IF_ETHER_NIC_HDR_ALIGN	0

#define NUM_IF_BTUSB_TXBUF		2	/* 送信バッファ数			*/
#define NUM_IF_BTUSB_RXBUF		2	/* 受信バッファ数			*/
#define IF_BTUSB_BUF_PAGE_SIZE	1518	/* バッファサイズ */

#define INTATR_IF_BTUSB_TRX	(TA_NULL)	/* 割込み属性	*/
#define INTPRI_IF_BTUSB_TRX	(-1)		/* 割込み優先度	*/

#define NUM_IF_MBED_TXBUF		2	/* 送信バッファ数			*/
#define NUM_IF_MBED_RXBUF		2	/* 受信バッファ数			*/
#define IF_MBED_BUF_PAGE_SIZE	1518	/* バッファサイズ */

#define INHNO_IF_MBED	ETHERI_IRQn	/* パケット送受信 */
#define INTNO_IF_MBED	ETHERI_IRQn	/* パケット送受信 */
#define INTATR_IF_MBED_TRX	(TA_NULL)	/* 割込み属性	*/
#define INTPRI_IF_MBED_TRX	(-1)		/* 割込み優先度	*/

#define NUM_ARP_ENTRY		10			/* ARP キャッシュエントリ数	*/

#define ETHER_MCAST_ADDR	UINT_C(0x01)	/* マルチキャスト・アドレス	*/
#define GET_ETHER_HDR(nbuf)		((T_ETHER_HDR*)((nbuf)->buf))

#define NB_FLG_NOREL_IFOUT	UINT_C(0x80)

#define NET_COUNT_ETHER_NIC(obj, cnt)

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

typedef struct t_net_buf T_NET_BUF;

ER tget_net_buf (T_NET_BUF **blk, uint_t len, TMO tmout);
ER rel_net_buf (T_NET_BUF *blk);

typedef struct t_ifnet T_IFNET;
typedef struct t_if_softc T_IF_SOFTC;

/** Function prototype for netif status- or link-callback functions. */
typedef void (*ether_status_callback_fn)(T_IFNET *ether);
void ether_set_link_callback(ether_status_callback_fn link_callback);
void ether_set_link_up(T_IF_SOFTC *ic);
void ether_set_link_down(T_IF_SOFTC *ic);

struct t_net_buf {
	uint16_t	len;	/* データの長さ		*/
	uint8_t		idix;	/* mpfid のインデックス	*/
	uint8_t		flags;	/* フラグ		*/
	uint8_t		conn_pos;
#ifdef IF_ETHER_NIC_NET_BUF_ALIGN
	uint8_t		nalign[IF_ETHER_NIC_NET_BUF_ALIGN];
#endif
#if CPU_NET_ALIGN == 4 && IF_HDR_ALIGN != 4
	uint8_t		halign[4 - IF_HDR_ALIGN];
#endif
	uint8_t		buf[IF_MIN_LEN];	/* バッファ本体 */
};

struct t_ifnet {
	ether_status_callback_fn link_callback;
	uint8_t		flags;		/* フラグ					*/
};

typedef struct t_ether_header {

#if IF_ETHER_NIC_HDR_ALIGN != 0

	uint8_t		align[IF_ETHER_NIC_HDR_ALIGN];	/* アライン調整 */

#endif	/* of #if IF_ETHER_NIC_HDR_ALIGN != 0 */

	uint8_t		dhost[ETHER_ADDR_LEN];
	uint8_t		shost[ETHER_ADDR_LEN];
	uint16_t	type;
} __attribute__((packed, aligned(2))) T_ETHER_HDR;

#define T_IF_HDR		T_ETHER_HDR		/* インタフェースのヘッダ				*/

typedef struct t_ether_addr {
	uint8_t		lladdr[ETHER_ADDR_LEN];
} __attribute__((packed, aligned(2))) T_ETHER_ADDR;

#define T_IF_ADDR		T_ETHER_ADDR		/* インタフェースのアドレス			*/

struct t_if_softc {
	T_IF_ADDR		ifaddr;			/* ネットワークインタフェースのアドレス	*/
	uint16_t		timer;			/* 送信タイムアウト			*/
	struct t_mbed_softc *mbed;	/* ディバイス依存のソフトウェア情報	*/
	struct t_btusb_softc *btusb;	/* ディバイス依存のソフトウェア情報	*/
	ID			semid_txb_ready;	/* 送信セマフォ				*/
	ID			semid_rxb_ready;	/* 受信セマフォ				*/

#ifdef _IP6_CFG

	T_IF_ADDR 	maddrs[MAX_IF_MADDR_CNT];	/* マルチキャストアドレスリスト	*/

#endif	/* of #ifdef _IP6_CFG */
};

extern T_IF_SOFTC if_softc;

/* メインタスク */
void main_task(intptr_t exinf);

/* ETHERNET→BNEPタスク */
void ether_input_task(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */

#endif	/* of #ifndef _MAIN_H_ */
