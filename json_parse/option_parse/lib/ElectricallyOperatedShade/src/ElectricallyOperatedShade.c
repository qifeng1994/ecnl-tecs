#include "tECNLElectricallyOperatedShade_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLElectricallyOperatedShade_cElectricallyOperatedShade_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLElectricallyOperatedShade_cElectricallyOperatedShade_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLElectricallyOperatedShade_cElectricallyOperatedShade_setFaultStatus_Fault( );
    	case 0x42: tECNLElectricallyOperatedShade_cElectricallyOperatedShade_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int open/close_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLElectricallyOperatedShade_cElectricallyOperatedShade_setOpenCloseSetting_Open( );
            break;
      case 0x42: tECNLElectricallyOperatedShade_cElectricallyOperatedShade_setOpenCloseSetting_Close( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    