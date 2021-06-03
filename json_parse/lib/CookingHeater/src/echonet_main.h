#include "echonet.h"
/*クッキングヒータ*/
struct cooking_heater_t {
   /*一括停止設定*/
    all_stop_setting;
};
extern struct cooking_heater_t cooking_heater_class_data;
EPRP_SETTER all_stop_setting_prop_set;
