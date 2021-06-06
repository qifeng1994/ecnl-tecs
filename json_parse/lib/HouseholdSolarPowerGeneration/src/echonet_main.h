#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_HOUSEHOLD_SOLAR_POWER_GENERATION_CLASS 1
/*住宅用太陽光発電*/
struct household_solar_power_generation_t {
   /*FIT契約タイプ*/
    fit_contract_type;
};
extern struct household_solar_power_generation_t household_solar_power_generation_class_data;
EPRP_SETTER fit_contract_type_prop_set;
void echonet_main_task(intptr_t exinf);
