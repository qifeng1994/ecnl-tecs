void riceCookingControlSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cRiceCooker_setRiceCookingStartRestart( )
        break;
      case 0x42: cRiceCooker_setRiceCookingSuspension( )
        break;
default:
        return 0;
}
