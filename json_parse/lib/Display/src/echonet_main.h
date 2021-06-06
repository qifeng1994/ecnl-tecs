#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_DISPLAY_CLASS 1
/*ディスプレイ*/
struct display_t {
   /*伝達文字列設定*/
    character_string_to_present_to_the_user;
};
extern struct display_t display_class_data;
EPRP_SETTER character_string_to_present_to_the_user_prop_set;
void echonet_main_task(intptr_t exinf);
