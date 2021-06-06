#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_BIDET-QUIPPED_TOILET(WITH_ELECTRICALLY_WARMED_SEAT)_CLASS 1
/*電気便座*/
struct bidet-quipped_toilet(with_electrically_warmed_seat)_t {
   /*便座ヒータ設定*/
    heater_setting_of_toilet_seat;
};
extern struct bidet-quipped_toilet(with_electrically_warmed_seat)_t bidet-quipped_toilet(with_electrically_warmed_seat)_class_data;
EPRP_SETTER heater_setting_of_toilet_seat_prop_set;
void echonet_main_task(intptr_t exinf);
