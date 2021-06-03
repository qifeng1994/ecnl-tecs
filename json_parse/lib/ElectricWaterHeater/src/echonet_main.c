void participation_in_energy_shift_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x01: cElectricWaterHeater_setParticipation( )
        break;
      case 0x00: cElectricWaterHeater_setNonParticipation( )
        break;
default:
        return 0;
}
void daytimeHeatingShiftTime1_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 9) && (*(uint8_t*)src <= 17)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cElectricWaterHeater_SetDaytimeHeatingShiftTime1( );
    }
    else{
        return 0;
    }
    return 1;
void daytimeHeatingShiftTime2_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 10) && (*(uint8_t*)src <= 17)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cElectricWaterHeater_SetDaytimeHeatingShiftTime2( );
    }
    else{
        return 0;
    }
    return 1;
void automatic_bath_water_heating_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cElectricWaterHeater_setOn( )
        break;
      case 0x42: cElectricWaterHeater_setOff( )
        break;
default:
        return 0;
}
