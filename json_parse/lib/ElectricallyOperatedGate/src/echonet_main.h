#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_ELECTRICALLY_OPERATED_GATE_CLASS 1
/*電動ゲート*/
struct electrically_operated_gate_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct electrically_operated_gate_t electrically_operated_gate_class_data;
EPRP_SETTER open/close_setting_prop_set;
void echonet_main_task(intptr_t exinf);