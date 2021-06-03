#include "echonet.h"
/*家庭用エアコン*/
struct home_air_conditioner_t {
   /*節電動作設定*/
    power-saving_operation_setting;
};
extern struct home_air_conditioner_t home_air_conditioner_class_data;
EPRP_SETTER power-saving_operation_setting_prop_set;
struct home_air_conditioner_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct home_air_conditioner_t home_air_conditioner_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
struct home_air_conditioner_t {
   /*温度設定値*/
    set_temperature_value;
};
extern struct home_air_conditioner_t home_air_conditioner_class_data;
EPRP_SETTER set_temperature_value_prop_set;
