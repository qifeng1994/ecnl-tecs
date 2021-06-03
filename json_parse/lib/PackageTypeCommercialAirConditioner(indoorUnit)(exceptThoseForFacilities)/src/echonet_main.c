void operation_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setAutomatic( )
        break;
      case 0x42: cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setCooling( )
        break;
      case 0x43: cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setHeating( )
        break;
      case 0x44: cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setDehumidification( )
        break;
      case 0x45: cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_setAirCirculation( )
        break;
default:
        return 0;
}
void temperatureSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 50)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cPackageTypeCommercialAirConditioner(indoorUnit)(exceptThoseForFacilities)_SetTemperatureSetting( );
    }
    else{
        return 0;
    }
    return 1;
