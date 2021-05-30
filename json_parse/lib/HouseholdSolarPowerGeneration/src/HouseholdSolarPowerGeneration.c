void fitContractType_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cHouseholdSolarPowerGeneration_setFit( )
        break;
      case 0x42: cHouseholdSolarPowerGeneration_setNonFit( )
        break;
      case 0x43: cHouseholdSolarPowerGeneration_setNoSetting( )
        break;
default:
        return 0;
}
