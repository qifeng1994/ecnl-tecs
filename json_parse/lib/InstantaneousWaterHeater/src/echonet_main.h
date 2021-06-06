#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_INSTANTANEOUS_WATER_HEATER_CLASS 1
/*瞬間式給湯器*/
struct instantaneous_water_heater_t {
   /*風呂自動モード設定*/
    bath_auto_mode_setting;
};
extern struct instantaneous_water_heater_t instantaneous_water_heater_class_data;
EPRP_SETTER bath_auto_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
