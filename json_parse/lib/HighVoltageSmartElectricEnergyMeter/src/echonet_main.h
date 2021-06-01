/*高圧スマート電力量メータ*/
struct high-voltage_smart_electric_energy_meter_t {
   /*月間最大需要電力*/
    monthly_maximum_electric_power_demand;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*定時需要電力（30分平均電力）*/
    electric_power_demand_at_fixed_time(30-minute_average_electric_power);
};
struct high-voltage_smart_electric_energy_meter_t {
   /*需要電力有効桁数*/
    number_of_effective_digits_of_electric_power_demand;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*需要電力単位*/
    unit_of_amounts_of_electric_power;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*需要電力計測値履歴*/
    historical_data_of_measured_electric_power_demand;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*係数*/
    coefficient;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*係数の倍率*/
    multiplying_factor_for_coefficient;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*確定日*/
    fixed_date;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*積算履歴収集日*/
    day_for_which_the_historical_data_of_measured_cumulative_amounts_of_electric_energy_is_to_be_retrieved;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*積算有効電力量計測値*/
    measured_cumulative_amount_of_active_electric_energy;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*定時積算有効電力量計測値*/
    cumulative_amounts_of_active_electric_energy_at_fixed_time;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*積算有効電力量有効桁数*/
    number_of_effective_digits_for_cumulative_amount_of_active_electric_energy;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*積算有効電力量単位*/
    unit_of_cumulative_amounts_of_effective_electric_energy;
};
struct high-voltage_smart_electric_energy_meter_t {
   /*積算有効電力量計測値履歴*/
    historical_data_of_measured_cumulative_amount_of_active_electric_energy;
};
