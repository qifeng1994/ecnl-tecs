/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef sSIOPort_TECSGEN_H
#define sSIOPort_TECSGEN_H

/*
 * signature   :  sSIOPort
 * global name :  sSIOPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* signature descriptor #_SD_# */
struct tag_sSIOPort_VDES {
    struct tag_sSIOPort_VMT *VMT;
};

/* signature function table #_SFT_# */
struct tag_sSIOPort_VMT {
    void           (*open__T)( const struct tag_sSIOPort_VDES *edp );
    void           (*close__T)( const struct tag_sSIOPort_VDES *edp );
    bool_t         (*putChar__T)( const struct tag_sSIOPort_VDES *edp, char c );
    int_t          (*getChar__T)( const struct tag_sSIOPort_VDES *edp );
    void           (*enableCBR__T)( const struct tag_sSIOPort_VDES *edp, uint_t cbrtn );
    void           (*disableCBR__T)( const struct tag_sSIOPort_VDES *edp, uint_t cbrtn );
};

/* signature descriptor #_SDES_# for dynamic join */
#ifndef Descriptor_of_sSIOPort_Defined
#define  Descriptor_of_sSIOPort_Defined
typedef struct { struct tag_sSIOPort_VDES *vdes; } Descriptor( sSIOPort );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIOPORT_OPEN                   (1)
#define	FUNCID_SSIOPORT_CLOSE                  (2)
#define	FUNCID_SSIOPORT_PUTCHAR                (3)
#define	FUNCID_SSIOPORT_GETCHAR                (4)
#define	FUNCID_SSIOPORT_ENABLECBR              (5)
#define	FUNCID_SSIOPORT_DISABLECBR             (6)

#endif /* sSIOPort_TECSGEN_H */
