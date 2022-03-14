#include "tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setFaultStatus_Fault( );
    	case 0x42: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setFaultStatus_NoFault( );
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
      case 0x41: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperationModeSetting_Automatic( );
            break;
      case 0x42: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperationModeSetting_Cooling( );
            break;
      case 0x43: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperationModeSetting_Heating( );
            break;
      case 0x44: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperationModeSetting_Dehumidification( );
            break;
      case 0x45: tECNLPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setOperationModeSetting_AirCirculation( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    int temperatureSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_SetTemperatureSetting( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    