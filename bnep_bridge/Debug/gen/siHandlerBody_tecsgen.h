/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef siHandlerBody_TECSGEN_H
#define siHandlerBody_TECSGEN_H

/*
 * signature   :  siHandlerBody
 * global name :  siHandlerBody
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* signature descriptor #_SD_# */
struct tag_siHandlerBody_VDES {
    struct tag_siHandlerBody_VMT *VMT;
};

/* signature function table #_SFT_# */
struct tag_siHandlerBody_VMT {
    void           (*main__T)( const struct tag_siHandlerBody_VDES *edp );
};

/* signature descriptor #_SDES_# for dynamic join */
#ifndef Descriptor_of_siHandlerBody_Defined
#define  Descriptor_of_siHandlerBody_Defined
typedef struct { struct tag_siHandlerBody_VDES *vdes; } Descriptor( siHandlerBody );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIHANDLERBODY_MAIN              (1)

#endif /* siHandlerBody_TECSGEN_H */
