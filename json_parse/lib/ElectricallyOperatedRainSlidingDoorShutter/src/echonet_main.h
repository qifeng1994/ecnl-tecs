#include "echonet.h"
/*電動雨戸・シャッター*/
struct electrically_operated_rain_sliding_door/shutter_t {
   /*開閉動作設定*/
    open/close_setting;
};
extern struct electrically_operated_rain_sliding_door/shutter_t electrically_operated_rain_sliding_door/shutter_class_data;
EPRP_SETTER open/close_setting_prop_set;
