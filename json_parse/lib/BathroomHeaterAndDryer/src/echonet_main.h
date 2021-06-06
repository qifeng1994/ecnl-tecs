#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_BATHROOM_HEATER_AND_DRYER_CLASS 1
/*浴室暖房乾燥機*/
struct bathroom_heater_and_dryer_t {
   /*乾燥運転設定*/
    bathroom_dryer_operation_setting;
};
extern struct bathroom_heater_and_dryer_t bathroom_heater_and_dryer_class_data;
EPRP_SETTER bathroom_dryer_operation_setting_prop_set;
void echonet_main_task(intptr_t exinf);
