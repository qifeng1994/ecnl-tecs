#include "tECNLElectricWaterHeater_tecsgen.h"
    #include "echonet_main.h"
    #include "echonet_cfg.h"

    int onoff_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno)
    {
    	if(size != 1)
    		return 0;
    	*anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    	switch(*(uint8_t *)src){
    	case 0x30: tECNLElectricWaterHeater_cElectricWaterHeater_setOperatingStatus_ON( );
    		break;
    	case 0x31: tECNLElectricWaterHeater_cElectricWaterHeater_setOperatingStatus_OFF( );
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
    	case 0x41: tECNLElectricWaterHeater_cElectricWaterHeater_setFaultStatus_Fault( );
    	case 0x42: tECNLElectricWaterHeater_cElectricWaterHeater_setFaultStatus_NoFault( );
    		*((uint8_t *)item->exinf) = *((uint8_t *)src);
    		break;
    	default:
    		return 0;
    	}return 1;
    }
    
int participation_in_energy_shift_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x01: tECNLElectricWaterHeater_cElectricWaterHeater_setParticipationInEnergyShift_Participation( );
            break;
      case 0x00: tECNLElectricWaterHeater_cElectricWaterHeater_setParticipationInEnergyShift_NonParticipation( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    int daytimeHeatingShiftTime1_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 9) && (*(uint8_t*)src <= 17)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cElectricWaterHeater_SetDaytimeHeatingShiftTime1( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    int daytimeHeatingShiftTime2_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size! = 1)
          return 0;
        if((*(uint8_t*)src >= 10) && (*(uint8_t*)src <= 17)){
            *((uint8_t*)item->exinf) != *((uint8_t*)src);
            cElectricWaterHeater_SetDaytimeHeatingShiftTime2( );
        }
        else{
            return 0;
        }return 1;
    }
    	
    int automatic_bath_water_heating_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

        if(size != 1)
          return 0;
        *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
        switch (*(uint8_t*)src) {
      case 0x41: tECNLElectricWaterHeater_cElectricWaterHeater_setAutomaticBathWaterHeatingModeSetting_On( );
            break;
      case 0x42: tECNLElectricWaterHeater_cElectricWaterHeater_setAutomaticBathWaterHeatingModeSetting_Off( );
            break;
default:
            return 0;
    	}return 1;
    }
    	
    