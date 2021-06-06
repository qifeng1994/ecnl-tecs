#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_ELECTRIC_KEY_CLASS 1
/*電気錠*/
struct electric_key_t {
   /*施錠設定1*/
    lock_setting1;
};
extern struct electric_key_t electric_key_class_data;
EPRP_SETTER lock_setting1_prop_set;
void echonet_main_task(intptr_t exinf);
