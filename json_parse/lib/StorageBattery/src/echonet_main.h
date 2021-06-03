#include "echonet.h"
/*蓄電池*/
struct storage_battery_t {
   /*AC充電量設定値*/
    ac_charge_amount_setting_value;
};
extern struct storage_battery_t storage_battery_class_data;
EPRP_SETTER ac_charge_amount_setting_value_prop_set;
struct storage_battery_t {
   /*AC放電量設定値*/
    ac_discharge_amount_setting_value;
};
extern struct storage_battery_t storage_battery_class_data;
EPRP_SETTER ac_discharge_amount_setting_value_prop_set;
