/*  1 "./gen/tmp_C_src.c" */
/*  1 "<built-in>" */
/*  1 "<command-line>" */
/*  1 "./gen/tmp_C_src.c" */
/*  34 "./gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "../../asp3_dcre/syssvc/serial.h" 1 */
/*  50 "../../asp3_dcre/syssvc/serial.h" */
/*  1 "../../asp3_dcre/include/kernel.h" 1 */
/*  64 "../../asp3_dcre/include/kernel.h" */
/*  1 "../../asp3_dcre/include/t_stddef.h" 1 */
/*  65 "../../asp3_dcre/include/t_stddef.h" */
/*  1 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 1 */
/*  61 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" */
/*  1 "../../musl-1.1.18/include/stdint.h" 1 */
/*  20 "../../musl-1.1.18/include/stdint.h" */
/*  1 "../../musl-1.1.18/include/bits/alltypes.h" 1 */
/*  93 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned int uintptr_t;
/*  108 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef int intptr_t;
/*  124 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef signed char int8_t;




typedef short int16_t;




typedef int int32_t;




typedef long long int64_t;




typedef long long intmax_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;
/*  174 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned long long uintmax_t;
/*  21 "../../musl-1.1.18/include/stdint.h" 2 */

typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
/*  95 "../../musl-1.1.18/include/stdint.h" */
/*  1 "../../musl-1.1.18/include/bits/stdint.h" 1 */
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
/*  96 "../../musl-1.1.18/include/stdint.h" 2 */
/*  62 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 2 */



/*  1 "../../asp3_dcre/arch/gcc/tool_stddef.h" 1 */
/*  81 "../../asp3_dcre/arch/gcc/tool_stddef.h" */
/*  1 "../../musl-1.1.18/include/stddef.h" 1 */
/*  17 "../../musl-1.1.18/include/stddef.h" */
/*  1 "../../musl-1.1.18/include/bits/alltypes.h" 1 */
/*  18 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned wchar_t;
/*  36 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef struct { long long __ll; long double __ld; } max_align_t;
/*  88 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned int size_t;
/*  98 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef int ptrdiff_t;
/*  18 "../../musl-1.1.18/include/stddef.h" 2 */
/*  82 "../../asp3_dcre/arch/gcc/tool_stddef.h" 2 */
/*  1 "../../musl-1.1.18/include/limits.h" 1 */



/*  1 "../../musl-1.1.18/include/features.h" 1 */
/*  5 "../../musl-1.1.18/include/limits.h" 2 */



/*  1 "../../musl-1.1.18/include/bits/limits.h" 1 */
/*  9 "../../musl-1.1.18/include/limits.h" 2 */
/*  83 "../../asp3_dcre/arch/gcc/tool_stddef.h" 2 */
/*  191 "../../asp3_dcre/arch/gcc/tool_stddef.h" */
typedef float float32_t;
typedef double double64_t;
/*  66 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 2 */




/*  1 "../../asp3_dcre/arch/arm_gcc/rza1/chip_stddef.h" 1 */
/*  68 "../../asp3_dcre/arch/arm_gcc/rza1/chip_stddef.h" */
/*  1 "../../asp3_dcre/arch/arm_gcc/common/core_stddef.h" 1 */
/*  69 "../../asp3_dcre/arch/arm_gcc/rza1/chip_stddef.h" 2 */
/*  71 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 2 */






static inline void
TOPPERS_assert_abort(void)
{



 __asm__ volatile("bkpt #0");
}
/*  66 "../../asp3_dcre/include/t_stddef.h" 2 */
/*  84 "../../asp3_dcre/include/t_stddef.h" */
struct TOPPERS_dummy_t { int TOPPERS_dummy_field; };
typedef void (*TOPPERS_fp_t)(struct TOPPERS_dummy_t);






typedef int bool_t;

typedef signed int int_t;
typedef unsigned int uint_t;

typedef signed long long_t;
typedef unsigned long ulong_t;

typedef int_t FN;
typedef int_t ER;
typedef int_t ID;
typedef uint_t ATR;
typedef uint_t STAT;
typedef uint_t MODE;
typedef int_t PRI;
typedef uint32_t TMO;
typedef uint32_t RELTIM;

typedef uint64_t SYSTIM;



typedef uint32_t PRCTIM;
typedef uint32_t HRTCNT;

typedef TOPPERS_fp_t FP;

typedef int_t ER_BOOL;
typedef int_t ER_ID;
typedef int_t ER_UINT;

typedef uintptr_t MB_T;

typedef uint32_t ACPTN;
typedef struct acvct {
 ACPTN acptn1;
 ACPTN acptn2;
 ACPTN acptn3;
 ACPTN acptn4;
} ACVCT;
/*  65 "../../asp3_dcre/include/kernel.h" 2 */




/*  1 "../../asp3_dcre/target/gr_peach_gcc/target_kernel.h" 1 */
/*  55 "../../asp3_dcre/target/gr_peach_gcc/target_kernel.h" */
/*  1 "../../asp3_dcre/arch/arm_gcc/rza1/chip_kernel.h" 1 */
/*  104 "../../asp3_dcre/arch/arm_gcc/rza1/chip_kernel.h" */
/*  1 "../../asp3_dcre/arch/arm_gcc/common/core_kernel.h" 1 */
/*  105 "../../asp3_dcre/arch/arm_gcc/common/core_kernel.h" */
typedef struct t_excinf {
 uint32_t nest_count;
 uint32_t intpri;
 uint32_t r0;
 uint32_t r1;
 uint32_t r2;
 uint32_t r3;
 uint32_t r4;
 uint32_t r5;
 uint32_t r12;
 uint32_t lr;
 uint32_t pc;
 uint32_t cpsr;
} T_EXCINF;
/*  105 "../../asp3_dcre/arch/arm_gcc/rza1/chip_kernel.h" 2 */
/*  56 "../../asp3_dcre/target/gr_peach_gcc/target_kernel.h" 2 */
/*  70 "../../asp3_dcre/include/kernel.h" 2 */
/*  105 "../../asp3_dcre/include/kernel.h" */
typedef uint_t FLGPTN;
typedef uint_t INTNO;
typedef uint_t INHNO;
typedef uint_t EXCNO;




typedef void (*TASK)(intptr_t exinf);
typedef void (*TMEHDR)(intptr_t exinf);
typedef void (*ISR)(intptr_t exinf);
typedef void (*INTHDR)(void);
typedef void (*EXCHDR)(void *p_excinf);
typedef void (*INIRTN)(intptr_t exinf);
typedef void (*TERRTN)(intptr_t exinf);







typedef long long STK_T;




typedef intptr_t MPF_T;




typedef struct {
 intptr_t exinf;
 TMEHDR tmehdr;
} T_NFY_HDR;

typedef struct {
 intptr_t *p_var;
 intptr_t value;
} T_NFY_VAR;

typedef struct {
 intptr_t *p_var;
} T_NFY_IVAR;

typedef struct {
 ID tskid;
} T_NFY_TSK;

typedef struct {
 ID semid;
} T_NFY_SEM;

typedef struct {
 ID flgid;
 FLGPTN flgptn;
} T_NFY_FLG;

typedef struct {
 ID dtqid;
 intptr_t data;
} T_NFY_DTQ;

typedef struct {
 intptr_t *p_var;
} T_ENFY_VAR;

typedef struct {
 ID dtqid;
} T_ENFY_DTQ;

typedef struct {
 MODE nfymode;
 union {
  T_NFY_HDR handler;
  T_NFY_VAR setvar;
  T_NFY_IVAR incvar;
  T_NFY_TSK acttsk;
  T_NFY_TSK wuptsk;
  T_NFY_SEM sigsem;
  T_NFY_FLG setflg;
  T_NFY_DTQ snddtq;
 } nfy;
 union {
  T_ENFY_VAR setvar;
  T_NFY_IVAR incvar;
  T_NFY_TSK acttsk;
  T_NFY_TSK wuptsk;
  T_NFY_SEM sigsem;
  T_NFY_FLG setflg;
  T_ENFY_DTQ snddtq;
 } enfy;
} T_NFYINFO;




typedef struct t_ctsk {
 ATR tskatr;
 intptr_t exinf;
 TASK task;
 PRI itskpri;
 size_t stksz;
 STK_T *stk;
} T_CTSK;

typedef struct t_rtsk {
 STAT tskstat;
 PRI tskpri;
 PRI tskbpri;
 STAT tskwait;
 ID wobjid;
 TMO lefttmo;
 uint_t actcnt;
 uint_t wupcnt;
 bool_t raster;
 bool_t dister;
} T_RTSK;

typedef struct t_csem {
 ATR sematr;
 uint_t isemcnt;
 uint_t maxsem;
} T_CSEM;

typedef struct t_rsem {
 ID wtskid;
 uint_t semcnt;
} T_RSEM;

typedef struct t_cflg {
 ATR flgatr;
 FLGPTN iflgptn;
} T_CFLG;

typedef struct t_rflg {
 ID wtskid;
 FLGPTN flgptn;
} T_RFLG;

typedef struct t_cdtq {
 ATR dtqatr;
 uint_t dtqcnt;
 void *dtqmb;
} T_CDTQ;

typedef struct t_rdtq {
 ID stskid;
 ID rtskid;
 uint_t sdtqcnt;
} T_RDTQ;

typedef struct t_cpdq {
 ATR pdqatr;
 uint_t pdqcnt;
 PRI maxdpri;

 void *pdqmb;
} T_CPDQ;

typedef struct t_rpdq {
 ID stskid;

 ID rtskid;

 uint_t spdqcnt;

} T_RPDQ;

typedef struct t_cmtx {
 ATR mtxatr;
 PRI ceilpri;
} T_CMTX;

typedef struct t_rmtx {
 ID htskid;
 ID wtskid;
} T_RMTX;

typedef struct t_cmpf {
 ATR mpfatr;
 uint_t blkcnt;
 uint_t blksz;
 MPF_T *mpf;
 void *mpfmb;
} T_CMPF;

typedef struct t_rmpf {
 ID wtskid;

 uint_t fblkcnt;

} T_RMPF;

typedef struct t_ccyc {
 ATR cycatr;
 T_NFYINFO nfyinfo;
 RELTIM cyctim;
 RELTIM cycphs;
} T_CCYC;

typedef struct t_rcyc {
 STAT cycstat;
 RELTIM lefttim;
} T_RCYC;

typedef struct t_calm {
 ATR almatr;
 T_NFYINFO nfyinfo;
} T_CALM;

typedef struct t_ralm {
 STAT almstat;
 RELTIM lefttim;
} T_RALM;

typedef struct t_cisr {
 ATR isratr;
 intptr_t exinf;
 INTNO intno;
 ISR isr;
 PRI isrpri;
} T_CISR;
/*  337 "../../asp3_dcre/include/kernel.h" */
extern ER_ID acre_tsk(const T_CTSK *pk_ctsk) ;
extern ER del_tsk(ID tskid) ;
extern ER act_tsk(ID tskid) ;
extern ER_UINT can_act(ID tskid) ;
extern ER get_tst(ID tskid, STAT *p_tskstat) ;
extern ER chg_pri(ID tskid, PRI tskpri) ;
extern ER get_pri(ID tskid, PRI *p_tskpri) ;
extern ER get_inf(intptr_t *p_exinf) ;
extern ER ref_tsk(ID tskid, T_RTSK *pk_rtsk) ;




extern ER slp_tsk(void) ;
extern ER tslp_tsk(TMO tmout) ;
extern ER wup_tsk(ID tskid) ;
extern ER_UINT can_wup(ID tskid) ;
extern ER rel_wai(ID tskid) ;
extern ER sus_tsk(ID tskid) ;
extern ER rsm_tsk(ID tskid) ;
extern ER dly_tsk(RELTIM dlytim) ;




extern ER ext_tsk(void) ;
extern ER ras_ter(ID tskid) ;
extern ER dis_ter(void) ;
extern ER ena_ter(void) ;
extern bool_t sns_ter(void) ;
extern ER ter_tsk(ID tskid) ;




extern ER_ID acre_sem(const T_CSEM *pk_csem) ;
extern ER del_sem(ID semid) ;
extern ER sig_sem(ID semid) ;
extern ER wai_sem(ID semid) ;
extern ER pol_sem(ID semid) ;
extern ER twai_sem(ID semid, TMO tmout) ;
extern ER ini_sem(ID semid) ;
extern ER ref_sem(ID semid, T_RSEM *pk_rsem) ;

extern ER_ID acre_flg(const T_CFLG *pk_cflg) ;
extern ER del_flg(ID flgid) ;
extern ER set_flg(ID flgid, FLGPTN setptn) ;
extern ER clr_flg(ID flgid, FLGPTN clrptn) ;
extern ER wai_flg(ID flgid, FLGPTN waiptn,
      MODE wfmode, FLGPTN *p_flgptn) ;
extern ER pol_flg(ID flgid, FLGPTN waiptn,
      MODE wfmode, FLGPTN *p_flgptn) ;
extern ER twai_flg(ID flgid, FLGPTN waiptn,
      MODE wfmode, FLGPTN *p_flgptn, TMO tmout) ;
extern ER ini_flg(ID flgid) ;
extern ER ref_flg(ID flgid, T_RFLG *pk_rflg) ;

extern ER_ID acre_dtq(const T_CDTQ *pk_cdtq) ;
extern ER del_dtq(ID dtqid) ;
extern ER snd_dtq(ID dtqid, intptr_t data) ;
extern ER psnd_dtq(ID dtqid, intptr_t data) ;
extern ER tsnd_dtq(ID dtqid, intptr_t data, TMO tmout) ;
extern ER fsnd_dtq(ID dtqid, intptr_t data) ;
extern ER rcv_dtq(ID dtqid, intptr_t *p_data) ;
extern ER prcv_dtq(ID dtqid, intptr_t *p_data) ;
extern ER trcv_dtq(ID dtqid, intptr_t *p_data, TMO tmout) ;
extern ER ini_dtq(ID dtqid) ;
extern ER ref_dtq(ID dtqid, T_RDTQ *pk_rdtq) ;

extern ER_ID acre_pdq(const T_CPDQ *pk_cpdq) ;
extern ER del_pdq(ID pdqid) ;
extern ER snd_pdq(ID pdqid, intptr_t data, PRI datapri) ;
extern ER psnd_pdq(ID pdqid, intptr_t data, PRI datapri) ;
extern ER tsnd_pdq(ID pdqid, intptr_t data,
          PRI datapri, TMO tmout) ;
extern ER rcv_pdq(ID pdqid, intptr_t *p_data, PRI *p_datapri) ;
extern ER prcv_pdq(ID pdqid, intptr_t *p_data, PRI *p_datapri) ;
extern ER trcv_pdq(ID pdqid, intptr_t *p_data,
          PRI *p_datapri, TMO tmout) ;
extern ER ini_pdq(ID pdqid) ;
extern ER ref_pdq(ID pdqid, T_RPDQ *pk_rpdq) ;

extern ER_ID acre_mtx(const T_CMTX *pk_cmtx) ;
extern ER del_mtx(ID mtxid) ;
extern ER loc_mtx(ID mtxid) ;
extern ER ploc_mtx(ID mtxid) ;
extern ER tloc_mtx(ID mtxid, TMO tmout) ;
extern ER unl_mtx(ID mtxid) ;
extern ER ini_mtx(ID mtxid) ;
extern ER ref_mtx(ID mtxid, T_RMTX *pk_rmtx) ;




extern ER_ID acre_mpf(const T_CMPF *pk_cmpf) ;
extern ER del_mpf(ID mpfid) ;
extern ER get_mpf(ID mpfid, void **p_blk) ;
extern ER pget_mpf(ID mpfid, void **p_blk) ;
extern ER tget_mpf(ID mpfid, void **p_blk, TMO tmout) ;
extern ER rel_mpf(ID mpfid, void *blk) ;
extern ER ini_mpf(ID mpfid) ;
extern ER ref_mpf(ID mpfid, T_RMPF *pk_rmpf) ;




extern ER set_tim(SYSTIM systim) ;
extern ER get_tim(SYSTIM *p_systim) ;
extern ER adj_tim(int32_t adjtim) ;
extern HRTCNT fch_hrt(void) ;

extern ER_ID acre_cyc(const T_CCYC *pk_ccyc) ;
extern ER del_cyc(ID cycid) ;
extern ER sta_cyc(ID cycid) ;
extern ER stp_cyc(ID cycid) ;
extern ER ref_cyc(ID cycid, T_RCYC *pk_rcyc) ;

extern ER_ID acre_alm(const T_CALM *pk_calm) ;
extern ER del_alm(ID almid) ;
extern ER sta_alm(ID almid, RELTIM almtim) ;
extern ER stp_alm(ID almid) ;
extern ER ref_alm(ID almid, T_RALM *pk_ralm) ;




extern ER rot_rdq(PRI tskpri) ;
extern ER get_tid(ID *p_tskid) ;
extern ER get_lod(PRI tskpri, uint_t *p_load) ;
extern ER get_nth(PRI tskpri, uint_t nth, ID *p_tskid) ;
extern ER loc_cpu(void) ;
extern ER unl_cpu(void) ;
extern ER dis_dsp(void) ;
extern ER ena_dsp(void) ;
extern bool_t sns_ctx(void) ;
extern bool_t sns_loc(void) ;
extern bool_t sns_dsp(void) ;
extern bool_t sns_dpn(void) ;
extern bool_t sns_ker(void) ;
extern ER ext_ker(void) ;




extern ER_ID acre_isr(const T_CISR *pk_cisr) ;
extern ER del_isr(ID isrid) ;
extern ER dis_int(INTNO intno) ;
extern ER ena_int(INTNO intno) ;
extern ER clr_int(INTNO intno) ;
extern ER ras_int(INTNO intno) ;
extern ER_BOOL prb_int(INTNO intno) ;
extern ER chg_ipm(PRI intpri) ;
extern ER get_ipm(PRI *p_intpri) ;




extern bool_t xsns_dpn(void *p_excinf) ;
/*  51 "../../asp3_dcre/syssvc/serial.h" 2 */
/*  59 "../../asp3_dcre/syssvc/serial.h" */
typedef struct {
 uint_t reacnt;
 uint_t wricnt;
} T_SERIAL_RPOR;
/*  79 "../../asp3_dcre/syssvc/serial.h" */
extern ER serial_opn_por(ID portid) ;
extern ER serial_cls_por(ID portid) ;
extern ER_UINT serial_trea_dat(ID portid, char *buf, uint_t len, TMO tmout) ;
extern ER_UINT serial_wri_dat(ID portid, const char *buf, uint_t len) ;
extern ER serial_ctl_por(ID portid, uint_t ioctl) ;
extern ER serial_ref_por(ID portid, T_SERIAL_RPOR *pk_rpor) ;

static inline ER_UINT serial_rea_dat(ID portid, char *buf, uint_t len)
{
 return serial_trea_dat(portid, buf, len, ((0xffffffffu)));
}
/*  37 "./gen/tmp_C_src.c" 2 */
