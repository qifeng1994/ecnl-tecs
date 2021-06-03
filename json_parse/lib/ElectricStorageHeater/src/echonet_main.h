#include "echonet.h"
/*電気蓄熱暖房器*/
struct electric_storage_heater_t {
   /*蓄熱温度設定値*/
    heat_storage_temperature_setting;
};
extern struct electric_storage_heater_t electric_storage_heater_class_data;
EPRP_SETTER heat_storage_temperature_setting_prop_set;
struct electric_storage_heater_t {
   /*深夜電力開始時刻設定値*/
    midnight_power_start_time_setting;
};
extern struct electric_storage_heater_t electric_storage_heater_class_data;
EPRP_SETTER midnight_power_start_time_setting_prop_set;
