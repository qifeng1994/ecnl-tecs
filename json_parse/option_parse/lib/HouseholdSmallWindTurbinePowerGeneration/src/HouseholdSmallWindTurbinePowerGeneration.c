#include "tECNLHouseholdSmallWindTurbinePowerGeneration_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLHouseholdSmallWindTurbinePowerGeneration_cHouseholdSmallWindTurbinePowerGeneration_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLHouseholdSmallWindTurbinePowerGeneration_cHouseholdSmallWindTurbinePowerGeneration_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLHouseholdSmallWindTurbinePowerGeneration_cHouseholdSmallWindTurbinePowerGeneration_setFaultStatus_Fault( );
    	case 0x42: tECNLHouseholdSmallWindTurbinePowerGeneration_cHouseholdSmallWindTurbinePowerGeneration_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int braking_status_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x30: tECNLHouseholdSmallWindTurbinePowerGeneration_cHouseholdSmallWindTurbinePowerGeneration_setBrakingStatus_On( );
            break;
      case 0x31: tECNLHouseholdSmallWindTurbinePowerGeneration_cHouseholdSmallWindTurbinePowerGeneration_setBrakingStatus_Off( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    