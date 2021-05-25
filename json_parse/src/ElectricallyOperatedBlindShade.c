void openClose(extensionRetraction)Setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cElectricallyOperatedBlindShade_setOpen( )
        break;
      case 0x42: cElectricallyOperatedBlindShade_setClose( )
        break;
      case 0x43: cElectricallyOperatedBlindShade_setStop( )
        break;
default:
        return 0;
}
void degreeOfOpeningLevel_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 100)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cElectricallyOperatedBlindShade_SetDegreeOfOpeningLevel( );
    }
    else{
        return 0;
    }
    return 1;
