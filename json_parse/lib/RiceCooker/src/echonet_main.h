#include "echonet.h"
/*炊飯器*/
struct rice_cooker_t {
   /*炊飯制御設定*/
    rice_cooking_control_setting;
};
extern struct rice_cooker_t rice_cooker_class_data;
EPRP_SETTER rice_cooking_control_setting_prop_set;
