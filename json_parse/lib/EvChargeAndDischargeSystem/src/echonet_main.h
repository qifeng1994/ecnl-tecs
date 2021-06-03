#include "echonet.h"
/*電気自動車充放電システム*/
struct ev_charge_and_discharge_system_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct ev_charge_and_discharge_system_t ev_charge_and_discharge_system_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
