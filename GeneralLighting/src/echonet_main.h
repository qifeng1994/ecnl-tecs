#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_GENERAL_LIGHTING_CLASS 1
/*一般照明*/
struct general_lighting_t {
   /*点灯モード設定*/
    lighting_mode_setting;
};
extern struct general_lighting_t general_lighting_class_data;
EPRP_SETTER lighting_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
