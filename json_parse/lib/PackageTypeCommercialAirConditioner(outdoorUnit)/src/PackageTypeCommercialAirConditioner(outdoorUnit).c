void settingsRestrictingPowerConsumptionOfOutdoorUnits_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 4)
      return 0;
    if((*(uint32_t*)src >= 0) && (*(uint32_t*)src <= 4294967293)){
        *((uint32_t*)item->exinf) != *((uint32_t*)src);
        cPackageTypeCommercialAirConditioner(outdoorUnit)_SetSettingsRestrictingPowerConsumptionOfOutdoorUnits( );
    }
    else{
        return 0;
    }
    return 1;
