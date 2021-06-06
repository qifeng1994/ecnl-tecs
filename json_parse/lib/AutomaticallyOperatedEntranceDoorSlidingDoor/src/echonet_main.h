#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_AUTOMATICALLY_OPERATED_ENTRANCE_DOOR/SLIDING_DOOR_CLASS 1
/*電動玄関ドア・引戸*/
struct automatically_operated_entrance_door/sliding_door_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct automatically_operated_entrance_door/sliding_door_t automatically_operated_entrance_door/sliding_door_class_data;
EPRP_SETTER open/close_setting_prop_set;
void echonet_main_task(intptr_t exinf);
