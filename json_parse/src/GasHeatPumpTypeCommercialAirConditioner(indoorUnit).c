void operationModeSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setAutomatic( )
        break;
      case 0x42: cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setCooling( )
        break;
      case 0x43: cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setHeating( )
        break;
      case 0x44: cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setDehumidification( )
        break;
      case 0x45: cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_setAirCirculation( )
        break;
default:
        return 0;
}
void temperatureSettingValue_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cGasHeatPumpTypeCommercialAirConditioner(indoorUnit)_SetTemperatureSettingValue( );
    }
    else{
        return 0;
    }
    return 1;
