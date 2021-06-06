#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_RICE_COOKER_CLASS 1
/*炊飯器*/
struct rice_cooker_t {
   /*炊飯制御設定*/
    rice_cooking_control_setting;
};
extern struct rice_cooker_t rice_cooker_class_data;
EPRP_SETTER rice_cooking_control_setting_prop_set;
void echonet_main_task(intptr_t exinf);
