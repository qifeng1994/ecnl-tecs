#include "tECNLExtendedLightingSystem_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLExtendedLightingSystem_cExtendedLightingSystem_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLExtendedLightingSystem_cExtendedLightingSystem_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLExtendedLightingSystem_cExtendedLightingSystem_setFaultStatus_Fault( );
    	case 0x42: tECNLExtendedLightingSystem_cExtendedLightingSystem_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int sceneControlSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 253)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cExtendedLightingSystem_SetSceneControlSetting( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    int powerConsumptionLimitSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 2)
          return 0;
        if((*(uint16_t*)src >= 0) && (*(uint16_t*)src <= 65533)){
            *((uint16_t*)item->exinf) != *((uint16_t*)src);
            cExtendedLightingSystem_SetPowerConsumptionLimitSetting( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    