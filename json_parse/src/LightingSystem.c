void sceneControlSetting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    if((*(uint8_t*)src >= 0) && (*(uint8_t*)src <= 253)){
        *((uint8_t*)item->exinf) != *((uint8_t*)src);
        cLightingSystem_SetSceneControlSetting( );
    }
    else{
        return 0;
    }
    return 1;
