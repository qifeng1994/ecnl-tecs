#include "echonet.h"
/*固体発光光源用照明*/
struct lighting_for_solid_light-emitting_source_t {
   /*光源動作状態リスト*/
    list_of_the_light_source_operation_status;
};
extern struct lighting_for_solid_light-emitting_source_t lighting_for_solid_light-emitting_source_class_data;
EPRP_SETTER list_of_the_light_source_operation_status_prop_set;
struct lighting_for_solid_light-emitting_source_t {
   /*光源光出力設定値リスト*/
    list_of_the_light_source_optical_output_setting_values;
};
extern struct lighting_for_solid_light-emitting_source_t lighting_for_solid_light-emitting_source_class_data;
EPRP_SETTER list_of_the_light_source_optical_output_setting_values_prop_set;
