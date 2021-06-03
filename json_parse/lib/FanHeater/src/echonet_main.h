#include "echonet.h"
/*ファンヒータ*/
struct fan_heater_t {
   /*温度設定値*/
    temperature_set_value;
};
extern struct fan_heater_t fan_heater_class_data;
EPRP_SETTER temperature_set_value_prop_set;
