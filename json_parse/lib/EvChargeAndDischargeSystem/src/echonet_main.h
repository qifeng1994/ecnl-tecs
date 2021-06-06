#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_EV_CHARGE_AND_DISCHARGE_SYSTEM_CLASS 1
/*電気自動車充放電システム*/
struct ev_charge_and_discharge_system_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct ev_charge_and_discharge_system_t ev_charge_and_discharge_system_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
