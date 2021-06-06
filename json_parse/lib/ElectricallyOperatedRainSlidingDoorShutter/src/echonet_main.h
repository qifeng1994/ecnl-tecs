#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_ELECTRICALLY_OPERATED_RAIN_SLIDING_DOOR/SHUTTER_CLASS 1
/*電動雨戸・シャッター*/
struct electrically_operated_rain_sliding_door/shutter_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct electrically_operated_rain_sliding_door/shutter_t electrically_operated_rain_sliding_door/shutter_class_data;
EPRP_SETTER open/close_setting_prop_set;
void echonet_main_task(intptr_t exinf);
