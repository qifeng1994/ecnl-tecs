#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_FAN_HEATER_CLASS 1
/*ファンヒータ*/
struct fan_heater_t {
   /*温度設定値*/
    temperature_set_value;
};
extern struct fan_heater_t fan_heater_class_data;
EPRP_SETTER temperature_set_value_prop_set;
void echonet_main_task(intptr_t exinf);
