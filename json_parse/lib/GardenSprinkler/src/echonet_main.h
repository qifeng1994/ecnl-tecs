#include "echonet.h"
/*散水器（庭用）*/
struct garden_sprinkler_t {
   /*散水弁開閉設定*/
    sprinkle_valve_open/close_setting;
};
extern struct garden_sprinkler_t garden_sprinkler_class_data;
EPRP_SETTER sprinkle_valve_open/close_setting_prop_set;
