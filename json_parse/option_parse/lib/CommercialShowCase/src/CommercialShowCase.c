#include "tECNLCommercialShowCase_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLCommercialShowCase_cCommercialShowCase_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLCommercialShowCase_cCommercialShowCase_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLCommercialShowCase_cCommercialShowCase_setFaultStatus_Fault( );
    	case 0x42: tECNLCommercialShowCase_cCommercialShowCase_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int operation_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLCommercialShowCase_cCommercialShowCase_setOperationModeSetting_Cooling( );
            break;
      case 0x42: tECNLCommercialShowCase_cCommercialShowCase_setOperationModeSetting_NonCooling( );
            break;
      case 0x43: tECNLCommercialShowCase_cCommercialShowCase_setOperationModeSetting_Defrosting( );
            break;
      case 0x40: tECNLCommercialShowCase_cCommercialShowCase_setOperationModeSetting_Other( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    int temperatureSettingOfInsideTheCase_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = )
          return 0;
        if((*(int8_t*)src >= -127) && (*(int8_t*)src <= 126)){
            *((int8_t*)item->exinf) != *((int8_t*)src);
            cCommercialShowCase_SetTemperatureSettingOfInsideTheCase( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    