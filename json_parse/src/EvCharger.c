void vehicleConnectionConfirmation_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x10: cEvCharger_setConnectionConfirmation( )
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
      case 0x42: cEvCharger_setCharge( )
        break;
      case 0x44: cEvCharger_setStandby( )
        break;
      case 0x47: cEvCharger_setIdle( )
        break;
      case 0x40: cEvCharger_setOther( )
        break;
default:
        return 0;
}
