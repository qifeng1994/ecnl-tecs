#include "tECNLGeneralLighting_tecsgen.h"
#include "kernel_cfg.h"
#include "echonet_main.h"
#include "echonet_cfg.h"

int lighting_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size != 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: tECNLGeneralLighting_cGeneralLighting_setLightingModeSetting_Automatic( );
        break;
      case 0x42: tECNLGeneralLighting_cGeneralLighting_setLightingModeSetting_NormalLighting( );
        break;
      case 0x43: tECNLGeneralLighting_cGeneralLighting_setLightingModeSetting_NightLighting( );
        break;
      case 0x45: tECNLGeneralLighting_cGeneralLighting_setLightingModeSetting_ColorLighting( );
        break;
default:
        return 0;
	}return 1;
}
	
int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	if(size != 1)
		return 0;
	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
	switch(*(uint8_t *)src){
	case 0x30: tECNLGeneralLighting_cGeneralLighting_setOperatingStatus_ON( );
		break;
	case 0x31: tECNLGeneralLighting_cGeneralLighting_setOperatingStatus_OFF( );
		break;
	default:
		return 0;
	}return 1;
}

int alarm_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
{
	ER ret;
	uint8_t data[1];
	if(size != 1)
		return 0;
	*anno = *((uint8_t *)item->exinf) != *((uint8_t *)src);
	switch(*(uint8_t *)src){
	case 0x41: tECNLGeneralLighting_cGeneralLighting_setFaultStatus_Fault( );
	case 0x42: tECNLGeneralLighting_cGeneralLighting_setFaultStatus_NoFault( );
		*((uint8_t *)item->exinf) = *((uint8_t *)src);
		break;
	default:
		return 0;
	}return 1;
}
