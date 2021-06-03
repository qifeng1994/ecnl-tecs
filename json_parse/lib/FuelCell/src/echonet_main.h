#include "echonet.h"
/*燃料電池*/
struct fuel_cell_t {
   /*指定発電状態*/
    designated_power_generation_status;
};
extern struct fuel_cell_t fuel_cell_class_data;
EPRP_SETTER designated_power_generation_status_prop_set;
