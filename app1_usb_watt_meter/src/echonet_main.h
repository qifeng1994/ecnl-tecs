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

#ifndef _ECHONET_MAIN_H_
#define _ECHONET_MAIN_H_

#include "echonet.h"

#define ECHONET_MAIN_PRIORITY	5		/* メインタスクの優先度 */

#define ECHONET_MAIN_STACK_SIZE	1024	/* スタック領域のサイズ */

#define EOJ_X3_LOCAL_NODE 1	/* ノードプロファイルオブジェクトのインスタンスコード */

#define EOJ_X3_ELECTRIC_ENERGY_METER_1 1	/* 電力量メータ１のインスタンスコード */
#define EOJ_X3_ELECTRIC_ENERGY_METER_2 2	/* 電力量メータ２のインスタンスコード */
#define EOJ_X3_ELECTRIC_ENERGY_METER_3 3	/* 電力量メータ３のインスタンスコード */
#define EOJ_X3_ELECTRIC_ENERGY_METER_4 4	/* 電力量メータ４のインスタンスコード */
#define EOJ_X3_ELECTRIC_ENERGY_METER_5 5	/* 電力量メータ５のインスタンスコード */
#define EOJ_X3_ELECTRIC_ENERGY_METER_6 6	/* 電力量メータ６のインスタンスコード */

#ifndef TOPPERS_MACRO_ONLY

/*
 *  Ｖｅｒｓｉｏｎ情報の型
 */
struct version_information_t {
	/* メジャーバージョン(小数点以上) */
	uint8_t major_version_number;
	/* マイナーバージョン(小数点以下) */
	uint8_t minor_version_number;
	/* 電文タイプ */
	uint8_t message_type[2];
} __attribute__((packed));

/*
 *  メーカーコードの型
 */
struct manufacturer_code_t {
	/* メーカーコード */
	uint8_t manufacturer_code[3];
} __attribute__((packed));

/*
 *  識別番号の型
 */
struct node_identification_number_t {
	/* 下位通信層IDフィールド */
	uint8_t lower_communication_id_field;
	/* メーカーコード */
	struct manufacturer_code_t manufacturer_code;
	/* ユニークID部(メーカー独自) */
	uint8_t unique_id_section[13];
} __attribute__((packed));

/*
 *  規格Ｖｅｒｓｉｏｎ情報の型
 */
struct standard_version_information_t {
	/* 固定1(for future reserved) */
	uint8_t reserved1;
	/* 固定2(for future reserved) */
	uint8_t reserved2;
	/* リリース順をASCIIで示す */
	uint8_t order_of_release;
	/* 固定4(for future reserved) */
	uint8_t reserved3;
} __attribute__((packed));

/*
 *  ノードプロファイルオブジェクト
 */
struct node_profile_object_t {
	/* 動作状態 */
	uint8_t operation_status;
	/* Ｖｅｒｓｉｏｎ情報 */
	struct version_information_t version_information;
	/* 識別番号 */
	struct node_identification_number_t identification_number;
	/* 異常内容 */
	uint16_t fault_content;
	/* メーカーコード */
	struct manufacturer_code_t manufacturer_code;
} __attribute__((packed));

/*
 *  電力量メータ
 */
struct watt_hour_meter_t {
	/* 動作状態 */
	uint8_t operation_status;
	/* 設置場所 */
	uint8_t installation_location;
	/* 規格Ｖｅｒｓｉｏｎ情報 */
	struct standard_version_information_t standard_version_information;
	/* 異常発生状態 */
	uint8_t fault_status;
	/* メーカーコード */
	struct manufacturer_code_t manufacturer_code;
	/* 積算電力量単位 */
	uint8_t integral_electric_energy_unit;
	/* 積算電力量計測値 */
	uint32_t integral_electric_energy_measurement_value;
	/* 積算電力量計測値履歴１ */
	uint32_t integral_electric_energy_measurement_log[48];
	int current_pos;
}  __attribute__((packed));

extern struct node_profile_object_t local_node_data;	/* ノードプロファイルオブジェクトのデータ */

extern struct watt_hour_meter_t electric_energy_meter_data[6];	/* 電力量メータ１～６のデータ */

EPRP_SETTER onoff_prop_set;
EPRP_SETTER alarm_prop_set;
EPRP_SETTER time_prop_set;
EPRP_GETTER time_prop_get;
EPRP_SETTER date_prop_set;
EPRP_GETTER date_prop_get;
EPRP_GETTER watt_hour_meter_integral_electric_energy_measurement_value_get;
EPRP_GETTER watt_hour_meter_integral_electric_energy_unit_get;
EPRP_GETTER watt_hour_meter_integral_electric_energy_measurement_log_get;

void echonet_main_task(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */

#endif	/* of #ifndef _ECHONET_MAIN_H_ */
