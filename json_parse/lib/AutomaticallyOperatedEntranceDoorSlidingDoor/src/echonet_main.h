#include "echonet.h"
/*電動玄関ドア・引戸*/
struct automatically_operated_entrance_door/sliding_door_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct automatically_operated_entrance_door/sliding_door_t automatically_operated_entrance_door/sliding_door_class_data;
EPRP_SETTER open/close_setting_prop_set;
