#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_GARDEN_SPRINKLER_CLASS 1
/*散水器（庭用）*/
struct garden_sprinkler_t {
   /*散水弁開閉設定*/
    sprinkle_valve_open/close_setting;
};
extern struct garden_sprinkler_t garden_sprinkler_class_data;
EPRP_SETTER sprinkle_valve_open/close_setting_prop_set;
void echonet_main_task(intptr_t exinf);
