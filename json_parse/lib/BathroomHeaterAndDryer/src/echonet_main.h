#include "echonet.h"
/*浴室暖房乾燥機*/
struct bathroom_heater_and_dryer_t {
   /*乾燥運転設定*/
    bathroom_dryer_operation_setting;
};
extern struct bathroom_heater_and_dryer_t bathroom_heater_and_dryer_class_data;
EPRP_SETTER bathroom_dryer_operation_setting_prop_set;
