/*電気温水器*/
struct electric_water_heater_t {
   /*給湯中状態*/
    hot_water_supply_status;
};
struct electric_water_heater_t {
   /*エネルギーシフト参加状態*/
    participation_in_energy_shift;
};
struct electric_water_heater_t {
   /*沸き上げ開始基準時刻*/
    standard_time_to_start_heating;
};
struct electric_water_heater_t {
   /*エネルギーシフト回数*/
    number_of_energy_shifts;
};
struct electric_water_heater_t {
   /*昼間沸き上げシフト時刻１*/
    daytime_heating_shift_time_1;
};
struct electric_water_heater_t {
   /*昼間沸き上げシフト時刻１での沸き上げ予測電力量*/
    expected_electric_energy_at_daytime_heating_shift_time_1;
};
struct electric_water_heater_t {
   /*時間あたり消費電力量１*/
    consumption_of_electric_energy_per_hour_1;
};
struct electric_water_heater_t {
   /*昼間沸き上げシフト時刻２*/
    daytime_heating_shift_time_2;
};
struct electric_water_heater_t {
   /*昼間沸き上げシフト時刻２での沸き上げ予測電力量*/
    expected_electric_energy_at_daytime_heating_shift_time_2;
};
struct electric_water_heater_t {
   /*時間あたり消費電力量２*/
    consumption_of_electric_energy_per_hour_2;
};
struct electric_water_heater_t {
   /*風呂自動モード設定*/
    automatic_bath_water_heating_mode_setting;
};
