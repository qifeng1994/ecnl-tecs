void lighting_mode_setting_prop_set (const EPRPINIB *item, const void *src, int size, bool_t *anno)
{

    if(size! = 1)
      return 0;
    *anno = *((uint8_t*)item->exinf) != *((uint8_t*)src);
    switch (*(uint8_t*)src) {
      case 0x41: cGeneralLighting_setAutomatic( )
        break;
      case 0x42: cGeneralLighting_setNormalLighting( )
        break;
      case 0x43: cGeneralLighting_setNightLighting( )
        break;
      case 0x45: cGeneralLighting_setColorLighting( )
        break;
default:
        return 0;
}
