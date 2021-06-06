#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_ELECTRICALLY_OPERATED_SHADE_CLASS 1
/*電動ブラインド*/
struct electrically_operated_shade_t {
   /*開閉設定*/
    open/close_setting;
};
extern struct electrically_operated_shade_t electrically_operated_shade_class_data;
EPRP_SETTER open/close_setting_prop_set;
void echonet_main_task(intptr_t exinf);
struct electrically_operated_shade_t {
   /*開度レベル設定*/
    degree-of-opening_level;
};
extern struct electrically_operated_shade_t electrically_operated_shade_class_data;
EPRP_SETTER degree-of-opening_level_prop_set;
void echonet_main_task(intptr_t exinf);
