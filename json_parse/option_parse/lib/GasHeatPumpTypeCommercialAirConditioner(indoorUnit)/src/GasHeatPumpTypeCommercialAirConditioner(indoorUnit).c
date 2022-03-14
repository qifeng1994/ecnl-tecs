#include "tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setFaultStatus_Fault( );
    	case 0x42: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setFaultStatus_NoFault( );
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
      case 0x41: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperationModeSetting_Automatic( );
            break;
      case 0x42: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperationModeSetting_Cooling( );
            break;
      case 0x43: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperationModeSetting_Heating( );
            break;
      case 0x44: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperationModeSetting_Dehumidification( );
            break;
      case 0x45: tECNLGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setOperationModeSetting_AirCirculation( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    int temperatureSettingValue_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_SetTemperatureSettingValue( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    