#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_COOKING_HEATER_CLASS 1
/*クッキングヒータ*/
struct cooking_heater_t {
   /*一括停止設定*/
    all_stop_setting;
};
extern struct cooking_heater_t cooking_heater_class_data;
EPRP_SETTER all_stop_setting_prop_set;
void echonet_main_task(intptr_t exinf);
