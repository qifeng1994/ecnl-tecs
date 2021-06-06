#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_PARALLEL_PROCESSING_COMBINATION-TYPE_POWER_CONTROL_CLASS 1
/*並列処理併用型電力制御*/
struct parallel_processing_combination-type_power_control_t {
   /*電力逸脱情報*/
    power_deviation_information;
};
extern struct parallel_processing_combination-type_power_control_t parallel_processing_combination-type_power_control_class_data;
EPRP_SETTER power_deviation_information_prop_set;
void echonet_main_task(intptr_t exinf);
struct parallel_processing_combination-type_power_control_t {
   /*削減電力情報*/
    power_reduction_information;
};
extern struct parallel_processing_combination-type_power_control_t parallel_processing_combination-type_power_control_class_data;
EPRP_SETTER power_reduction_information_prop_set;
void echonet_main_task(intptr_t exinf);
struct parallel_processing_combination-type_power_control_t {
   /*送信インターバル*/
    transmission_interval;
};
extern struct parallel_processing_combination-type_power_control_t parallel_processing_combination-type_power_control_class_data;
EPRP_SETTER transmission_interval_prop_set;
void echonet_main_task(intptr_t exinf);
