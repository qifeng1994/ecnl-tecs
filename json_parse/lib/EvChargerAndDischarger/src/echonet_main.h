#include "echonet.h"
/*電気自動車充放電器*/
struct ev_charger_and_discharger_t {
   /*車両接続確認*/
    vehicle_connection_confirmation;
};
extern struct ev_charger_and_discharger_t ev_charger_and_discharger_class_data;
EPRP_SETTER vehicle_connection_confirmation_prop_set;
