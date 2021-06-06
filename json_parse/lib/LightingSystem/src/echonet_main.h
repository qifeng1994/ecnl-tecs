#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_LIGHTING_SYSTEM_CLASS 1
/*照明システム*/
struct lighting_system_t {
   /*シーン制御設定*/
    scene_control_setting;
};
extern struct lighting_system_t lighting_system_class_data;
EPRP_SETTER scene_control_setting_prop_set;
void echonet_main_task(intptr_t exinf);
