#include "echonet.h"
#define ECHONET_MAIN_PRIORITY 5
    #define ECHONET_MAIN_STACK_SIZE	1024
    #define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_PARALLEL_PROCESSING_COMBINATION-TYPE_POWER_CONTROL_CLASS 1
/*Ｖｅｒｓｉｏｎ情報の型*/
struct version_information_t {
    /* メジャーバージョン(小数点以上) */
    uint8_t major_version_number;
    /* マイナーバージョン(小数点以下) */
    uint8_t minor_version_number;
    /* 電文タイプ */
    uint8_t message_type[2];
};

/*メーカーコードの型*/
struct manufacturer_code_t {
    /* メーカーコード */
    uint8_t manufacturer_code[3];
};

/*識別番号の型*/
struct node_identification_number_t {
    /* 下位通信層IDフィールド */
    uint8_t lower_communication_id_field;
    /* メーカーコード */
    struct manufacturer_code_t manufacturer_code;
    /* ユニークID部(メーカー独自) */
    uint8_t unique_id_section[13];
};

/*規格Ｖｅｒｓｉｏｎ情報の型*/
struct standard_version_information_t {
    /* 固定1(for future reserved) */
    uint8_t reserved1;
    /* 固定2(for future reserved) */
    uint8_t reserved2;
    /* リリース順をASCIIで示す */
    uint8_t order_of_release;
    /* 固定4(for future reserved) */
    uint8_t reserved4;
};

/*ノードプロファイルオブジェクト*/
struct node_profile_object_t {
    /* 動作状態 */
    uint8_t operation_status;
    /* Ｖｅｒｓｉｏｎ情報 */
    struct version_information_t version_information;
    /* 識別番号 */
    struct node_identification_number_t identification_number;
    /* メーカーコード */
    struct manufacturer_code_t manufacturer_code;
};
/*並列処理併用型電力制御*/
struct parallel_processing_combination-type_power_control_t {
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
   /*電力逸脱情報*/
    uint8_t power_deviation_information;
};
extern struct node_profile_object_t local_node_data;
extern struct parallel_processing_combination-type_power_control_t parallel_processing_combination-type_power_control_class_data;
EPRP_SETTER onoff_prop_set;
EPRP_SETTER alarm_prop_set;
EPRP_SETTER power_deviation_information_prop_set;
void echonet_main_task(intptr_t exinf);
   /*削減電力情報*/
    uint8_t power_reduction_information;
};
extern struct node_profile_object_t local_node_data;
extern struct parallel_processing_combination-type_power_control_t parallel_processing_combination-type_power_control_class_data;
EPRP_SETTER onoff_prop_set;
EPRP_SETTER alarm_prop_set;
EPRP_SETTER power_reduction_information_prop_set;
void echonet_main_task(intptr_t exinf);
   /*送信インターバル*/
    uint8_t transmission_interval;
};
extern struct node_profile_object_t local_node_data;
extern struct parallel_processing_combination-type_power_control_t parallel_processing_combination-type_power_control_class_data;
EPRP_SETTER onoff_prop_set;
EPRP_SETTER alarm_prop_set;
EPRP_SETTER transmission_interval_prop_set;
void echonet_main_task(intptr_t exinf);
