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

/*
 *  各タスクの優先度の定義
 */

#define ECHONET_MAIN_PRIORITY	5		/* メインタスクの優先度 */

#define ECHONET_MAIN_STACK_SIZE	1024	/* スタック領域のサイズ */

#define EOJ_X3_NODE_PROFILE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_HOME_AIR_CONDITIONER 1	/* 家庭用エアコンクラスのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_01_NODE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_01 1	/* 温度センサクラスのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_02_NODE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_02 1	/* 温度センサクラスのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_03_NODE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_03 1	/* 温度センサクラスのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_04_NODE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_TEMP_SENSOR_04 1	/* 温度センサクラスのインスタンスコード */

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

extern void main_task(intptr_t exinf);

/*
 *  Ｖｅｒｓｉｏｎ情報の型
 */
struct ecn_cls0EF0_prp82_t {
	/* メジャーバージョン(小数点以上) */
	uint8_t field03B32EE5;
	/* マイナーバージョン(小数点以下) */
	uint8_t field014CA613;
	/* 電文タイプ */
	uint8_t field03B1D6B0[2];
} __attribute__((packed));

/*
 *  メーカーコードの型
 */
struct field0073673B_t {
	/* メーカーコード */
	uint8_t field016C5D04[3];
} __attribute__((packed));

/*
 *  識別番号の型
 */
struct ecn_cls0EF0_prp83_t {
	/* 下位通信層IDフィールド */
	uint8_t field01408C35;
	/* メーカーコード */
	struct field0073673B_t field0073673B;
	/* ユニークID部(メーカー独自) */
	uint8_t field0344EDE4[13];
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
	uint8_t field00CF4527;
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
	struct field0073673B_t property8A;
} __attribute__((packed));

/*
 *  家庭用エアコンクラス
 */
struct ecn_cls0130_t {
	/* 動作状態 */
	uint8_t property80;
	/* 運転モード設定 */
	uint8_t propertyB0;
	/* 温度設定値 */
	uint8_t propertyB3;
	/* 設置場所 */
	uint8_t property81;
	/* 規格Ｖｅｒｓｉｏｎ情報 */
	struct ecn_cls0001_prp82_t property82;
	/* 異常発生状態 */
	uint8_t property88;
	/* メーカーコード */
	struct field0073673B_t property8A;
} __attribute__((packed));

/*
 *  温度センサクラス
 */
struct ecn_cls0011_t {
	/* 動作状態 */
	uint8_t property80;
	/* 温度計測値 */
	int16_t propertyE0;
	/* 設置場所 */
	uint8_t property81;
	/* 規格Ｖｅｒｓｉｏｎ情報 */
	struct ecn_cls0001_prp82_t property82;
	/* 異常発生状態 */
	uint8_t property88;
	/* メーカーコード */
	struct field0073673B_t property8A;
} __attribute__((packed));

extern struct ecn_cls0EF0_t node_profile_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0130_t home_air_conditioner_data;	/* 家庭用エアコンクラスのデータ */

extern struct ecn_cls0EF0_t temp_sensor_01_node_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0011_t temp_sensor_01_data;	/* 温度センサクラスのデータ */

extern struct ecn_cls0EF0_t temp_sensor_02_node_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0011_t temp_sensor_02_data;	/* 温度センサクラスのデータ */

extern struct ecn_cls0EF0_t temp_sensor_03_node_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0011_t temp_sensor_03_data;	/* 温度センサクラスのデータ */

extern struct ecn_cls0EF0_t temp_sensor_04_node_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct ecn_cls0011_t temp_sensor_04_data;	/* 温度センサクラスのデータ */

EPRP_SETTER onoff_prop_set;
EPRP_SETTER alarm_prop_set;
EPRP_SETTER ecn_cls0130_propertyB0_set;
EPRP_SETTER ecn_cls0130_propertyB3_set;

void echonet_main_task(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */

#endif	/* of #ifndef _ECHONET_MAIN_H_ */
