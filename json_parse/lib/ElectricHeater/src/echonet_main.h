#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_ELECTRIC_HEATER_CLASS 1
/*電気暖房器*/
struct electric_heater_t {
   /*温度設定値*/
    set_temperature_value;
};
extern struct electric_heater_t electric_heater_class_data;
EPRP_SETTER set_temperature_value_prop_set;
void echonet_main_task(intptr_t exinf);
