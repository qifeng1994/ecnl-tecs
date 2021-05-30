void operationModeSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cCommercialShowCase_setCooling( )
        break;
      case 0x42: cCommercialShowCase_setNonCooling( )
        break;
      case 0x43: cCommercialShowCase_setDefrosting( )
        break;
      case 0x40: cCommercialShowCase_setOther( )
        break;
default:
        return 0;
}
void temperatureSettingOfInsideTheCase_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = )
      return 0;
    if((*(int8_t*)src >= -127) && (*(int8_t*)src <= 126)){
        *((int8_t*)item->exinf) != *((int8_t*)src);
        cCommercialShowCase_SetTemperatureSettingOfInsideTheCase( );
    }
    else{
        return 0;
    }
    return 1;
