#include "echonet.h"
/*電気錠*/
struct electric_key_t {
   /*施錠設定1*/
    lock_setting1;
};
extern struct electric_key_t electric_key_class_data;
EPRP_SETTER lock_setting1_prop_set;
