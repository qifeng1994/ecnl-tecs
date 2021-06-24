/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef sPriorityDataqueue_TECSGEN_H
#define sPriorityDataqueue_TECSGEN_H

/*
 * signature   :  sPriorityDataqueue
 * global name :  sPriorityDataqueue
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* signature descriptor #_SD_# */
struct tag_sPriorityDataqueue_VDES {
    struct tag_sPriorityDataqueue_VMT *VMT;
};

/* signature function table #_SFT_# */
struct tag_sPriorityDataqueue_VMT {
    ER             (*send__T)( const struct tag_sPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority );
    ER             (*sendPolling__T)( const struct tag_sPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority );
    ER             (*sendTimeout__T)( const struct tag_sPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority, TMO timeout );
    ER             (*receive__T)( const struct tag_sPriorityDataqueue_VDES *edp, intptr_t* p_data, PRI* p_dataPriority );
    ER             (*receivePolling__T)( const struct tag_sPriorityDataqueue_VDES *edp, intptr_t* p_data, PRI* p_dataPriority );
    ER             (*receiveTimeout__T)( const struct tag_sPriorityDataqueue_VDES *edp, intptr_t* p_data, PRI* p_dataPriority, TMO timeout );
    ER             (*initialize__T)( const struct tag_sPriorityDataqueue_VDES *edp );
    ER             (*refer__T)( const struct tag_sPriorityDataqueue_VDES *edp, T_RPDQ* pk_priorityDataqueueStatus );
};

/* signature descriptor #_SDES_# for dynamic join */
#ifndef Descriptor_of_sPriorityDataqueue_Defined
#define  Descriptor_of_sPriorityDataqueue_Defined
typedef struct { struct tag_sPriorityDataqueue_VDES *vdes; } Descriptor( sPriorityDataqueue );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPRIORITYDATAQUEUE_SEND         (1)
#define	FUNCID_SPRIORITYDATAQUEUE_SENDPOLLING  (2)
#define	FUNCID_SPRIORITYDATAQUEUE_SENDTIMEOUT  (3)
#define	FUNCID_SPRIORITYDATAQUEUE_RECEIVE      (4)
#define	FUNCID_SPRIORITYDATAQUEUE_RECEIVEPOLLING (5)
#define	FUNCID_SPRIORITYDATAQUEUE_RECEIVETIMEOUT (6)
#define	FUNCID_SPRIORITYDATAQUEUE_INITIALIZE   (7)
#define	FUNCID_SPRIORITYDATAQUEUE_REFER        (8)

#endif /* sPriorityDataqueue_TECSGEN_H */