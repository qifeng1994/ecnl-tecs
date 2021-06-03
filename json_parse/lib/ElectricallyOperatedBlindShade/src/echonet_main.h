#include "echonet.h"
/*電動ブラインド・日よけ*/
struct electrically_operated_blind/shade_t {
   /*開閉（張出し／収納）動作設定*/
    open/close(extension/retraction)_setting;
};
extern struct electrically_operated_blind/shade_t electrically_operated_blind/shade_class_data;
EPRP_SETTER open/close(extension/retraction)_setting_prop_set;
struct electrically_operated_blind/shade_t {
   /*開度レベル設定*/
    degree-of-opening_level;
};
extern struct electrically_operated_blind/shade_t electrically_operated_blind/shade_class_data;
EPRP_SETTER degree-of-opening_level_prop_set;
