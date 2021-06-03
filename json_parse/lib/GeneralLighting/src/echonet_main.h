#include "echonet.h"
/*一般照明*/
struct general_lighting_t {
   /*点灯モード設定*/
    lighting_mode_setting;
};
extern struct general_lighting_t general_lighting_class_data;
EPRP_SETTER lighting_mode_setting_prop_set;
