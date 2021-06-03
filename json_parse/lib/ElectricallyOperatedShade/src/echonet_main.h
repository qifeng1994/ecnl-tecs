#include "echonet.h"
/*電動ブラインド*/
struct electrically_operated_shade_t {
   /*開閉設定*/
    open/close_setting;
};
extern struct electrically_operated_shade_t electrically_operated_shade_class_data;
EPRP_SETTER open/close_setting_prop_set;
struct electrically_operated_shade_t {
   /*開度レベル設定*/
    degree-of-opening_level;
};
extern struct electrically_operated_shade_t electrically_operated_shade_class_data;
EPRP_SETTER degree-of-opening_level_prop_set;
