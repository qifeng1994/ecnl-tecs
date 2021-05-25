void powerSavingOperationSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cHomeAirConditioner_setOn( )
        break;
      case 0x42: cHomeAirConditioner_setOff( )
        break;
default:
        return 0;
}
void operationModeSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cHomeAirConditioner_setAutomatic( )
        break;
      case 0x42: cHomeAirConditioner_setCooling( )
        break;
      case 0x43: cHomeAirConditioner_setHeating( )
        break;
      case 0x44: cHomeAirConditioner_setDehumidification( )
        break;
      case 0x45: cHomeAirConditioner_setAirCirculation( )
        break;
      case 0x40: cHomeAirConditioner_setOther( )
        break;
default:
        return 0;
}
void setTemperatureValue_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cHomeAirConditioner_SetSetTemperatureValue( );
    }
    else{
        return 0;
    }
    return 1;
void setTemperatureValue_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0xFD: cHomeAirConditioner_setUndefined( )
        break;
default:
        return 0;
}
