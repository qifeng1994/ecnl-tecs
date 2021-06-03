#include "echonet.h"
/*照明システム*/
struct lighting_system_t {
   /*シーン制御設定*/
    scene_control_setting;
};
extern struct lighting_system_t lighting_system_class_data;
EPRP_SETTER scene_control_setting_prop_set;
