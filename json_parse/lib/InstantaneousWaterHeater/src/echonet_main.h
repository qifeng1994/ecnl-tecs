#include "echonet.h"
/*瞬間式給湯器*/
struct instantaneous_water_heater_t {
   /*風呂自動モード設定*/
    bath_auto_mode_setting;
};
extern struct instantaneous_water_heater_t instantaneous_water_heater_class_data;
EPRP_SETTER bath_auto_mode_setting_prop_set;
