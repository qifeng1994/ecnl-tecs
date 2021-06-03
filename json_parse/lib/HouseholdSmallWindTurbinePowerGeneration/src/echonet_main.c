void braking_status_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x30: cHouseholdSmallWindTurbinePowerGeneration_setOn( )
        break;
      case 0x31: cHouseholdSmallWindTurbinePowerGeneration_setOff( )
        break;
default:
        return 0;
}
