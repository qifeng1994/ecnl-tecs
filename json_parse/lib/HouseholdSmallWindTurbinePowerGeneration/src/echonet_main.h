#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_HOUSEHOLD_SMALL_WIND_TURBINE_POWER_GENERATION_CLASS 1
/*Household small wind turbine power generation*/
struct household_small_wind_turbine_power_generation_t {
   /*Braking status*/
    braking_status;
};
extern struct household_small_wind_turbine_power_generation_t household_small_wind_turbine_power_generation_class_data;
EPRP_SETTER braking_status_prop_set;
void echonet_main_task(intptr_t exinf);
