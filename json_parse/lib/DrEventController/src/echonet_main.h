#include "echonet.h"
/*DRイベントコントローラ*/
struct dr_event_controller_t {
   /*通知ID 指定*/
    notification_id_designation;
};
extern struct dr_event_controller_t dr_event_controller_class_data;
EPRP_SETTER notification_id_designation_prop_set;
