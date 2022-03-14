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

#ifndef _ECHONET_MAIN_H_
#define _ECHONET_MAIN_H_

#include "echonet.h"

#define ECHONET_MAIN_PRIORITY	5		/* メインタスクの優先度 */

#define ECHONET_MAIN_STACK_SIZE	1024	/* スタック領域のサイズ */

#define EOJ_X3_NODE_PROFILE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_GENERAL_LIGHTING_CLASS 1	/* 一般照明クラスのインスタンスコード */

#define EOJ_X3_HUMAN_DETECTION_SENSOR_NODE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_HUMAN_DETECTION_SENSOR 1	/* 人体検知センサクラスのインスタンスコード */

#ifndef TOPPERS_MACRO_ONLY

/*
 *  Ｖｅｒｓｉｏｎ情報の型
 */
struct ecn_cls0EF0_prp82_t {
	/* メジャーバージョン(小数点以上) */
	uint8_t field00C4EDF4;
	/* マイナーバージョン(小数点以下) */
	uint8_t field02EC5D9C;
	/* 電文タイプ */
	uint8_t field024F4A7C[2];
} __attribute__((packed));

/*
 *  メーカーコードの型
 */
struct field02804C64_t {
	/* メーカーコード */
	uint8_t field03CB1BF5[3];
} __attribute__((packed));

/*
 *  ノード識別番号の型
 */
struct ecn_cls0EF0_prp83_t {
	/* 下位通信層IDフィールド */
	uint8_t field00C99E5E;
	/* メーカーコード */
	struct field02804C64_t field02804C64;
	/* ユニークID部(メーカー独自) */
	uint8_t field03169154[13];
} __attribute__((packed));

/*
 *  規格Ｖｅｒｓｉｏｎ情報の型
 */
struct ecn_cls0001_prp82_t {
	/* 固定1(for future reserved) */
	uint8_t Reserved1;
	/* 固定2(for future reserved) */
	uint8_t Reserved2;
	/* リリース順をASCIIで示す */
	uint8_t field0223FBA4;
	/* 固定4(for future reserved) */
	uint8_t Reserved4;
} __attribute__((packed));

/*
 *  ノードプロファイルオブジェクト
 */
struct ecn_cls0EF0_t {
	/* 動作状態 */
	uint8_t property80;
	/* Ｖｅｒｓｉｏｎ情報 */
	struct ecn_cls0EF0_prp82_t property82;
	/* 識別番号 */
	struct ecn_cls0EF0_prp83_t property83;
	/* 異常内容 */
	uint16_t property89;
	/* メーカーコード */
	struct field02804C64_t property8A;
} __attribute__((packed));

/*
 *  時分の型
 */
struct ecn_cls0001_prp97_t {
	/* 時 */
	uint8_t field01D70446;
	/* 分 */
	uint8_t field008F2678;
} __attribute__((packed));

/*
 *  年月日の型
 */
struct ecn_cls0EF0_prp8E_t {
	/* 年 */
	uint16_t field01085A3F;
	/* 月 */
	uint8_t field014B2C3B;
	/* 日 */
	uint8_t field03A48E15;
}  __attribute__((packed));

/*
 *  一般照明クラス
 */
struct ecn_cls0290_t {
	/* 動作状態 */
	uint8_t property80;
	/* 点灯モード設定 */
	uint8_t propertyB6;
	/* 設置場所 */
	uint8_t property81;
	/* 規格Ｖｅｒｓｉｏｎ情報 */
	struct ecn_cls0001_prp82_t property82;
	/* 異常発生状態 */
	uint8_t property88;
	/* メーカーコード */
	struct field02804C64_t property8A;
	/* 現在時刻設定 */
	struct ecn_cls0001_prp97_t property97;
	/* 現在年月日設定 */
	struct ecn_cls0EF0_prp8E_t property98;
}  __attribute__((packed));

/*
 *  人体検知センサクラス
 */
struct ecn_cls0007_t {
	/* 動作状態 */
	uint8_t property80;
	/* 人体検知状態 */
	uint8_t propertyB1;
	/* 設置場所 */
	uint8_t property81;
	/* 規格Ｖｅｒｓｉｏｎ情報 */
	struct ecn_cls0001_prp82_t property82;
	/* 異常発生状態 */
	uint8_t property88;
	/* メーカーコード */
	struct field02804C64_t property8A;
}  __attribute__((packed));

extern struct ecn_cls0EF0_t node_profile_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0290_t general_lighting_class_data;	/* 一般照明クラスのデータ */

extern struct ecn_cls0EF0_t human_detection_sensor_node_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0007_t human_detection_sensor_data;	/* 人体検知センサクラスのデータ */

EPRP_SETTER onoff_prop_set;
EPRP_SETTER alarm_prop_set;
EPRP_SETTER lighting_mode_prop_set;
EPRP_SETTER human_detection_set;
EPRP_SETTER time_prop_set;
EPRP_GETTER time_prop_get;
EPRP_SETTER date_prop_set;
EPRP_GETTER date_prop_get;

void echonet_main_task(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */

#endif	/* of #ifndef _ECHONET_MAIN_H_ */
