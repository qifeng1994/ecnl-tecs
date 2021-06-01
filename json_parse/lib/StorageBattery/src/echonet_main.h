/*蓄電池*/
struct storage_battery_t {
   /*識別番号*/
    identification_number;
};
struct storage_battery_t {
   /*現在時刻設定*/
    current_time_setting;
};
struct storage_battery_t {
   /*現在年月日設定*/
    current_date_setting;
};
struct storage_battery_t {
   /*AC実効容量（充電）*/
    ac_effective_capacity(charging);
};
struct storage_battery_t {
   /*AC実効容量（放電）*/
    ac_effective_capacity(discharging);
};
struct storage_battery_t {
   /*AC充電可能容量*/
    ac_chargeable_capacity;
};
struct storage_battery_t {
   /*AC放電可能容量*/
    ac_dischargeable_capacity;
};
struct storage_battery_t {
   /*AC充電可能量*/
    ac_chargeable_electric_energy;
};
struct storage_battery_t {
   /*AC放電可能量*/
    ac_dischargeable_electric_energy;
};
struct storage_battery_t {
   /*AC積算充電電力量計測値*/
    ac_measured_cumulative_charging_electric_energy;
};
struct storage_battery_t {
   /*AC積算放電電力量計測値*/
    ac_measured_cumulative_discharging_electric_energy;
};
struct storage_battery_t {
   /*AC充電量設定値*/
    ac_charge_amount_setting_value;
};
struct storage_battery_t {
   /*AC放電量設定値*/
    ac_discharge_amount_setting_value;
};
struct storage_battery_t {
   /*充電方式*/
    charging_method;
};
struct storage_battery_t {
   /*放電方式*/
    discharging_method;
};
struct storage_battery_t {
   /*蓄電池タイプ*/
    battery_type;
};
