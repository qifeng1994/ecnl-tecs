#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_PACKAGE-TYPE_COMMERCIAL_AIR_CONDITIONER_(OUTDOOR_UNIT)_CLASS 1
/*業務用パッケージエアコン室外機（設備用を除く）*/
struct package-type_commercial_air_conditioner_(outdoor_unit)_t {
   /*室外機消費電力制限設定*/
    settings_restricting_power_consumption_of_outdoor_units;
};
extern struct package-type_commercial_air_conditioner_(outdoor_unit)_t package-type_commercial_air_conditioner_(outdoor_unit)_class_data;
EPRP_SETTER settings_restricting_power_consumption_of_outdoor_units_prop_set;
void echonet_main_task(intptr_t exinf);
