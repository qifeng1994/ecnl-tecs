/*  1 "./gen/tmp_C_src.c" */
/*  1 "<built-in>" */
/*  1 "<command-line>" */
/*  1 "./gen/tmp_C_src.c" */
/*  34 "./gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "../target/gr_peach_gcc/gr_peach.h" 1 */
/*  47 "../target/gr_peach_gcc/gr_peach.h" */
/*  1 "../include/t_stddef.h" 1 */
/*  65 "../include/t_stddef.h" */
/*  1 "../target/gr_peach_gcc/target_stddef.h" 1 */
/*  61 "../target/gr_peach_gcc/target_stddef.h" */
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
/*  62 "../target/gr_peach_gcc/target_stddef.h" 2 */



/*  1 "../arch/gcc/tool_stddef.h" 1 */
/*  81 "../arch/gcc/tool_stddef.h" */
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
/*  82 "../arch/gcc/tool_stddef.h" 2 */
/*  1 "../../musl-1.1.18/include/limits.h" 1 */



/*  1 "../../musl-1.1.18/include/features.h" 1 */
/*  5 "../../musl-1.1.18/include/limits.h" 2 */



/*  1 "../../musl-1.1.18/include/bits/limits.h" 1 */
/*  9 "../../musl-1.1.18/include/limits.h" 2 */
/*  83 "../arch/gcc/tool_stddef.h" 2 */
/*  191 "../arch/gcc/tool_stddef.h" */
typedef float float32_t;
typedef double double64_t;
/*  66 "../target/gr_peach_gcc/target_stddef.h" 2 */




/*  1 "../arch/arm_gcc/rza1/chip_stddef.h" 1 */
/*  68 "../arch/arm_gcc/rza1/chip_stddef.h" */
/*  1 "../arch/arm_gcc/common/core_stddef.h" 1 */
/*  69 "../arch/arm_gcc/rza1/chip_stddef.h" 2 */
/*  71 "../target/gr_peach_gcc/target_stddef.h" 2 */






static inline void
TOPPERS_assert_abort(void)
{



 __asm__ volatile("bkpt #0");
}
/*  66 "../include/t_stddef.h" 2 */
/*  84 "../include/t_stddef.h" */
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
/*  48 "../target/gr_peach_gcc/gr_peach.h" 2 */
/*  73 "../target/gr_peach_gcc/gr_peach.h" */
extern void gr_peach_set_led(uint_t led, uint_t set);
/*  37 "./gen/tmp_C_src.c" 2 */
