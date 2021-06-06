#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_COMMERCIAL_SHOW_CASE_OUTDOOR_UNIT_CLASS 1
/*業務用ショーケース向け室外機*/
struct commercial_show_case_outdoor_unit_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct commercial_show_case_outdoor_unit_t commercial_show_case_outdoor_unit_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
