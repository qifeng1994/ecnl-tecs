void setTemperatureValue_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cElectricHeater_SetSetTemperatureValue( );
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
      case 0xFD: cElectricHeater_setUndefined( )
        break;
default:
        return 0;
}
