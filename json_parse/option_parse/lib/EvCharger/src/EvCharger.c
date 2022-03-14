#include "tECNLEvCharger_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLEvCharger_cEvCharger_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLEvCharger_cEvCharger_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLEvCharger_cEvCharger_setFaultStatus_Fault( );
    	case 0x42: tECNLEvCharger_cEvCharger_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int vehicle_connection_confirmation_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x10: tECNLEvCharger_cEvCharger_setVehicleConnectionConfirmation_ConnectionConfirmation( );
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
      case 0x42: tECNLEvCharger_cEvCharger_setOperationModeSetting_Charge( );
            break;
      case 0x44: tECNLEvCharger_cEvCharger_setOperationModeSetting_Standby( );
            break;
      case 0x47: tECNLEvCharger_cEvCharger_setOperationModeSetting_Idle( );
            break;
      case 0x40: tECNLEvCharger_cEvCharger_setOperationModeSetting_Other( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    