#include "echonet.h"
#define MAIN_PRIORITY 5
#define ECHONET_MAIN_STACK_SIZE	1024
#define EOJ_X3_NODE_PROFILE 1
#define EOJ_X3_NETWORK_CAMERA_CLASS 1
/*ネットワークカメラ*/
struct network_camera_t {
   /*静止画撮影設定*/
    still_image_photography_setting;
};
extern struct network_camera_t network_camera_class_data;
EPRP_SETTER still_image_photography_setting_prop_set;
void echonet_main_task(intptr_t exinf);
