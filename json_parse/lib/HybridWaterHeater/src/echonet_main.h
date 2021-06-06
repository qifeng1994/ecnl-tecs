#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_HYBRID_WATER_HEATER_CLASS 1
/*ハイブリッド給湯器*/
struct hybrid_water_heater_t {
   /*太陽光発電連携モード設定*/
    linkage_mode_setting_for_solar_power_generation;
};
extern struct hybrid_water_heater_t hybrid_water_heater_class_data;
EPRP_SETTER linkage_mode_setting_for_solar_power_generation_prop_set;
void echonet_main_task(intptr_t exinf);
