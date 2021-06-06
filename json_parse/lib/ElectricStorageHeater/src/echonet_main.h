#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_ELECTRIC_STORAGE_HEATER_CLASS 1
/*電気蓄熱暖房器*/
struct electric_storage_heater_t {
   /*蓄熱温度設定値*/
    heat_storage_temperature_setting;
};
extern struct electric_storage_heater_t electric_storage_heater_class_data;
EPRP_SETTER heat_storage_temperature_setting_prop_set;
void echonet_main_task(intptr_t exinf);
struct electric_storage_heater_t {
   /*深夜電力開始時刻設定値*/
    midnight_power_start_time_setting;
};
extern struct electric_storage_heater_t electric_storage_heater_class_data;
EPRP_SETTER midnight_power_start_time_setting_prop_set;
void echonet_main_task(intptr_t exinf);
