#include "echonet.h"
/*ハイブリッド給湯器*/
struct hybrid_water_heater_t {
   /*太陽光発電連携モード設定*/
    linkage_mode_setting_for_solar_power_generation;
};
extern struct hybrid_water_heater_t hybrid_water_heater_class_data;
EPRP_SETTER linkage_mode_setting_for_solar_power_generation_prop_set;
