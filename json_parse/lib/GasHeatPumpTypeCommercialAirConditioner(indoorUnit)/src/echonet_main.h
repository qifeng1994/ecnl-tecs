#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_GAS_HEAT_PUMP-TYPE_COMMERCIAL_AIR_CONDITIONER_(INDOOR_UNIT)_CLASS 1
/*業務用ガスヒートポンプエアコン室内機*/
struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t {
   /*温度設定値*/
    temperature_setting_value;
};
extern struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_class_data;
EPRP_SETTER temperature_setting_value_prop_set;
void echonet_main_task(intptr_t exinf);
