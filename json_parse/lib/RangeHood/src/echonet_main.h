#include "echonet.h"
/*レンジフード*/
struct range_hood_t {
   /*換気風量設定*/
    ventilation_air_flow_rate_setting;
};
extern struct range_hood_t range_hood_class_data;
EPRP_SETTER ventilation_air_flow_rate_setting_prop_set;
