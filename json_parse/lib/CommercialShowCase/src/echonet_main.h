#include "echonet.h"
/*業務用ショーケース*/
struct commercial_show_case_t {
   /*運転モード設定*/
    operation_mode_setting;
};
extern struct commercial_show_case_t commercial_show_case_class_data;
EPRP_SETTER operation_mode_setting_prop_set;
struct commercial_show_case_t {
   /*庫内温度設定値*/
    temperature_setting_of_inside_the_case;
};
extern struct commercial_show_case_t commercial_show_case_class_data;
EPRP_SETTER temperature_setting_of_inside_the_case_prop_set;
