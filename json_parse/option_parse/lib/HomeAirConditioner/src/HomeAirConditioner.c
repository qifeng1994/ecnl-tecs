#include "tECNLHomeAirConditioner_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLHomeAirConditioner_cHomeAirConditioner_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLHomeAirConditioner_cHomeAirConditioner_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLHomeAirConditioner_cHomeAirConditioner_setFaultStatus_Fault( );
    	case 0x42: tECNLHomeAirConditioner_cHomeAirConditioner_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int power-saving_operation_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLHomeAirConditioner_cHomeAirConditioner_setPowerSavingOperationSetting_On( );
            break;
      case 0x42: tECNLHomeAirConditioner_cHomeAirConditioner_setPowerSavingOperationSetting_Off( );
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
      case 0x41: tECNLHomeAirConditioner_cHomeAirConditioner_setOperationModeSetting_Automatic( );
            break;
      case 0x42: tECNLHomeAirConditioner_cHomeAirConditioner_setOperationModeSetting_Cooling( );
            break;
      case 0x43: tECNLHomeAirConditioner_cHomeAirConditioner_setOperationModeSetting_Heating( );
            break;
      case 0x44: tECNLHomeAirConditioner_cHomeAirConditioner_setOperationModeSetting_Dehumidification( );
            break;
      case 0x45: tECNLHomeAirConditioner_cHomeAirConditioner_setOperationModeSetting_AirCirculation( );
            break;
      case 0x40: tECNLHomeAirConditioner_cHomeAirConditioner_setOperationModeSetting_Other( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    int setTemperatureValue_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cHomeAirConditioner_SetSetTemperatureValue( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    int set_temperature_value_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0xFD: tECNLHomeAirConditioner_cHomeAirConditioner_setSetTemperatureValue_Undefined( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    