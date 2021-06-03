#include "echonet.h"
/*電動ゲート*/
struct electrically_operated_gate_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct electrically_operated_gate_t electrically_operated_gate_class_data;
EPRP_SETTER open/close_setting_prop_set;
