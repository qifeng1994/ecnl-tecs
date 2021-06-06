#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_DR_EVENT_CONTROLLER_CLASS 1
/*DRイベントコントローラ*/
struct dr_event_controller_t {
   /*通知ID 指定*/
    notification_id_designation;
};
extern struct dr_event_controller_t dr_event_controller_class_data;
EPRP_SETTER notification_id_designation_prop_set;
void echonet_main_task(intptr_t exinf);
