/*低圧スマート電力量メータ*/
struct low-voltage_smart_electric_energy_meter_t {
   /*積算電力量有効桁数*/
    number_of_effective_digits_for_cumulative_amounts_of_electric_energy;
};
struct low-voltage_smart_electric_energy_meter_t {
   /*積算電力量計測値（正方向計測値）*/
    measured_cumulative_amount_of_electric_energy(normal_direction);
};
struct low-voltage_smart_electric_energy_meter_t {
   /*積算電力量単位（正方向、逆方向計測値）*/
    unit_for_cumulative_amounts_of_electric_energy(normal_and_reverse_directions);
};
struct low-voltage_smart_electric_energy_meter_t {
   /*積算電力量計測値履歴1（正方向計測値）*/
    historical_data_of_measured_cumulative_amounts_of_electric_energy_1(normal_direction);
};
struct low-voltage_smart_electric_energy_meter_t {
   /*積算電力量計測値（逆方向計測値）*/
    measured_cumulative_amounts_of_electric_energy(reverse_direction);
};
struct low-voltage_smart_electric_energy_meter_t {
   /*積算電力量計測値履歴1（逆方向計測値）*/
    historical_data_of_measured_cumulative_amounts_of_electric_energy_1(reverse_direction);
};
struct low-voltage_smart_electric_energy_meter_t {
   /*積算履歴収集日1*/
    day_for_which_the_historical_data_of_measured_cumulative_amounts_of_electric_energy_is_to_be_retrieved_1;
};
struct low-voltage_smart_electric_energy_meter_t {
   /*瞬時電力計測値*/
    measured_instantaneous_electric_energy;
};
struct low-voltage_smart_electric_energy_meter_t {
   /*瞬時電流計測値*/
    measured_instantaneous_currents;
};
struct low-voltage_smart_electric_energy_meter_t {
   /*定時積算電力量計測値（正方向計測値）*/
    cumulative_amounts_of_electric_energy_measured_at_fixed_time(normal_direction);
};
struct low-voltage_smart_electric_energy_meter_t {
   /*定時積算電力量計測値（逆方向計測値）*/
    cumulative_amounts_of_electric_energy_measured_at_fixed_time(reverse_direction);
};
