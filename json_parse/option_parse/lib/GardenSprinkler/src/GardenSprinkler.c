#include "tECNLGardenSprinkler_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLGardenSprinkler_cGardenSprinkler_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLGardenSprinkler_cGardenSprinkler_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLGardenSprinkler_cGardenSprinkler_setFaultStatus_Fault( );
    	case 0x42: tECNLGardenSprinkler_cGardenSprinkler_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int sprinkle_valve_open/close_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x40: tECNLGardenSprinkler_cGardenSprinkler_setSprinkleValveOpenCloseSetting_AutomaticOn( );
            break;
      case 0x41: tECNLGardenSprinkler_cGardenSprinkler_setSprinkleValveOpenCloseSetting_ManualOn( );
            break;
      case 0x42: tECNLGardenSprinkler_cGardenSprinkler_setSprinkleValveOpenCloseSetting_ManualOff( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    