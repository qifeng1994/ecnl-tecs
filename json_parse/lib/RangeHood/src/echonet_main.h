#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_RANGE_HOOD_CLASS 1
/*レンジフード*/
struct range_hood_t {
   /*換気風量設定*/
    ventilation_air_flow_rate_setting;
};
extern struct range_hood_t range_hood_class_data;
EPRP_SETTER ventilation_air_flow_rate_setting_prop_set;
void echonet_main_task(intptr_t exinf);
