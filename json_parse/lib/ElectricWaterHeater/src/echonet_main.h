#include "echonet.h"
/*電気温水器*/
struct electric_water_heater_t {
   /*エネルギーシフト参加状態*/
    participation_in_energy_shift;
};
extern struct electric_water_heater_t electric_water_heater_class_data;
EPRP_SETTER participation_in_energy_shift_prop_set;
struct electric_water_heater_t {
   /*昼間沸き上げシフト時刻１*/
    daytime_heating_shift_time_1;
};
extern struct electric_water_heater_t electric_water_heater_class_data;
EPRP_SETTER daytime_heating_shift_time_1_prop_set;
struct electric_water_heater_t {
   /*昼間沸き上げシフト時刻２*/
    daytime_heating_shift_time_2;
};
extern struct electric_water_heater_t electric_water_heater_class_data;
EPRP_SETTER daytime_heating_shift_time_2_prop_set;
struct electric_water_heater_t {
   /*風呂自動モード設定*/
    automatic_bath_water_heating_mode_setting;
};
extern struct electric_water_heater_t electric_water_heater_class_data;
EPRP_SETTER automatic_bath_water_heating_mode_setting_prop_set;
