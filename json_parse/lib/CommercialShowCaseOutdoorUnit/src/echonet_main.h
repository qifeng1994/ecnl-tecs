#include "echonet.h"
/*業務用ショーケース向け室外機*/
struct commercial_show_case_outdoor_unit_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct commercial_show_case_outdoor_unit_t commercial_show_case_outdoor_unit_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
