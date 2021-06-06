#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_FUEL_CELL_CLASS 1
/*燃料電池*/
struct fuel_cell_t {
   /*指定発電状態*/
    designated_power_generation_status;
};
extern struct fuel_cell_t fuel_cell_class_data;
EPRP_SETTER designated_power_generation_status_prop_set;
void echonet_main_task(intptr_t exinf);
