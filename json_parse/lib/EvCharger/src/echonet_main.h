#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_EV_CHARGER_CLASS 1
/*電気自動車充電器*/
struct ev_charger_t {
   /*車両接続確認*/
    vehicle_connection_confirmation;
};
extern struct ev_charger_t ev_charger_class_data;
EPRP_SETTER vehicle_connection_confirmation_prop_set;
void echonet_main_task(intptr_t exinf);
struct ev_charger_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct ev_charger_t ev_charger_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
void echonet_main_task(intptr_t exinf);
