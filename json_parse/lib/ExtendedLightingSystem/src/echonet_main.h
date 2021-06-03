#include "echonet.h"
/*拡張照明システム*/
struct extended_lighting_system_t {
   /*シーン制御設定*/
    scene_control_setting;
};
extern struct extended_lighting_system_t extended_lighting_system_class_data;
EPRP_SETTER scene_control_setting_prop_set;
struct extended_lighting_system_t {
   /*消費電力制限設定*/
    power_consumption_limit_setting;
};
extern struct extended_lighting_system_t extended_lighting_system_class_data;
EPRP_SETTER power_consumption_limit_setting_prop_set;
