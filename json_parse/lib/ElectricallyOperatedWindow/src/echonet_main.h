#include "echonet.h"
/*電動窓*/
struct electrically_operated_window_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct electrically_operated_window_t electrically_operated_window_class_data;
EPRP_SETTER open/close_setting_prop_set;
