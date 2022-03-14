#include "tECNLElectricHeater_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLElectricHeater_cElectricHeater_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLElectricHeater_cElectricHeater_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLElectricHeater_cElectricHeater_setFaultStatus_Fault( );
    	case 0x42: tECNLElectricHeater_cElectricHeater_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
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
            cElectricHeater_SetSetTemperatureValue( );
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
      case 0xFD: tECNLElectricHeater_cElectricHeater_setSetTemperatureValue_Undefined( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    