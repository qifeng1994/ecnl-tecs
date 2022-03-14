#include "tECNLElectricallyOperatedBlindShade_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setFaultStatus_Fault( );
    	case 0x42: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int open/close(extension/retraction)_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setOpenClose(extensionRetraction)Setting_Open( );
            break;
      case 0x42: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setOpenClose(extensionRetraction)Setting_Close( );
            break;
      case 0x43: tECNLElectricallyOperatedBlindShade_cElectricallyOperatedBlindShade_setOpenClose(extensionRetraction)Setting_Stop( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    int degreeOfOpeningLevel_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 100)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cElectricallyOperatedBlindShade_SetDegreeOfOpeningLevel( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    