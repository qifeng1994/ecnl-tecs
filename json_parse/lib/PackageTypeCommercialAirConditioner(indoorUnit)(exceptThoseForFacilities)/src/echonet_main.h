#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_PACKAGE-TYPE_COMMERCIAL_AIR_CONDITIONER_(INDOOR_UNIT)_(EXCEPT_THOSE_FOR_FACILITIES)_CLASS 1
/*業務用パッケージエアコン室内機（設備用を除く）*/
struct package-type_commercial_air_conditioner_(indoor_unit)_(except_those_for_facilities)_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct package-type_commercial_air_conditioner_(indoor_unit)_(except_those_for_facilities)_t package-type_commercial_air_conditioner_(indoor_unit)_(except_those_for_facilities)_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
struct package-type_commercial_air_conditioner_(indoor_unit)_(except_those_for_facilities)_t {
   /*温度設定値*/
    temperature_setting;
};
extern struct package-type_commercial_air_conditioner_(indoor_unit)_(except_those_for_facilities)_t package-type_commercial_air_conditioner_(indoor_unit)_(except_those_for_facilities)_class_data;
EPRP_SETTER temperature_setting_prop_set;
void echonet_main_task(intptr_t exinf);
