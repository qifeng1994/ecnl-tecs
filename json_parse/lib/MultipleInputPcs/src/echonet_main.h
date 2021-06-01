/*マルチ入力PCS*/
struct multiple_input_pcs_t {
   /*識別番号*/
    identification_number;
};
struct multiple_input_pcs_t {
   /*現在時刻設定*/
    current_time_setting;
};
struct multiple_input_pcs_t {
   /*現在年月日設定*/
    current_date_setting;
};
struct multiple_input_pcs_t {
   /*系統連系状態*/
    system-interconnected_type;
};
struct multiple_input_pcs_t {
   /*積算電力量計測値（正方向）*/
    measured_cumulative_amount_of_electric_energy(normal_direction);
};
struct multiple_input_pcs_t {
   /*積算電力量計測値（逆方向）*/
    measured_cumulative_amount_of_electric_energy(reverse_direction);
};
struct multiple_input_pcs_t {
   /*瞬時電力計測値*/
    measured_instantaneous_electric_energy;
};
struct multiple_input_pcs_t {
   /*接続機器リスト*/
    list_of_connected_devices;
};
