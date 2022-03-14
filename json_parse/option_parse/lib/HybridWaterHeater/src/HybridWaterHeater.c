#include "tECNLHybridWaterHeater_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLHybridWaterHeater_cHybridWaterHeater_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLHybridWaterHeater_cHybridWaterHeater_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLHybridWaterHeater_cHybridWaterHeater_setFaultStatus_Fault( );
    	case 0x42: tECNLHybridWaterHeater_cHybridWaterHeater_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int linkage_mode_setting_for_solar_power_generation_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLHybridWaterHeater_cHybridWaterHeater_setLinkageModeSettingForSolarPowerGeneration_ModeOff( );
            break;
      case 0x42: tECNLHybridWaterHeater_cHybridWaterHeater_setLinkageModeSettingForSolarPowerGeneration_HouseholdConsumption( );
            break;
      case 0x43: tECNLHybridWaterHeater_cHybridWaterHeater_setLinkageModeSettingForSolarPowerGeneration_PrioritizingElectricitySales( );
            break;
      case 0x44: tECNLHybridWaterHeater_cHybridWaterHeater_setLinkageModeSettingForSolarPowerGeneration_EconomicEfficiency( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    