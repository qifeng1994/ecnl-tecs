#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_HOME_AIR_CONDITIONER_CLASS 1
/*家庭用エアコン*/
struct home_air_conditioner_t {
   /*節電動作設定*/
    power-saving_operation_setting;
};
extern struct home_air_conditioner_t home_air_conditioner_class_data;
EPRP_SETTER power-saving_operation_setting_prop_set;
void echonet_main_task(intptr_t exinf);
struct home_air_conditioner_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct home_air_conditioner_t home_air_conditioner_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
struct home_air_conditioner_t {
   /*温度設定値*/
    set_temperature_value;
};
extern struct home_air_conditioner_t home_air_conditioner_class_data;
EPRP_SETTER set_temperature_value_prop_set;
void echonet_main_task(intptr_t exinf);
