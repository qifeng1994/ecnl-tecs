#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_HIGH-VOLTAGE_SMART_ELECTRIC_ENERGY_METER_CLASS 1
/*高圧スマート電力量メータ*/
struct high-voltage_smart_electric_energy_meter_t {
   /*積算履歴収集日*/
    day_for_which_the_historical_data_of_measured_cumulative_amounts_of_electric_energy_is_to_be_retrieved;
};
extern struct high-voltage_smart_electric_energy_meter_t high-voltage_smart_electric_energy_meter_class_data;
EPRP_SETTER day_for_which_the_historical_data_of_measured_cumulative_amounts_of_electric_energy_is_to_be_retrieved_prop_set;
void echonet_main_task(intptr_t exinf);
