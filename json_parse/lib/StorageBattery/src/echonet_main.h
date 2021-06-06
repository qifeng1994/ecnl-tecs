#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_STORAGE_BATTERY_CLASS 1
/*蓄電池*/
struct storage_battery_t {
   /*AC充電量設定値*/
    ac_charge_amount_setting_value;
};
extern struct storage_battery_t storage_battery_class_data;
EPRP_SETTER ac_charge_amount_setting_value_prop_set;
void echonet_main_task(intptr_t exinf);
struct storage_battery_t {
   /*AC放電量設定値*/
    ac_discharge_amount_setting_value;
};
extern struct storage_battery_t storage_battery_class_data;
EPRP_SETTER ac_discharge_amount_setting_value_prop_set;
void echonet_main_task(intptr_t exinf);
