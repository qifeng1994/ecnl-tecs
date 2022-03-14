#include "tECNLRiceCooker_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLRiceCooker_cRiceCooker_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLRiceCooker_cRiceCooker_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLRiceCooker_cRiceCooker_setFaultStatus_Fault( );
    	case 0x42: tECNLRiceCooker_cRiceCooker_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int rice_cooking_control_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLRiceCooker_cRiceCooker_setRiceCookingControlSetting_RiceCookingStartRestart( );
            break;
      case 0x42: tECNLRiceCooker_cRiceCooker_setRiceCookingControlSetting_RiceCookingSuspension( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    