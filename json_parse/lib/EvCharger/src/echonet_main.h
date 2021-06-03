#include "echonet.h"
/*電気自動車充電器*/
struct ev_charger_t {
   /*車両接続確認*/
    vehicle_connection_confirmation;
};
extern struct ev_charger_t ev_charger_class_data;
EPRP_SETTER vehicle_connection_confirmation_prop_set;
struct ev_charger_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct ev_charger_t ev_charger_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
