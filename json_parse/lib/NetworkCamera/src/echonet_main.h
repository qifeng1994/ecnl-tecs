#include "echonet.h"
/*ネットワークカメラ*/
struct network_camera_t {
   /*静止画撮影設定*/
    still_image_photography_setting;
};
extern struct network_camera_t network_camera_class_data;
EPRP_SETTER still_image_photography_setting_prop_set;
