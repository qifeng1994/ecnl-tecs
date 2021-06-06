#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_EV_CHARGER_AND_DISCHARGER_CLASS 1
/*電気自動車充放電器*/
struct ev_charger_and_discharger_t {
   /*車両接続確認*/
    vehicle_connection_confirmation;
};
extern struct ev_charger_and_discharger_t ev_charger_and_discharger_class_data;
EPRP_SETTER vehicle_connection_confirmation_prop_set;
void echonet_main_task(intptr_t exinf);
