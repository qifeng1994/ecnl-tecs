#include "echonet.h"
/*業務用ガスヒートポンプエアコン室内機*/
struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t {
   /*温度設定値*/
    temperature_setting_value;
};
extern struct gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_t gas_heat_pump-type_commercial_air_conditioner_(indoor_unit)_class_data;
EPRP_SETTER temperature_setting_value_prop_set;
