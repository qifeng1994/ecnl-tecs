/*  1 "./gen/tmp_C_src.c" */
/*  1 "<built-in>" */
/*  1 "<command-line>" */
/*  1 "./gen/tmp_C_src.c" */
/*  34 "./gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device.h" 1 */
/*  47 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device.h" */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 1 */
/*  19 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" */
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
/*  20 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/cmsis.h" 1 */
/*  10 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/cmsis.h" */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/MBRZA1H.h" 1 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" 1 */
/*  38 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" */
typedef enum IRQn
{

  SGI0_IRQn = 0,
  SGI1_IRQn = 1,
  SGI2_IRQn = 2,
  SGI3_IRQn = 3,
  SGI4_IRQn = 4,
  SGI5_IRQn = 5,
  SGI6_IRQn = 6,
  SGI7_IRQn = 7,
  SGI8_IRQn = 8,
  SGI9_IRQn = 9,
  SGI10_IRQn = 10,
  SGI11_IRQn = 11,
  SGI12_IRQn = 12,
  SGI13_IRQn = 13,
  SGI14_IRQn = 14,
  SGI15_IRQn = 15,



  PMUIRQ0_IRQn = 16,
  COMMRX0_IRQn = 17,
  COMMTX0_IRQn = 18,
  CTIIRQ0_IRQn = 19,

  IRQ0_IRQn = 32,
  IRQ1_IRQn = 33,
  IRQ2_IRQn = 34,
  IRQ3_IRQn = 35,
  IRQ4_IRQn = 36,
  IRQ5_IRQn = 37,
  IRQ6_IRQn = 38,
  IRQ7_IRQn = 39,

  PL310ERR_IRQn = 40,

  DMAINT0_IRQn = 41,
  DMAINT1_IRQn = 42,
  DMAINT2_IRQn = 43,
  DMAINT3_IRQn = 44,
  DMAINT4_IRQn = 45,
  DMAINT5_IRQn = 46,
  DMAINT6_IRQn = 47,
  DMAINT7_IRQn = 48,
  DMAINT8_IRQn = 49,
  DMAINT9_IRQn = 50,
  DMAINT10_IRQn = 51,
  DMAINT11_IRQn = 52,
  DMAINT12_IRQn = 53,
  DMAINT13_IRQn = 54,
  DMAINT14_IRQn = 55,
  DMAINT15_IRQn = 56,
  DMAERR_IRQn = 57,



  USBI0_IRQn = 73,
  USBI1_IRQn = 74,

  S0_VI_VSYNC0_IRQn = 75,
  S0_LO_VSYNC0_IRQn = 76,
  S0_VSYNCERR0_IRQn = 77,
  GR3_VLINE0_IRQn = 78,
  S0_VFIELD0_IRQn = 79,
  IV1_VBUFERR0_IRQn = 80,
  IV3_VBUFERR0_IRQn = 81,
  IV5_VBUFERR0_IRQn = 82,
  IV6_VBUFERR0_IRQn = 83,
  S0_WLINE0_IRQn = 84,
  S1_VI_VSYNC0_IRQn = 85,
  S1_LO_VSYNC0_IRQn = 86,
  S1_VSYNCERR0_IRQn = 87,
  S1_VFIELD0_IRQn = 88,
  IV2_VBUFERR0_IRQn = 89,
  IV4_VBUFERR0_IRQn = 90,
  S1_WLINE0_IRQn = 91,
  OIR_VI_VSYNC0_IRQn = 92,
  OIR_LO_VSYNC0_IRQn = 93,
  OIR_VSYNCERR0_IRQn = 94,
  OIR_VFIELD0_IRQn = 95,
  IV7_VBUFERR0_IRQn = 96,
  IV8_VBUFERR0_IRQn = 97,

  S0_VI_VSYNC1_IRQn = 99,
  S0_LO_VSYNC1_IRQn = 100,
  S0_VSYNCERR1_IRQn = 101,
  GR3_VLINE1_IRQn = 102,
  S0_VFIELD1_IRQn = 103,
  IV1_VBUFERR1_IRQn = 104,
  IV3_VBUFERR1_IRQn = 105,
  IV5_VBUFERR1_IRQn = 106,
  IV6_VBUFERR1_IRQn = 107,
  S0_WLINE1_IRQn = 108,
  S1_VI_VSYNC1_IRQn = 109,
  S1_LO_VSYNC1_IRQn = 110,
  S1_VSYNCERR1_IRQn = 111,
  S1_VFIELD1_IRQn = 112,
  IV2_VBUFERR1_IRQn = 113,
  IV4_VBUFERR1_IRQn = 114,
  S1_WLINE1_IRQn = 115,
  OIR_VI_VSYNC1_IRQn = 116,
  OIR_LO_VSYNC1_IRQn = 117,
  OIR_VSYNCERR1_IRQn = 118,
  OIR_VFIELD1_IRQn = 119,
  IV7_VBUFERR1_IRQn = 120,
  IV8_VBUFERR1_IRQn = 121,


  IMRDI_IRQn = 123,
  IMR2I0_IRQn = 124,
  IMR2I1_IRQn = 125,

  JEDI_IRQn = 126,
  JDTI_IRQn = 127,

  CMP0_IRQn = 128,
  CMP1_IRQn = 129,

  INT0_IRQn = 130,
  INT1_IRQn = 131,
  INT2_IRQn = 132,
  INT3_IRQn = 133,

  OSTMI0TINT_IRQn = 134,
  OSTMI1TINT_IRQn = 135,

  CMI_IRQn = 136,
  WTOUT_IRQn = 137,

  ITI_IRQn = 138,

  TGI0A_IRQn = 139,
  TGI0B_IRQn = 140,
  TGI0C_IRQn = 141,
  TGI0D_IRQn = 142,
  TGI0V_IRQn = 143,
  TGI0E_IRQn = 144,
  TGI0F_IRQn = 145,
  TGI1A_IRQn = 146,
  TGI1B_IRQn = 147,
  TGI1V_IRQn = 148,
  TGI1U_IRQn = 149,
  TGI2A_IRQn = 150,
  TGI2B_IRQn = 151,
  TGI2V_IRQn = 152,
  TGI2U_IRQn = 153,
  TGI3A_IRQn = 154,
  TGI3B_IRQn = 155,
  TGI3C_IRQn = 156,
  TGI3D_IRQn = 157,
  TGI3V_IRQn = 158,
  TGI4A_IRQn = 159,
  TGI4B_IRQn = 160,
  TGI4C_IRQn = 161,
  TGI4D_IRQn = 162,
  TGI4V_IRQn = 163,

  CMI1_IRQn = 164,
  CMI2_IRQn = 165,

  SGDEI0_IRQn = 166,
  SGDEI1_IRQn = 167,
  SGDEI2_IRQn = 168,
  SGDEI3_IRQn = 169,

  ADI_IRQn = 170,
  LMTI_IRQn = 171,

  SSII0_IRQn = 172,
  SSIRXI0_IRQn = 173,
  SSITXI0_IRQn = 174,
  SSII1_IRQn = 175,
  SSIRXI1_IRQn = 176,
  SSITXI1_IRQn = 177,
  SSII2_IRQn = 178,
  SSIRTI2_IRQn = 179,
  SSII3_IRQn = 180,
  SSIRXI3_IRQn = 181,
  SSITXI3_IRQn = 182,
  SSII4_IRQn = 183,
  SSIRTI4_IRQn = 184,
  SSII5_IRQn = 185,
  SSIRXI5_IRQn = 186,
  SSITXI5_IRQn = 187,

  SPDIFI_IRQn = 188,

  INTIICTEI0_IRQn = 189,
  INTIICRI0_IRQn = 190,
  INTIICTI0_IRQn = 191,
  INTIICSPI0_IRQn = 192,
  INTIICSTI0_IRQn = 193,
  INTIICNAKI0_IRQn = 194,
  INTIICALI0_IRQn = 195,
  INTIICTMOI0_IRQn = 196,
  INTIICTEI1_IRQn = 197,
  INTIICRI1_IRQn = 198,
  INTIICTI1_IRQn = 199,
  INTIICSPI1_IRQn = 200,
  INTIICSTI1_IRQn = 201,
  INTIICNAKI1_IRQn = 202,
  INTIICALI1_IRQn = 203,
  INTIICTMOI1_IRQn = 204,
  INTIICTEI2_IRQn = 205,
  INTIICRI2_IRQn = 206,
  INTIICTI2_IRQn = 207,
  INTIICSPI2_IRQn = 208,
  INTIICSTI2_IRQn = 209,
  INTIICNAKI2_IRQn = 210,
  INTIICALI2_IRQn = 211,
  INTIICTMOI2_IRQn = 212,
  INTIICTEI3_IRQn = 213,
  INTIICRI3_IRQn = 214,
  INTIICTI3_IRQn = 215,
  INTIICSPI3_IRQn = 216,
  INTIICSTI3_IRQn = 217,
  INTIICNAKI3_IRQn = 218,
  INTIICALI3_IRQn = 219,
  INTIICTMOI3_IRQn = 220,

  SCIFBRI0_IRQn = 221,
  SCIFERI0_IRQn = 222,
  SCIFRXI0_IRQn = 223,
  SCIFTXI0_IRQn = 224,
  SCIFBRI1_IRQn = 225,
  SCIFERI1_IRQn = 226,
  SCIFRXI1_IRQn = 227,
  SCIFTXI1_IRQn = 228,
  SCIFBRI2_IRQn = 229,
  SCIFERI2_IRQn = 230,
  SCIFRXI2_IRQn = 231,
  SCIFTXI2_IRQn = 232,
  SCIFBRI3_IRQn = 233,
  SCIFERI3_IRQn = 234,
  SCIFRXI3_IRQn = 235,
  SCIFTXI3_IRQn = 236,
  SCIFBRI4_IRQn = 237,
  SCIFERI4_IRQn = 238,
  SCIFRXI4_IRQn = 239,
  SCIFTXI4_IRQn = 240,
  SCIFBRI5_IRQn = 241,
  SCIFERI5_IRQn = 242,
  SCIFRXI5_IRQn = 243,
  SCIFTXI5_IRQn = 244,
  SCIFBRI6_IRQn = 245,
  SCIFERI6_IRQn = 246,
  SCIFRXI6_IRQn = 247,
  SCIFTXI6_IRQn = 248,
  SCIFBRI7_IRQn = 249,
  SCIFERI7_IRQn = 250,
  SCIFRXI7_IRQn = 251,
  SCIFTXI7_IRQn = 252,

  INTRCANGERR_IRQn = 253,
  INTRCANGRECC_IRQn = 254,
  INTRCAN0REC_IRQn = 255,
  INTRCAN0ERR_IRQn = 256,
  INTRCAN0TRX_IRQn = 257,
  INTRCAN1REC_IRQn = 258,
  INTRCAN1ERR_IRQn = 259,
  INTRCAN1TRX_IRQn = 260,
  INTRCAN2REC_IRQn = 261,
  INTRCAN2ERR_IRQn = 262,
  INTRCAN2TRX_IRQn = 263,
  INTRCAN3REC_IRQn = 264,
  INTRCAN3ERR_IRQn = 265,
  INTRCAN3TRX_IRQn = 266,
  INTRCAN4REC_IRQn = 267,
  INTRCAN4ERR_IRQn = 268,
  INTRCAN4TRX_IRQn = 269,

  RSPISPEI0_IRQn = 270,
  RSPISPRI0_IRQn = 271,
  RSPISPTI0_IRQn = 272,
  RSPISPEI1_IRQn = 273,
  RSPISPRI1_IRQn = 274,
  RSPISPTI1_IRQn = 275,
  RSPISPEI2_IRQn = 276,
  RSPISPRI2_IRQn = 277,
  RSPISPTI2_IRQn = 278,
  RSPISPEI3_IRQn = 279,
  RSPISPRI3_IRQn = 280,
  RSPISPTI3_IRQn = 281,
  RSPISPEI4_IRQn = 282,
  RSPISPRI4_IRQn = 283,
  RSPISPTI4_IRQn = 284,

  IEBBTD_IRQn = 285,
  IEBBTERR_IRQn = 286,
  IEBBTSTA_IRQn = 287,
  IEBBTV_IRQn = 288,

  ISY_IRQn = 289,
  IERR_IRQn = 290,
  ITARG_IRQn = 291,
  ISEC_IRQn = 292,
  IBUF_IRQn = 293,
  IREADY_IRQn = 294,

  STERB_IRQn = 295,
  FLTENDI_IRQn = 296,
  FLTREQ0I_IRQn = 297,
  FLTREQ1I_IRQn = 298,

  MMC0_IRQn = 299,
  MMC1_IRQn = 300,
  MMC2_IRQn = 301,

  SCHI0_3_IRQn = 302,
  SDHI0_0_IRQn = 303,
  SDHI0_1_IRQn = 304,
  SCHI1_3_IRQn = 305,
  SDHI1_0_IRQn = 306,
  SDHI1_1_IRQn = 307,

  ARM_IRQn = 308,
  PRD_IRQn = 309,
  CUP_IRQn = 310,

  SCUAI0_IRQn = 311,
  SCUAI1_IRQn = 312,
  SCUFDI0_IRQn = 313,
  SCUFDI1_IRQn = 314,
  SCUFDI2_IRQn = 315,
  SCUFDI3_IRQn = 316,
  SCUFUI0_IRQn = 317,
  SCUFUI1_IRQn = 318,
  SCUFUI2_IRQn = 319,
  SCUFUI3_IRQn = 320,
  SCUDVI0_IRQn = 321,
  SCUDVI1_IRQn = 322,
  SCUDVI2_IRQn = 323,
  SCUDVI3_IRQn = 324,

  MLB_CINT_IRQn = 325,
  MLB_SINT_IRQn = 326,

  DRC10_IRQn = 327,
  DRC11_IRQn = 328,



  LINI0_INT_T_IRQn = 331,
  LINI0_INT_R_IRQn = 332,
  LINI0_INT_S_IRQn = 333,
  LINI0_INT_M_IRQn = 334,
  LINI1_INT_T_IRQn = 335,
  LINI1_INT_R_IRQn = 336,
  LINI1_INT_S_IRQn = 337,
  LINI1_INT_M_IRQn = 338,



  SCIERI0_IRQn = 347,
  SCIRXI0_IRQn = 348,
  SCITXI0_IRQn = 349,
  SCITEI0_IRQn = 350,
  SCIERI1_IRQn = 351,
  SCIRXI1_IRQn = 352,
  SCITXI1_IRQn = 353,
  SCITEI1_IRQn = 354,

  AVBI_DATA = 355,
  AVBI_ERROR = 356,
  AVBI_MANAGE = 357,
  AVBI_MAC = 358,

  ETHERI_IRQn = 359,



  CEUI_IRQn = 364,



  H2XMLB_ERRINT_IRQn = 381,
  H2XIC1_ERRINT_IRQn = 382,
  X2HPERI1_ERRINT_IRQn = 383,
  X2HPERR2_ERRINT_IRQn = 384,
  X2HPERR34_ERRINT_IRQn= 385,
  X2HPERR5_ERRINT_IRQn = 386,
  X2HPERR67_ERRINT_IRQn= 387,
  X2HDBGR_ERRINT_IRQn = 388,
  X2HBSC_ERRINT_IRQn = 389,
  X2HSPI1_ERRINT_IRQn = 390,
  X2HSPI2_ERRINT_IRQn = 391,
  PRRI_IRQn = 392,

  IFEI0_IRQn = 393,
  OFFI0_IRQn = 394,
  PFVEI0_IRQn = 395,
  IFEI1_IRQn = 396,
  OFFI1_IRQn = 397,
  PFVEI1_IRQn = 398,



  TINT0_IRQn = 416,
  TINT1_IRQn = 417,
  TINT2_IRQn = 418,
  TINT3_IRQn = 419,
  TINT4_IRQn = 420,
  TINT5_IRQn = 421,
  TINT6_IRQn = 422,
  TINT7_IRQn = 423,
  TINT8_IRQn = 424,
  TINT9_IRQn = 425,
  TINT10_IRQn = 426,
  TINT11_IRQn = 427,
  TINT12_IRQn = 428,
  TINT13_IRQn = 429,
  TINT14_IRQn = 430,
  TINT15_IRQn = 431,
  TINT16_IRQn = 432,
  TINT17_IRQn = 433,
  TINT18_IRQn = 434,
  TINT19_IRQn = 435,
  TINT20_IRQn = 436,
  TINT21_IRQn = 437,
  TINT22_IRQn = 438,
  TINT23_IRQn = 439,
  TINT24_IRQn = 440,
  TINT25_IRQn = 441,
  TINT26_IRQn = 442,
  TINT27_IRQn = 443,
  TINT28_IRQn = 444,
  TINT29_IRQn = 445,
  TINT30_IRQn = 446,
  TINT31_IRQn = 447,
  TINT32_IRQn = 448,
  TINT33_IRQn = 449,
  TINT34_IRQn = 450,
  TINT35_IRQn = 451,
  TINT36_IRQn = 452,
  TINT37_IRQn = 453,
  TINT38_IRQn = 454,
  TINT39_IRQn = 455,
  TINT40_IRQn = 456,
  TINT41_IRQn = 457,
  TINT42_IRQn = 458,
  TINT43_IRQn = 459,
  TINT44_IRQn = 460,
  TINT45_IRQn = 461,
  TINT46_IRQn = 462,
  TINT47_IRQn = 463,
  TINT48_IRQn = 464,
  TINT49_IRQn = 465,
  TINT50_IRQn = 466,
  TINT51_IRQn = 467,
  TINT52_IRQn = 468,
  TINT53_IRQn = 469,
  TINT54_IRQn = 470,
  TINT55_IRQn = 471,
  TINT56_IRQn = 472,
  TINT57_IRQn = 473,
  TINT58_IRQn = 474,
  TINT59_IRQn = 475,
  TINT60_IRQn = 476,
  TINT61_IRQn = 477,
  TINT62_IRQn = 478,
  TINT63_IRQn = 479,
  TINT64_IRQn = 480,
  TINT65_IRQn = 481,
  TINT66_IRQn = 482,
  TINT67_IRQn = 483,
  TINT68_IRQn = 484,
  TINT69_IRQn = 485,
  TINT70_IRQn = 486,
  TINT71_IRQn = 487,
  TINT72_IRQn = 488,
  TINT73_IRQn = 489,
  TINT74_IRQn = 490,
  TINT75_IRQn = 491,
  TINT76_IRQn = 492,
  TINT77_IRQn = 493,
  TINT78_IRQn = 494,
  TINT79_IRQn = 495,
  TINT80_IRQn = 496,
  TINT81_IRQn = 497,
  TINT82_IRQn = 498,
  TINT83_IRQn = 499,
  TINT84_IRQn = 500,
  TINT85_IRQn = 501,
  TINT86_IRQn = 502,
  TINT87_IRQn = 503,
  TINT88_IRQn = 504,
  TINT89_IRQn = 505,
  TINT90_IRQn = 506,
  TINT91_IRQn = 507,
  TINT92_IRQn = 508,
  TINT93_IRQn = 509,
  TINT94_IRQn = 510,
  TINT95_IRQn = 511,
  TINT96_IRQn = 512,
  TINT97_IRQn = 513,
  TINT98_IRQn = 514,
  TINT99_IRQn = 515,
  TINT100_IRQn = 516,
  TINT101_IRQn = 517,
  TINT102_IRQn = 518,
  TINT103_IRQn = 519,
  TINT104_IRQn = 520,
  TINT105_IRQn = 521,
  TINT106_IRQn = 522,
  TINT107_IRQn = 523,
  TINT108_IRQn = 524,
  TINT109_IRQn = 525,
  TINT110_IRQn = 526,
  TINT111_IRQn = 527,
  TINT112_IRQn = 528,
  TINT113_IRQn = 529,
  TINT114_IRQn = 530,
  TINT115_IRQn = 531,
  TINT116_IRQn = 532,
  TINT117_IRQn = 533,
  TINT118_IRQn = 534,
  TINT119_IRQn = 535,
  TINT120_IRQn = 536,
  TINT121_IRQn = 537,
  TINT122_IRQn = 538,
  TINT123_IRQn = 539,
  TINT124_IRQn = 540,
  TINT125_IRQn = 541,
  TINT126_IRQn = 542,
  TINT127_IRQn = 543,
  TINT128_IRQn = 544,
  TINT129_IRQn = 545,
  TINT130_IRQn = 546,
  TINT131_IRQn = 547,
  TINT132_IRQn = 548,
  TINT133_IRQn = 549,
  TINT134_IRQn = 550,
  TINT135_IRQn = 551,
  TINT136_IRQn = 552,
  TINT137_IRQn = 553,
  TINT138_IRQn = 554,
  TINT139_IRQn = 555,
  TINT140_IRQn = 556,
  TINT141_IRQn = 557,
  TINT142_IRQn = 558,
  TINT143_IRQn = 559,
  TINT144_IRQn = 560,
  TINT145_IRQn = 561,
  TINT146_IRQn = 562,
  TINT147_IRQn = 563,
  TINT148_IRQn = 564,
  TINT149_IRQn = 565,
  TINT150_IRQn = 566,
  TINT151_IRQn = 567,
  TINT152_IRQn = 568,
  TINT153_IRQn = 569,
  TINT154_IRQn = 570,
  TINT155_IRQn = 571,
  TINT156_IRQn = 572,
  TINT157_IRQn = 573,
  TINT158_IRQn = 574,
  TINT159_IRQn = 575,
  TINT160_IRQn = 576,
  TINT161_IRQn = 577,
  TINT162_IRQn = 578,
  TINT163_IRQn = 579,
  TINT164_IRQn = 580,
  TINT165_IRQn = 581,
  TINT166_IRQn = 582,
  TINT167_IRQn = 583,
  TINT168_IRQn = 584,
  TINT169_IRQn = 585,
  TINT170_IRQn = 586

} IRQn_Type;
/*  651 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" */
/*  1 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" 1 */
/*  122 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
/*  1 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_compiler.h" 1 */
/*  48 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_compiler.h" */
/*  1 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" 1 */
/*  29 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
/* pragma GCC diagnostic push */
/* pragma GCC diagnostic ignored "-Wsign-conversion" */
/* pragma GCC diagnostic ignored "-Wconversion" */
/* pragma GCC diagnostic ignored "-Wunused-parameter" */
/*  74 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
/* pragma GCC diagnostic push */
/* pragma GCC diagnostic ignored "-Wpacked" */

  struct T_UINT16_WRITE { uint16_t v; };
/* pragma GCC diagnostic pop */



/* pragma GCC diagnostic push */
/* pragma GCC diagnostic ignored "-Wpacked" */

  struct T_UINT16_READ { uint16_t v; };
/* pragma GCC diagnostic pop */



/* pragma GCC diagnostic push */
/* pragma GCC diagnostic ignored "-Wpacked" */

  struct T_UINT32_WRITE { uint32_t v; };
/* pragma GCC diagnostic pop */



/* pragma GCC diagnostic push */
/* pragma GCC diagnostic ignored "-Wpacked" */
  struct T_UINT32_READ { uint32_t v; };
/* pragma GCC diagnostic pop */
/*  135 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline void __ISB(void)
{
  asm volatile ("isb 0xF":::"memory");
}







 static inline void __DSB(void)
{
  asm volatile ("dsb 0xF":::"memory");
}






 static inline void __DMB(void)
{
  asm volatile ("dmb 0xF":::"memory");
}







 static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
/*  186 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;
  asm volatile("rev16 %0, %1" : "=r" (result) : "r" (value));
  return result;
}
/*  200 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
/*  219 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U) {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
/*  242 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  int32_t s = (4U * 8U) - 1U;

  result = value;
  for (value >>= 1U; value; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return result;
}
/*  278 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
/*  300 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
/*  322 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
/*  339 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
/*  356 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
/*  373 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






 static inline void __CLREX(void)
{
  asm volatile ("clrex" ::: "memory");
}
/*  429 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
 static inline void __enable_irq(void)
{
  asm volatile ("cpsie i" : : : "memory");
}






 static inline void __disable_irq(void)
{
  asm volatile ("cpsid i" : : : "memory");
}






 static inline uint32_t __get_FPSCR(void)
{
/*  465 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
    return(0U);

}






 static inline void __set_FPSCR(uint32_t fpscr)
{
/*  487 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
    (void)fpscr;

}




 static inline uint32_t __get_CPSR(void)
{
  uint32_t result;
  asm volatile("MRS %0, cpsr" : "=r" (result) );
  return(result);
}




 static inline void __set_CPSR(uint32_t cpsr)
{
asm volatile ("MSR cpsr, %0" : : "r" (cpsr) : "memory");
}




 static inline uint32_t __get_mode(void)
{
    return (__get_CPSR() & 0x1FU);
}




 static inline void __set_mode(uint32_t mode)
{
  asm volatile("MSR  cpsr_c, %0" : : "r" (mode) : "memory");
}




 static inline uint32_t __get_SP(void)
{
  uint32_t result;
  asm volatile("MOV  %0, sp" : "=r" (result) : : "memory");
  return result;
}




 static inline void __set_SP(uint32_t stack)
{
  asm volatile("MOV  sp, %0" : : "r" (stack) : "memory");
}




 static inline uint32_t __get_SP_usr(void)
{
  uint32_t cpsr = __get_CPSR();
  uint32_t result;
  asm volatile(
    "CPS     #0x1F  \n"
    "MOV     %0, sp   " : "=r"(result) : : "memory"
   );
  __set_CPSR(cpsr);
  __ISB();
  return result;
}




 static inline void __set_SP_usr(uint32_t topOfProcStack)
{
  uint32_t cpsr = __get_CPSR();
  asm volatile(
    "CPS     #0x1F  \n"
    "MOV     sp, %0   " : : "r" (topOfProcStack) : "memory"
   );
  __set_CPSR(cpsr);
  __ISB();
}




 static inline uint32_t __get_FPEXC(void)
{

  uint32_t result;
  asm volatile("VMRS %0, fpexc" : "=r" (result) );
  return(result);



}




 static inline void __set_FPEXC(uint32_t fpexc)
{

  asm volatile ("VMSR fpexc, %0" : : "r" (fpexc) : "memory");

}
/*  606 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
/*  1 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_cp15.h" 1 */
/*  37 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_cp15.h" */
 static inline uint32_t __get_ACTLR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "1" : "=r" (result) : : "memory" );
  return(result);
}




 static inline void __set_ACTLR(uint32_t actlr)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "1" : : "r" (actlr) : "memory" );
}




 static inline uint32_t __get_CPACR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "2" : "=r" (result) : : "memory" );
  return result;
}




 static inline void __set_CPACR(uint32_t cpacr)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "2" : : "r" (cpacr) : "memory" );
}




 static inline uint32_t __get_DFSR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "5" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}




 static inline void __set_DFSR(uint32_t dfsr)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "5" ", c" "0" ", " "0" : : "r" (dfsr) : "memory" );
}




 static inline uint32_t __get_IFSR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "5" ", c" "0" ", " "1" : "=r" (result) : : "memory" );
  return result;
}




 static inline void __set_IFSR(uint32_t ifsr)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "5" ", c" "0" ", " "1" : : "r" (ifsr) : "memory" );
}




 static inline uint32_t __get_ISR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "12" ", c" "1" ", " "0" : "=r" (result) : : "memory" );
  return result;
}




 static inline uint32_t __get_CBAR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "4" ", %0, c" "15" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}







 static inline uint32_t __get_TTBR0(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "2" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}







 static inline void __set_TTBR0(uint32_t ttbr0)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "2" ", c" "0" ", " "0" : : "r" (ttbr0) : "memory" );
}







 static inline uint32_t __get_DACR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "3" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}







 static inline void __set_DACR(uint32_t dacr)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "3" ", c" "0" ", " "0" : : "r" (dacr) : "memory" );
}







 static inline void __set_SCTLR(uint32_t sctlr)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "0" : : "r" (sctlr) : "memory" );
}




 static inline uint32_t __get_SCTLR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}




 static inline void __set_ACTRL(uint32_t actrl)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "1" : : "r" (actrl) : "memory" );
}




 static inline uint32_t __get_ACTRL(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "1" ", c" "0" ", " "1" : "=r" (result) : : "memory" );
  return result;
}







 static inline uint32_t __get_MPIDR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "0" ", c" "0" ", " "5" : "=r" (result) : : "memory" );
  return result;
}







 static inline uint32_t __get_VBAR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "12" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}







 static inline void __set_VBAR(uint32_t vbar)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "12" ", c" "0" ", " "0" : : "r" (vbar) : "memory" );
}







 static inline uint32_t __get_MVBAR(void)
{
  uint32_t result;
  asm volatile("MRC p" "15" ", " "0" ", %0, c" "12" ", c" "0" ", " "1" : "=r" (result) : : "memory" );
  return result;
}







 static inline void __set_MVBAR(uint32_t mvbar)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "12" ", c" "0" ", " "1" : : "r" (mvbar) : "memory" );
}
/*  390 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_cp15.h" */
 static inline void __set_TLBIALL(uint32_t value)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "8" ", c" "7" ", " "0" : : "r" (value) : "memory" );
}





 static inline void __set_BPIALL(uint32_t value)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "5" ", " "6" : : "r" (value) : "memory" );
}





 static inline void __set_ICIALLU(uint32_t value)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "5" ", " "0" : : "r" (value) : "memory" );
}





 static inline void __set_DCCMVAC(uint32_t value)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "10" ", " "1" : : "r" (value) : "memory" );
}





 static inline void __set_DCIMVAC(uint32_t value)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "6" ", " "1" : : "r" (value) : "memory" );
}





 static inline void __set_DCCIMVAC(uint32_t value)
{
  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "14" ", " "1" : : "r" (value) : "memory" );
}



 static inline void __set_CSSELR(uint32_t value)
{

  asm volatile("MCR p" "15" ", " "2" ", %0, c" "0" ", c" "0" ", " "0" : : "r" (value) : "memory" );
}




 static inline uint32_t __get_CSSELR(void)
{
  uint32_t result;

  asm volatile("MRC p" "15" ", " "2" ", %0, c" "0" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}





 static inline void __set_CCSIDR(uint32_t value)
{
  __set_CSSELR(value);
}




 static inline uint32_t __get_CCSIDR(void)
{
  uint32_t result;

  asm volatile("MRC p" "15" ", " "1" ", %0, c" "0" ", c" "0" ", " "0" : "=r" (result) : : "memory" );
  return result;
}




 static inline uint32_t __get_CLIDR(void)
{
  uint32_t result;

  asm volatile("MRC p" "15" ", " "1" ", %0, c" "0" ", c" "0" ", " "1" : "=r" (result) : : "memory" );
  return result;
}



 static inline void __set_DCISW(uint32_t value)
{

  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "6" ", " "2" : : "r" (value) : "memory" );
}



 static inline void __set_DCCSW(uint32_t value)
{

  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "10" ", " "2" : : "r" (value) : "memory" );
}



 static inline void __set_DCCISW(uint32_t value)
{

  asm volatile("MCR p" "15" ", " "0" ", %0, c" "7" ", c" "14" ", " "2" : : "r" (value) : "memory" );
}
/*  607 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" 2 */





static inline void __FPU_Enable(void)
{
  asm volatile(

    "        MRC     p15,0,R1,c1,c0,2  \n"
    "        ORR     R1,R1,#0x00F00000 \n"
    "        MCR     p15,0,R1,c1,c0,2  \n"


    "        ISB                       \n"


    "        VMRS    R1,FPEXC          \n"
    "        ORR     R1,R1,#0x40000000 \n"
    "        VMSR    FPEXC,R1          \n"


    "        MOV     R2,#0             \n"


    "        VMOV    D0, R2,R2         \n"
    "        VMOV    D1, R2,R2         \n"
    "        VMOV    D2, R2,R2         \n"
    "        VMOV    D3, R2,R2         \n"
    "        VMOV    D4, R2,R2         \n"
    "        VMOV    D5, R2,R2         \n"
    "        VMOV    D6, R2,R2         \n"
    "        VMOV    D7, R2,R2         \n"
    "        VMOV    D8, R2,R2         \n"
    "        VMOV    D9, R2,R2         \n"
    "        VMOV    D10,R2,R2         \n"
    "        VMOV    D11,R2,R2         \n"
    "        VMOV    D12,R2,R2         \n"
    "        VMOV    D13,R2,R2         \n"
    "        VMOV    D14,R2,R2         \n"
    "        VMOV    D15,R2,R2         \n"
/*  670 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_gcc.h" */
    "        VMRS    R2,FPSCR          \n"
    "        LDR     R3,=0x00086060    \n"
    "        AND     R2,R2,R3          \n"
    "        VMSR    FPSCR,R2            "
  );
}

/* pragma GCC diagnostic pop */
/*  49 "../mbed/cmsis/TARGET_CORTEX_A/cmsis_compiler.h" 2 */
/*  123 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" 2 */
/*  193 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
  struct
  {
    uint32_t M:5;
    uint32_t T:1;
    uint32_t F:1;
    uint32_t I:1;
    uint32_t A:1;
    uint32_t E:1;
    uint32_t IT1:6;
    uint32_t GE:4;
    uint32_t RESERVED0:4;
    uint32_t J:1;
    uint32_t IT0:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} CPSR_Type;
/*  276 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
  struct
  {
    uint32_t M:1;
    uint32_t A:1;
    uint32_t C:1;
    uint32_t RESERVED0:2;
    uint32_t CP15BEN:1;
    uint32_t RESERVED1:1;
    uint32_t B:1;
    uint32_t RESERVED2:2;
    uint32_t SW:1;
    uint32_t Z:1;
    uint32_t I:1;
    uint32_t V:1;
    uint32_t RR:1;
    uint32_t RESERVED3:2;
    uint32_t HA:1;
    uint32_t RESERVED4:1;
    uint32_t WXN:1;
    uint32_t UWXN:1;
    uint32_t FI:1;
    uint32_t U:1;
    uint32_t RESERVED5:1;
    uint32_t VE:1;
    uint32_t EE:1;
    uint32_t RESERVED6:1;
    uint32_t NMFI:1;
    uint32_t TRE:1;
    uint32_t AFE:1;
    uint32_t TE:1;
    uint32_t RESERVED7:1;
  } b;
  uint32_t w;
} SCTLR_Type;
/*  377 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
/*  419 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
  struct
  {
    uint32_t FW:1;
    uint32_t RESERVED0:1;
    uint32_t L1PE:1;
    uint32_t WFLZM:1;
    uint32_t RESERVED1:2;
    uint32_t SMP:1;
    uint32_t EXCL:1;
    uint32_t AOW:1;
    uint32_t PARITY:1;
    uint32_t RESERVED7:22;
  } b;

  uint32_t w;
} ACTLR_Type;
/*  494 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
  struct
  {
    uint32_t CP0:2;
    uint32_t CP1:2;
    uint32_t CP2:2;
    uint32_t CP3:2;
    uint32_t CP4:2;
    uint32_t CP5:2;
    uint32_t CP6:2;
    uint32_t CP7:2;
    uint32_t CP8:2;
    uint32_t CP9:2;
    uint32_t CP10:2;
    uint32_t CP11:2;
    uint32_t CP12:2;
    uint32_t CP13:2;
    uint32_t TRCDIS:1;
    uint32_t RESERVED0:1;
    uint32_t D32DIS:1;
    uint32_t ASEDIS:1;
  } b;
  uint32_t w;
} CPACR_Type;
/*  537 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
  struct
  {
    uint32_t FS0:4;
    uint32_t Domain:4;
    uint32_t RESERVED0:1;
    uint32_t LPAE:1;
    uint32_t FS1:1;
    uint32_t WnR:1;
    uint32_t ExT:1;
    uint32_t CM:1;
    uint32_t RESERVED1:18;
  } s;
  struct
  {
    uint32_t STATUS:5;
    uint32_t RESERVED0:3;
    uint32_t LPAE:1;
    uint32_t RESERVED1:1;
    uint32_t WnR:1;
    uint32_t ExT:1;
    uint32_t CM:1;
    uint32_t RESERVED2:18;
  } l;
  uint32_t w;
} DFSR_Type;
/*  590 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
  struct
  {
    uint32_t FS0:4;
    uint32_t RESERVED0:5;
    uint32_t LPAE:1;
    uint32_t FS1:1;
    uint32_t RESERVED1:1;
    uint32_t ExT:1;
    uint32_t RESERVED2:19;
  } s;
  struct
  {
    uint32_t STATUS:6;
    uint32_t RESERVED0:3;
    uint32_t LPAE:1;
    uint32_t RESERVED1:2;
    uint32_t ExT:1;
    uint32_t RESERVED2:19;
  } l;
  uint32_t w;
} IFSR_Type;
/*  630 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef union
{
  struct
  {
    uint32_t RESERVED0:6;
    uint32_t F:1;
    uint32_t I:1;
    uint32_t A:1;
    uint32_t RESERVED1:23;
  } b;
  uint32_t w;
} ISR_Type;
/*  680 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef struct
{
  volatile const uint32_t CACHE_ID;
  volatile const uint32_t CACHE_TYPE;
        uint32_t RESERVED0[0x3e];
  volatile uint32_t CONTROL;
  volatile uint32_t AUX_CNT;
        uint32_t RESERVED1[0x3e];
  volatile uint32_t EVENT_CONTROL;
  volatile uint32_t EVENT_COUNTER1_CONF;
  volatile uint32_t EVENT_COUNTER0_CONF;
        uint32_t RESERVED2[0x2];
  volatile uint32_t INTERRUPT_MASK;
  volatile const uint32_t MASKED_INT_STATUS;
  volatile const uint32_t RAW_INT_STATUS;
  volatile uint32_t INTERRUPT_CLEAR;
        uint32_t RESERVED3[0x143];
  volatile uint32_t CACHE_SYNC;
        uint32_t RESERVED4[0xf];
  volatile uint32_t INV_LINE_PA;
        uint32_t RESERVED6[2];
  volatile uint32_t INV_WAY;
        uint32_t RESERVED5[0xc];
  volatile uint32_t CLEAN_LINE_PA;
        uint32_t RESERVED7[1];
  volatile uint32_t CLEAN_LINE_INDEX_WAY;
  volatile uint32_t CLEAN_WAY;
        uint32_t RESERVED8[0xc];
  volatile uint32_t CLEAN_INV_LINE_PA;
        uint32_t RESERVED9[1];
  volatile uint32_t CLEAN_INV_LINE_INDEX_WAY;
  volatile uint32_t CLEAN_INV_WAY;
        uint32_t RESERVED10[0x40];
  volatile uint32_t DATA_LOCK_0_WAY;
  volatile uint32_t INST_LOCK_0_WAY;
  volatile uint32_t DATA_LOCK_1_WAY;
  volatile uint32_t INST_LOCK_1_WAY;
  volatile uint32_t DATA_LOCK_2_WAY;
  volatile uint32_t INST_LOCK_2_WAY;
  volatile uint32_t DATA_LOCK_3_WAY;
  volatile uint32_t INST_LOCK_3_WAY;
  volatile uint32_t DATA_LOCK_4_WAY;
  volatile uint32_t INST_LOCK_4_WAY;
  volatile uint32_t DATA_LOCK_5_WAY;
  volatile uint32_t INST_LOCK_5_WAY;
  volatile uint32_t DATA_LOCK_6_WAY;
  volatile uint32_t INST_LOCK_6_WAY;
  volatile uint32_t DATA_LOCK_7_WAY;
  volatile uint32_t INST_LOCK_7_WAY;
        uint32_t RESERVED11[0x4];
  volatile uint32_t LOCK_LINE_EN;
  volatile uint32_t UNLOCK_ALL_BY_WAY;
        uint32_t RESERVED12[0xaa];
  volatile uint32_t ADDRESS_FILTER_START;
  volatile uint32_t ADDRESS_FILTER_END;
        uint32_t RESERVED13[0xce];
  volatile uint32_t DEBUG_CONTROL;
} L2C_310_TypeDef;
/*  746 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef struct
{
  volatile uint32_t CTLR;
  volatile const uint32_t TYPER;
  volatile const uint32_t IIDR;
        uint32_t RESERVED0;
  volatile uint32_t STATUSR;
        uint32_t RESERVED1[11];
  volatile uint32_t SETSPI_NSR;
        uint32_t RESERVED2;
  volatile uint32_t CLRSPI_NSR;
        uint32_t RESERVED3;
  volatile uint32_t SETSPI_SR;
        uint32_t RESERVED4;
  volatile uint32_t CLRSPI_SR;
        uint32_t RESERVED5[9];
  volatile uint32_t IGROUPR[32];
  volatile uint32_t ISENABLER[32];
  volatile uint32_t ICENABLER[32];
  volatile uint32_t ISPENDR[32];
  volatile uint32_t ICPENDR[32];
  volatile uint32_t ISACTIVER[32];
  volatile uint32_t ICACTIVER[32];
  volatile uint32_t IPRIORITYR[255];
        uint32_t RESERVED6;
  volatile uint32_t ITARGETSR[255];
        uint32_t RESERVED7;
  volatile uint32_t ICFGR[64];
  volatile uint32_t IGRPMODR[32];
        uint32_t RESERVED8[32];
  volatile uint32_t NSACR[64];
  volatile uint32_t SGIR;
        uint32_t RESERVED9[3];
  volatile uint32_t CPENDSGIR[4];
  volatile uint32_t SPENDSGIR[4];
        uint32_t RESERVED10[5236];
  volatile uint64_t IROUTER[988];
} GICDistributor_Type;





typedef struct
{
  volatile uint32_t CTLR;
  volatile uint32_t PMR;
  volatile uint32_t BPR;
  volatile const uint32_t IAR;
  volatile uint32_t EOIR;
  volatile const uint32_t RPR;
  volatile const uint32_t HPPIR;
  volatile uint32_t ABPR;
  volatile const uint32_t AIAR;
  volatile uint32_t AEOIR;
  volatile const uint32_t AHPPIR;
  volatile uint32_t STATUSR;
        uint32_t RESERVED1[40];
  volatile uint32_t APR[4];
  volatile uint32_t NSAPR[4];
        uint32_t RESERVED2[3];
  volatile const uint32_t IIDR;
        uint32_t RESERVED3[960];
  volatile uint32_t DIR;
} GICInterface_Type;
/*  851 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
 static inline void L1C_EnableCaches(void) {
  __set_SCTLR( __get_SCTLR() | (1UL << 12U) | (1UL << 2U));
  __ISB();
}



 static inline void L1C_DisableCaches(void) {
  __set_SCTLR( __get_SCTLR() & (~(1UL << 12U)) & (~(1UL << 2U)));
  __ISB();
}



 static inline void L1C_EnableBTAC(void) {
  __set_SCTLR( __get_SCTLR() | (1UL << 11U));
  __ISB();
}



 static inline void L1C_DisableBTAC(void) {
  __set_SCTLR( __get_SCTLR() & (~(1UL << 11U)));
  __ISB();
}



 static inline void L1C_InvalidateBTAC(void) {
  __set_BPIALL(0);
  __DSB();
  __ISB();
}



 static inline void L1C_InvalidateICacheAll(void) {
  __set_ICIALLU(0);
  __DSB();
  __ISB();
}




 static inline void L1C_CleanDCacheMVA(void *va) {
  __set_DCCMVAC((uint32_t)va);
  __DMB();
}




 static inline void L1C_InvalidateDCacheMVA(void *va) {
  __set_DCIMVAC((uint32_t)va);
  __DMB();
}




 static inline void L1C_CleanInvalidateDCacheMVA(void *va) {
  __set_DCCIMVAC((uint32_t)va);
  __DMB();
}
/*  931 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
 static inline uint8_t __log2_up(uint32_t n)
{
  if (n < 2U) {
    return 0U;
  }
  uint8_t log = 0U;
  uint32_t t = n;
  while(t > 1U)
  {
    log++;
    t >>= 1U;
  }
  if (n & 1U) { log++; }
  return log;
}





 static inline void __L1C_MaintainDCacheSetWay(uint32_t level, uint32_t maint)
{
  uint32_t Dummy;
  uint32_t ccsidr;
  uint32_t num_sets;
  uint32_t num_ways;
  uint32_t shift_way;
  uint32_t log2_linesize;
   int32_t log2_num_ways;

  Dummy = level << 1U;

  __set_CSSELR(Dummy);

  ccsidr = __get_CCSIDR();
  num_sets = ((ccsidr & 0x0FFFE000U) >> 13U) + 1U;
  num_ways = ((ccsidr & 0x00001FF8U) >> 3U) + 1U;
  log2_linesize = (ccsidr & 0x00000007U) + 2U + 2U;
  log2_num_ways = __log2_up(num_ways);
  if ((log2_num_ways < 0) || (log2_num_ways > 32)) {
    return;
  }
  shift_way = 32U - (uint32_t)log2_num_ways;
  for(int32_t way = num_ways-1; way >= 0; way--)
  {
    for(int32_t set = num_sets-1; set >= 0; set--)
    {
      Dummy = (level << 1U) | (((uint32_t)set) << log2_linesize) | (((uint32_t)way) << shift_way);
      switch (maint)
      {
        case 0U: __set_DCISW(Dummy); break;
        case 1U: __set_DCCSW(Dummy); break;
        default: __set_DCCISW(Dummy); break;
      }
    }
  }
  __DMB();
}





 static inline void L1C_CleanInvalidateCache(uint32_t op) {
  uint32_t clidr;
  uint32_t cache_type;
  clidr = __get_CLIDR();
  for(uint32_t i = 0U; i<7U; i++)
  {
    cache_type = (clidr >> i*3U) & 0x7UL;
    if ((cache_type >= 2U) && (cache_type <= 4U))
    {
      __L1C_MaintainDCacheSetWay(i, op);
    }
  }
}







 static inline void __L1C_CleanInvalidateCache(uint32_t op) {
  L1C_CleanInvalidateCache(op);
}



 static inline void L1C_InvalidateDCacheAll(void) {
  L1C_CleanInvalidateCache(0);
}



 static inline void L1C_CleanDCacheAll(void) {
  L1C_CleanInvalidateCache(1);
}



 static inline void L1C_CleanInvalidateDCacheAll(void) {
  L1C_CleanInvalidateCache(2);
}





static inline void L2C_Sync(void)
{
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CACHE_SYNC = 0x0;
}




static inline int L2C_GetID (void)
{
  return ((L2C_310_TypeDef *)(0x3ffff000UL))->CACHE_ID;
}




static inline int L2C_GetType (void)
{
  return ((L2C_310_TypeDef *)(0x3ffff000UL))->CACHE_TYPE;
}



static inline void L2C_InvAllByWay (void)
{
  unsigned int assoc;

  if (((L2C_310_TypeDef *)(0x3ffff000UL))->AUX_CNT & (1U << 16U)) {
    assoc = 16U;
  } else {
    assoc = 8U;
  }

  ((L2C_310_TypeDef *)(0x3ffff000UL))->INV_WAY = (1U << assoc) - 1U;
  while(((L2C_310_TypeDef *)(0x3ffff000UL))->INV_WAY & ((1U << assoc) - 1U));

  L2C_Sync();
}



static inline void L2C_CleanInvAllByWay (void)
{
  unsigned int assoc;

  if (((L2C_310_TypeDef *)(0x3ffff000UL))->AUX_CNT & (1U << 16U)) {
    assoc = 16U;
  } else {
    assoc = 8U;
  }

  ((L2C_310_TypeDef *)(0x3ffff000UL))->CLEAN_INV_WAY = (1U << assoc) - 1U;
  while(((L2C_310_TypeDef *)(0x3ffff000UL))->CLEAN_INV_WAY & ((1U << assoc) - 1U));

  L2C_Sync();
}



static inline void L2C_Enable(void)
{
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CONTROL = 0;
  ((L2C_310_TypeDef *)(0x3ffff000UL))->INTERRUPT_CLEAR = 0x000001FFuL;
  ((L2C_310_TypeDef *)(0x3ffff000UL))->DEBUG_CONTROL = 0;
  ((L2C_310_TypeDef *)(0x3ffff000UL))->DATA_LOCK_0_WAY = 0;
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CACHE_SYNC = 0;
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CONTROL = 0x01;
  L2C_Sync();
}



static inline void L2C_Disable(void)
{
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CONTROL = 0x00;
  L2C_Sync();
}




static inline void L2C_InvPa (void *pa)
{
  ((L2C_310_TypeDef *)(0x3ffff000UL))->INV_LINE_PA = (unsigned int)pa;
  L2C_Sync();
}




static inline void L2C_CleanPa (void *pa)
{
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CLEAN_LINE_PA = (unsigned int)pa;
  L2C_Sync();
}




static inline void L2C_CleanInvPa (void *pa)
{
  ((L2C_310_TypeDef *)(0x3ffff000UL))->CLEAN_INV_LINE_PA = (unsigned int)pa;
  L2C_Sync();
}







static inline void GIC_EnableDistributor(void)
{
  ((GICDistributor_Type *) (0xe8201000UL) )->CTLR |= 1U;
}



static inline void GIC_DisableDistributor(void)
{
  ((GICDistributor_Type *) (0xe8201000UL) )->CTLR &=~1U;
}




static inline uint32_t GIC_DistributorInfo(void)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->TYPER);
}




static inline uint32_t GIC_DistributorImplementer(void)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->IIDR);
}





static inline void GIC_SetTarget(IRQn_Type IRQn, uint32_t cpu_target)
{
  uint32_t mask = ((GICDistributor_Type *) (0xe8201000UL) )->ITARGETSR[IRQn / 4U] & ~(0xFFUL << ((IRQn % 4U) * 8U));
  ((GICDistributor_Type *) (0xe8201000UL) )->ITARGETSR[IRQn / 4U] = mask | ((cpu_target & 0xFFUL) << ((IRQn % 4U) * 8U));
}





static inline uint32_t GIC_GetTarget(IRQn_Type IRQn)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->ITARGETSR[IRQn / 4U] >> ((IRQn % 4U) * 8U)) & 0xFFUL;
}



static inline void GIC_EnableInterface(void)
{
  ((GICInterface_Type *) (0xe8202000UL) )->CTLR |= 1U;
}



static inline void GIC_DisableInterface(void)
{
  ((GICInterface_Type *) (0xe8202000UL) )->CTLR &=~1U;
}




static inline IRQn_Type GIC_AcknowledgePending(void)
{
  return (IRQn_Type)(((GICInterface_Type *) (0xe8202000UL) )->IAR);
}




static inline void GIC_EndInterrupt(IRQn_Type IRQn)
{
  ((GICInterface_Type *) (0xe8202000UL) )->EOIR = IRQn;
}




static inline void GIC_EnableIRQ(IRQn_Type IRQn)
{
  ((GICDistributor_Type *) (0xe8201000UL) )->ISENABLER[IRQn / 32U] = 1U << (IRQn % 32U);
}





static inline uint32_t GIC_GetEnableIRQ(IRQn_Type IRQn)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->ISENABLER[IRQn / 32U] >> (IRQn % 32U)) & 1UL;
}




static inline void GIC_DisableIRQ(IRQn_Type IRQn)
{
  ((GICDistributor_Type *) (0xe8201000UL) )->ICENABLER[IRQn / 32U] = 1U << (IRQn % 32U);
}





static inline uint32_t GIC_GetPendingIRQ(IRQn_Type IRQn)
{
  uint32_t pend;

  if (IRQn >= 16U) {
    pend = (((GICDistributor_Type *) (0xe8201000UL) )->ISPENDR[IRQn / 32U] >> (IRQn % 32U)) & 1UL;
  } else {

    pend = (((GICDistributor_Type *) (0xe8201000UL) )->SPENDSGIR[IRQn / 4U] >> ((IRQn % 4U) * 8U)) & 0xFFUL;

    if (pend != 0U) {
      pend = 1U;
    } else {
      pend = 0U;
    }
  }

  return (pend);
}




static inline void GIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if (IRQn >= 16U) {
    ((GICDistributor_Type *) (0xe8201000UL) )->ISPENDR[IRQn / 32U] = 1U << (IRQn % 32U);
  } else {

    ((GICDistributor_Type *) (0xe8201000UL) )->SPENDSGIR[IRQn / 4U] = 1U << ((IRQn % 4U) * 8U);
  }
}




static inline void GIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if (IRQn >= 16U) {
    ((GICDistributor_Type *) (0xe8201000UL) )->ICPENDR[IRQn / 32U] = 1U << (IRQn % 32U);
  } else {

    ((GICDistributor_Type *) (0xe8201000UL) )->CPENDSGIR[IRQn / 4U] = 1U << ((IRQn % 4U) * 8U);
  }
}






static inline void GIC_SetConfiguration(IRQn_Type IRQn, uint32_t int_config)
{
  uint32_t icfgr = ((GICDistributor_Type *) (0xe8201000UL) )->ICFGR[IRQn / 16U];
  uint32_t shift = (IRQn % 16U) << 1U;

  icfgr &= (~(3U << shift));
  icfgr |= ( int_config << shift);

  ((GICDistributor_Type *) (0xe8201000UL) )->ICFGR[IRQn / 16U] = icfgr;
}






static inline uint32_t GIC_GetConfiguration(IRQn_Type IRQn)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->ICFGR[IRQn / 16U] >> ((IRQn % 16U) >> 1U));
}





static inline void GIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  uint32_t mask = ((GICDistributor_Type *) (0xe8201000UL) )->IPRIORITYR[IRQn / 4U] & ~(0xFFUL << ((IRQn % 4U) * 8U));
  ((GICDistributor_Type *) (0xe8201000UL) )->IPRIORITYR[IRQn / 4U] = mask | ((priority & 0xFFUL) << ((IRQn % 4U) * 8U));
}




static inline uint32_t GIC_GetPriority(IRQn_Type IRQn)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->IPRIORITYR[IRQn / 4U] >> ((IRQn % 4U) * 8U)) & 0xFFUL;
}




static inline void GIC_SetInterfacePriorityMask(uint32_t priority)
{
  ((GICInterface_Type *) (0xe8202000UL) )->PMR = priority & 0xFFUL;
}




static inline uint32_t GIC_GetInterfacePriorityMask(void)
{
  return ((GICInterface_Type *) (0xe8202000UL) )->PMR;
}




static inline void GIC_SetBinaryPoint(uint32_t binary_point)
{
  ((GICInterface_Type *) (0xe8202000UL) )->BPR = binary_point & 7U;
}




static inline uint32_t GIC_GetBinaryPoint(void)
{
  return ((GICInterface_Type *) (0xe8202000UL) )->BPR;
}





static inline uint32_t GIC_GetIRQStatus(IRQn_Type IRQn)
{
  uint32_t pending, active;

  active = ((((GICDistributor_Type *) (0xe8201000UL) )->ISACTIVER[IRQn / 32U]) >> (IRQn % 32U)) & 1UL;
  pending = ((((GICDistributor_Type *) (0xe8201000UL) )->ISPENDR[IRQn / 32U]) >> (IRQn % 32U)) & 1UL;

  return ((active<<1U) | pending);
}






static inline void GIC_SendSGI(IRQn_Type IRQn, uint32_t target_list, uint32_t filter_list)
{
  ((GICDistributor_Type *) (0xe8201000UL) )->SGIR = ((filter_list & 3U) << 24U) | ((target_list & 0xFFUL) << 16U) | (IRQn & 0x0FUL);
}




static inline uint32_t GIC_GetHighPendingIRQ(void)
{
  return ((GICInterface_Type *) (0xe8202000UL) )->HPPIR;
}




static inline uint32_t GIC_GetInterfaceId(void)
{
  return ((GICInterface_Type *) (0xe8202000UL) )->IIDR;
}





static inline void GIC_SetGroup(IRQn_Type IRQn, uint32_t group)
{
  uint32_t igroupr = ((GICDistributor_Type *) (0xe8201000UL) )->IGROUPR[IRQn / 32U];
  uint32_t shift = (IRQn % 32U);

  igroupr &= (~(1U << shift));
  igroupr |= ( (group & 1U) << shift);

  ((GICDistributor_Type *) (0xe8201000UL) )->IGROUPR[IRQn / 32U] = igroupr;
}






static inline uint32_t GIC_GetGroup(IRQn_Type IRQn)
{
  return (((GICDistributor_Type *) (0xe8201000UL) )->IGROUPR[IRQn / 32U] >> (IRQn % 32U)) & 1UL;
}




static inline void GIC_DistInit(void)
{
  uint32_t i;
  uint32_t num_irq = 0U;
  uint32_t priority_field;





  GIC_DisableDistributor();

  num_irq = 32U * ((GIC_DistributorInfo() & 0x1FU) + 1U);




  GIC_SetPriority((IRQn_Type)0U, 0xFFU);
  priority_field = GIC_GetPriority((IRQn_Type)0U);

  for (i = 32U; i < num_irq; i++)
  {

      GIC_DisableIRQ((IRQn_Type)i);

      GIC_SetConfiguration((IRQn_Type)i, 0U);

      GIC_SetPriority((IRQn_Type)i, priority_field/2U);

      GIC_SetTarget((IRQn_Type)i, 1U);
  }

  GIC_EnableDistributor();
}



static inline void GIC_CPUInterfaceInit(void)
{
  uint32_t i;
  uint32_t priority_field;





  GIC_DisableInterface();




  GIC_SetPriority((IRQn_Type)0U, 0xFFU);
  priority_field = GIC_GetPriority((IRQn_Type)0U);


  for (i = 0U; i < 32U; i++)
  {
    if(i > 15U) {

      GIC_SetConfiguration((IRQn_Type)i, 0U);
    }

    GIC_DisableIRQ((IRQn_Type)i);

    GIC_SetPriority((IRQn_Type)i, priority_field/2U);
  }

  GIC_EnableInterface();

  GIC_SetBinaryPoint(0U);

  GIC_SetInterfacePriorityMask(0xFFU);
}



static inline void GIC_Enable(void)
{
  GIC_DistInit();
  GIC_CPUInterfaceInit();
}
/*  1779 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
typedef enum
{
   SECTION,
   PAGE_4k,
   PAGE_64k,
} mmu_region_size_Type;


typedef enum
{
   NORMAL,
   DEVICE,
   SHARED_DEVICE,
   NON_SHARED_DEVICE,
   STRONGLY_ORDERED
} mmu_memory_Type;


typedef enum
{
   NON_CACHEABLE,
   WB_WA,
   WT,
   WB_NO_WA,
} mmu_cacheability_Type;


typedef enum
{
   ECC_DISABLED,
   ECC_ENABLED,
} mmu_ecc_check_Type;


typedef enum
{
   EXECUTE,
   NON_EXECUTE,
} mmu_execute_Type;


typedef enum
{
   GLOBAL,
   NON_GLOBAL,
} mmu_global_Type;


typedef enum
{
   NON_SHARED,
   SHARED,
} mmu_shared_Type;


typedef enum
{
   SECURE,
   NON_SECURE,
} mmu_secure_Type;


typedef enum
{
   NO_ACCESS,
   RW,
   READ,
} mmu_access_Type;


typedef struct RegionStruct {
    mmu_region_size_Type rg_t;
    mmu_memory_Type mem_t;
    uint8_t domain;
    mmu_cacheability_Type inner_norm_t;
    mmu_cacheability_Type outer_norm_t;
    mmu_ecc_check_Type e_t;
    mmu_execute_Type xn_t;
    mmu_global_Type g_t;
    mmu_secure_Type sec_t;
    mmu_access_Type priv_t;
    mmu_access_Type user_t;
    mmu_shared_Type sh_t;

} mmu_region_attributes_Type;
/*  2021 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_XNSection(uint32_t *descriptor_l1, mmu_execute_Type xn)
{
  *descriptor_l1 &= (0xFFFFFFEF);
  *descriptor_l1 |= ((xn & 0x1) << (4));
  return 0;
}
/*  2035 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_DomainSection(uint32_t *descriptor_l1, uint8_t domain)
{
  *descriptor_l1 &= (0xFFFFFE1F);
  *descriptor_l1 |= ((domain & 0xF) << (5));
  return 0;
}
/*  2049 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_PSection(uint32_t *descriptor_l1, mmu_ecc_check_Type p_bit)
{
  *descriptor_l1 &= (0xFFFFFDFF);
  *descriptor_l1 |= ((p_bit & 0x1) << (9));
  return 0;
}
/*  2065 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_APSection(uint32_t *descriptor_l1, mmu_access_Type user, mmu_access_Type priv, uint32_t afe)
{
  uint32_t ap = 0;

  if (afe == 0) {
    if ((priv == NO_ACCESS) && (user == NO_ACCESS)) { ap = 0x0; }
    else if ((priv == RW) && (user == NO_ACCESS)) { ap = 0x1; }
    else if ((priv == RW) && (user == READ)) { ap = 0x2; }
    else if ((priv == RW) && (user == RW)) { ap = 0x3; }
    else if ((priv == READ) && (user == NO_ACCESS)) { ap = 0x5; }
    else if ((priv == READ) && (user == READ)) { ap = 0x7; }
  }

  else {
    if ((priv == RW) && (user == NO_ACCESS)) { ap = 0x1; }
    else if ((priv == RW) && (user == RW)) { ap = 0x3; }
    else if ((priv == READ) && (user == NO_ACCESS)) { ap = 0x5; }
    else if ((priv == READ) && (user == READ)) { ap = 0x7; }
  }

  *descriptor_l1 &= (0xFFFF73FF);
  *descriptor_l1 |= (ap & 0x3) << (10);
  *descriptor_l1 |= ((ap & 0x4)>>2) << (15);

  return 0;
}
/*  2099 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_SharedSection(uint32_t *descriptor_l1, mmu_shared_Type s_bit)
{
  *descriptor_l1 &= (0xFFFEFFFF);
  *descriptor_l1 |= ((s_bit & 0x1) << (16));
  return 0;
}
/*  2113 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_GlobalSection(uint32_t *descriptor_l1, mmu_global_Type g_bit)
{
  *descriptor_l1 &= (0xFFFDFFFF);
  *descriptor_l1 |= ((g_bit & 0x1) << (17));
  return 0;
}
/*  2127 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_SecureSection(uint32_t *descriptor_l1, mmu_secure_Type s_bit)
{
  *descriptor_l1 &= (0xFFF7FFFF);
  *descriptor_l1 |= ((s_bit & 0x1) << (19));
  return 0;
}
/*  2143 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_XNPage(uint32_t *descriptor_l2, mmu_execute_Type xn, mmu_region_size_Type page)
{
  if (page == PAGE_4k)
  {
      *descriptor_l2 &= (0xFFFFFFFE);
      *descriptor_l2 |= ((xn & 0x1) << (0));
  }
  else
  {
      *descriptor_l2 &= (0xFFFF7FFF);
      *descriptor_l2 |= ((xn & 0x1) << (15));
  }
  return 0;
}
/*  2165 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_DomainPage(uint32_t *descriptor_l1, uint8_t domain)
{
  *descriptor_l1 &= (0xFFFFFE1F);
  *descriptor_l1 |= ((domain & 0xf) << (5));
  return 0;
}
/*  2179 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_PPage(uint32_t *descriptor_l1, mmu_ecc_check_Type p_bit)
{
  *descriptor_l1 &= (0xFFFFFDFF);
  *descriptor_l1 |= ((p_bit & 0x1) << (9));
  return 0;
}
/*  2195 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_APPage(uint32_t *descriptor_l2, mmu_access_Type user, mmu_access_Type priv, uint32_t afe)
{
  uint32_t ap = 0;

  if (afe == 0) {
    if ((priv == NO_ACCESS) && (user == NO_ACCESS)) { ap = 0x0; }
    else if ((priv == RW) && (user == NO_ACCESS)) { ap = 0x1; }
    else if ((priv == RW) && (user == READ)) { ap = 0x2; }
    else if ((priv == RW) && (user == RW)) { ap = 0x3; }
    else if ((priv == READ) && (user == NO_ACCESS)) { ap = 0x5; }
    else if ((priv == READ) && (user == READ)) { ap = 0x6; }
  }

  else {
    if ((priv == RW) && (user == NO_ACCESS)) { ap = 0x1; }
    else if ((priv == RW) && (user == RW)) { ap = 0x3; }
    else if ((priv == READ) && (user == NO_ACCESS)) { ap = 0x5; }
    else if ((priv == READ) && (user == READ)) { ap = 0x7; }
  }

  *descriptor_l2 &= (0xFFFFFDCF);
  *descriptor_l2 |= (ap & 0x3) << (4);
  *descriptor_l2 |= ((ap & 0x4)>>2) << (9);

  return 0;
}
/*  2229 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_SharedPage(uint32_t *descriptor_l2, mmu_shared_Type s_bit)
{
  *descriptor_l2 &= (0xFFFFFBFF);
  *descriptor_l2 |= ((s_bit & 0x1) << (10));
  return 0;
}
/*  2243 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_GlobalPage(uint32_t *descriptor_l2, mmu_global_Type g_bit)
{
  *descriptor_l2 &= (0xFFFFF7FF);
  *descriptor_l2 |= ((g_bit & 0x1) << (11));
  return 0;
}
/*  2257 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_SecurePage(uint32_t *descriptor_l1, mmu_secure_Type s_bit)
{
  *descriptor_l1 &= (0xFFFFFFF7);
  *descriptor_l1 |= ((s_bit & 0x1) << (3));
  return 0;
}
/*  2273 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_MemorySection(uint32_t *descriptor_l1, mmu_memory_Type mem, mmu_cacheability_Type outer, mmu_cacheability_Type inner)
{
  *descriptor_l1 &= (0xFFFF8FF3);

  if (STRONGLY_ORDERED == mem)
  {
    return 0;
  }
  else if (SHARED_DEVICE == mem)
  {
    *descriptor_l1 |= (1 << (2));
  }
  else if (NON_SHARED_DEVICE == mem)
  {
    *descriptor_l1 |= (1 << (13));
  }
  else if (NORMAL == mem)
  {
   *descriptor_l1 |= 1 << (14);
   switch(inner)
   {
      case NON_CACHEABLE:
        break;
      case WB_WA:
        *descriptor_l1 |= (1 << (2));
        break;
      case WT:
        *descriptor_l1 |= 1 << (3);
        break;
      case WB_NO_WA:
        *descriptor_l1 |= (1 << (2)) | (1 << (3));
        break;
    }
    switch(outer)
    {
      case NON_CACHEABLE:
        break;
      case WB_WA:
        *descriptor_l1 |= (1 << (12));
        break;
      case WT:
        *descriptor_l1 |= 1 << (13);
        break;
      case WB_NO_WA:
        *descriptor_l1 |= (1 << (12)) | (1 << (12));
        break;
    }
  }
  return 0;
}
/*  2334 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_MemoryPage(uint32_t *descriptor_l2, mmu_memory_Type mem, mmu_cacheability_Type outer, mmu_cacheability_Type inner, mmu_region_size_Type page)
{
  *descriptor_l2 &= (0xFFFFFE33);

  if (page == PAGE_64k)
  {

    MMU_MemorySection(descriptor_l2, mem, outer, inner);
  }
  else
  {
    if (STRONGLY_ORDERED == mem)
    {
      return 0;
    }
    else if (SHARED_DEVICE == mem)
    {
      *descriptor_l2 |= (1 << (2));
    }
    else if (NON_SHARED_DEVICE == mem)
    {
      *descriptor_l2 |= (1 << (7));
    }
    else if (NORMAL == mem)
    {
      *descriptor_l2 |= 1 << (8);
      switch(inner)
      {
        case NON_CACHEABLE:
          break;
        case WB_WA:
          *descriptor_l2 |= (1 << (2));
          break;
        case WT:
          *descriptor_l2 |= 1 << (3);
          break;
        case WB_NO_WA:
          *descriptor_l2 |= (1 << (2)) | (1 << (3));
          break;
      }
      switch(outer)
      {
        case NON_CACHEABLE:
          break;
        case WB_WA:
          *descriptor_l2 |= (1 << (6));
          break;
        case WT:
          *descriptor_l2 |= 1 << (7);
          break;
        case WB_NO_WA:
          *descriptor_l2 |= (1 << (6)) | (1 << (6));
          break;
      }
    }
  }

  return 0;
}
/*  2401 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_GetSectionDescriptor(uint32_t *descriptor, mmu_region_attributes_Type reg)
{
  *descriptor = 0;

  MMU_MemorySection(descriptor, reg.mem_t, reg.outer_norm_t, reg.inner_norm_t);
  MMU_XNSection(descriptor,reg.xn_t);
  MMU_DomainSection(descriptor, reg.domain);
  MMU_PSection(descriptor, reg.e_t);
  MMU_APSection(descriptor, reg.priv_t, reg.user_t, 1);
  MMU_SharedSection(descriptor,reg.sh_t);
  MMU_GlobalSection(descriptor,reg.g_t);
  MMU_SecureSection(descriptor,reg.sec_t);
  *descriptor &= (0xFFFFFFFC);
  *descriptor |= (0x2);

  return 0;
}
/*  2428 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline int MMU_GetPageDescriptor(uint32_t *descriptor, uint32_t *descriptor2, mmu_region_attributes_Type reg)
{
  *descriptor = 0;
  *descriptor2 = 0;

  switch (reg.rg_t)
  {
    case PAGE_4k:
      MMU_MemoryPage(descriptor2, reg.mem_t, reg.outer_norm_t, reg.inner_norm_t, PAGE_4k);
      MMU_XNPage(descriptor2, reg.xn_t, PAGE_4k);
      MMU_DomainPage(descriptor, reg.domain);
      MMU_PPage(descriptor, reg.e_t);
      MMU_APPage(descriptor2, reg.priv_t, reg.user_t, 1);
      MMU_SharedPage(descriptor2,reg.sh_t);
      MMU_GlobalPage(descriptor2,reg.g_t);
      MMU_SecurePage(descriptor,reg.sec_t);
      *descriptor &= (0xFFFFFFFC);
      *descriptor |= (0x1);
      *descriptor2 &= (0xFFFFFFFD);
      *descriptor2 |= (0x2);
      break;

    case PAGE_64k:
      MMU_MemoryPage(descriptor2, reg.mem_t, reg.outer_norm_t, reg.inner_norm_t, PAGE_64k);
      MMU_XNPage(descriptor2, reg.xn_t, PAGE_64k);
      MMU_DomainPage(descriptor, reg.domain);
      MMU_PPage(descriptor, reg.e_t);
      MMU_APPage(descriptor2, reg.priv_t, reg.user_t, 1);
      MMU_SharedPage(descriptor2,reg.sh_t);
      MMU_GlobalPage(descriptor2,reg.g_t);
      MMU_SecurePage(descriptor,reg.sec_t);
      *descriptor &= (0xFFFFFFFC);
      *descriptor |= (0x1);
      *descriptor2 &= (0xFFFFFFFC);
      *descriptor2 |= (0x1);
      break;

    case SECTION:

      break;
  }

  return 0;
}
/*  2481 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline void MMU_TTSection(uint32_t *ttb, uint32_t base_address, uint32_t count, uint32_t descriptor_l1)
{
  uint32_t offset;
  uint32_t entry;
  uint32_t i;

  offset = base_address >> 20;
  entry = (base_address & 0xFFF00000) | descriptor_l1;


  ttb = ttb + offset;

  for (i = 0; i < count; i++ )
  {

    *ttb++ = entry;
    entry += (0x00100000);
  }
}
/*  2511 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline void MMU_TTPage4k(uint32_t *ttb, uint32_t base_address, uint32_t count, uint32_t descriptor_l1, uint32_t *ttb_l2, uint32_t descriptor_l2 )
{

  uint32_t offset, offset2;
  uint32_t entry, entry2;
  uint32_t i;

  offset = base_address >> 20;
  entry = ((int)ttb_l2 & 0xFFFFFC00) | descriptor_l1;


  ttb += offset;

  *ttb = entry;

  offset2 = (base_address & 0xff000) >> 12;
  ttb_l2 += offset2;
  entry2 = (base_address & 0xFFFFF000) | descriptor_l2;
  for (i = 0; i < count; i++ )
  {

    *ttb_l2++ = entry2;
    entry2 += (0x00001000);
  }
}
/*  2547 "../mbed/cmsis/TARGET_CORTEX_A/core_ca.h" */
static inline void MMU_TTPage64k(uint32_t *ttb, uint32_t base_address, uint32_t count, uint32_t descriptor_l1, uint32_t *ttb_l2, uint32_t descriptor_l2 )
{
  uint32_t offset, offset2;
  uint32_t entry, entry2;
  uint32_t i,j;


  offset = base_address >> 20;
  entry = ((int)ttb_l2 & 0xFFFFFC00) | descriptor_l1;


  ttb += offset;

  *ttb = entry;

  offset2 = (base_address & 0xff000) >> 12;
  ttb_l2 += offset2;
  entry2 = (base_address & 0xFFFF0000) | descriptor_l2;
  for (i = 0; i < count; i++ )
  {

    for (j = 0; j < 16; j++)
    {

      *ttb_l2++ = entry2;
    }
    entry2 += (0x00010000);
  }
}



static inline void MMU_Enable(void)
{



  __set_SCTLR( (__get_SCTLR() & ~(1 << 28) & ~(1 << 1)) | 1 | (1 << 29));
  __ISB();
}



static inline void MMU_Disable(void)
{

  __set_SCTLR( __get_SCTLR() & ~1);
  __ISB();
}




static inline void MMU_InvalidateTLB(void)
{
  __set_TLBIALL(0);
  __DSB();
  __ISB();
}
/*  652 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/common/nvic_wrapper.h" 1 */
/*  60 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/common/nvic_wrapper.h" */
void NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
uint32_t NVIC_GetPriorityGrouping(void);
void NVIC_EnableIRQ(IRQn_Type IRQn);
void NVIC_DisableIRQ(IRQn_Type IRQn);
uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn);
void NVIC_SetPendingIRQ(IRQn_Type IRQn);
void NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t NVIC_GetActive(IRQn_Type IRQn);
void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);
uint32_t NVIC_GetPriority(IRQn_Type IRQn);
uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority);
void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
void NVIC_SystemReset(void);

uint32_t SysTick_Config(uint32_t ticks);

uint32_t ITM_SendChar (uint32_t ch);
int32_t ITM_ReceiveChar (void);
int32_t ITM_CheckChar (void);
/*  653 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/system_RZ_A1H.h" 1 */
/*  37 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/system_RZ_A1H.h" */
extern uint32_t SystemCoreClock;

typedef void(*IRQHandler)();






extern void SystemInit (void);







extern void SystemCoreClockUpdate (void);






extern uint32_t InterruptHandlerRegister(IRQn_Type, IRQHandler);






extern uint32_t InterruptHandlerUnregister(IRQn_Type);






extern void MMU_CreateTranslationTable(void);
/*  654 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 1 */
/*  34 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/iodefine_typedef.h" 1 */
/*  54 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/iodefine_typedef.h" */
typedef enum iodefine_byte_select_t
{
    R_IO_L = 0, R_IO_H = 1,
    R_IO_LL= 0, R_IO_LH = 1, R_IO_HL = 2, R_IO_HH = 3,
    L = 0, H_BYTE = 1,
    LL= 0, LH = 1, HL = 2, HH = 3
} iodefine_byte_select_t;
/*  73 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/iodefine_typedef.h" */
typedef union iodefine_reg32_t
{
    volatile uint32_t UINT32;
    volatile uint16_t UINT16[2];
    volatile uint8_t UINT8[4];
} iodefine_reg32_t;
/*  90 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/iodefine_typedef.h" */
typedef union iodefine_reg32_16_t
{
    volatile uint32_t UINT32;
    volatile uint16_t UINT16[2];
} iodefine_reg32_16_t;
/*  106 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/iodefine_typedef.h" */
typedef union iodefine_reg16_8_t
{
    volatile uint16_t UINT16;
    volatile uint8_t UINT8[2];
} iodefine_reg16_8_t;
/*  35 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */

/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/adc_iodefine.h" 1 */
/*  68 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/adc_iodefine.h" */
typedef struct st_adc
{

    volatile uint16_t ADDRA;
    volatile uint16_t ADDRB;
    volatile uint16_t ADDRC;
    volatile uint16_t ADDRD;
    volatile uint16_t ADDRE;
    volatile uint16_t ADDRF;
    volatile uint16_t ADDRG;
    volatile uint16_t ADDRH;
    volatile uint8_t dummy32[16];
    volatile uint16_t ADCMPHA;
    volatile uint16_t ADCMPLA;
    volatile uint16_t ADCMPHB;
    volatile uint16_t ADCMPLB;
    volatile uint16_t ADCMPHC;
    volatile uint16_t ADCMPLC;
    volatile uint16_t ADCMPHD;
    volatile uint16_t ADCMPLD;
    volatile uint16_t ADCMPHE;
    volatile uint16_t ADCMPLE;
    volatile uint16_t ADCMPHF;
    volatile uint16_t ADCMPLF;
    volatile uint16_t ADCMPHG;
    volatile uint16_t ADCMPLG;
    volatile uint16_t ADCMPHH;
    volatile uint16_t ADCMPLH;
    volatile uint8_t dummy33[32];
    volatile uint16_t ADCSR;
    volatile uint16_t ADCMPER;
    volatile uint16_t ADCMPSR;
} r_io_adc_t;
/*  37 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/bsc_iodefine.h" 1 */
/*  70 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/bsc_iodefine.h" */
typedef struct st_bsc
{

    volatile uint32_t CMNCR;


    volatile uint32_t CS0BCR;
    volatile uint32_t CS1BCR;
    volatile uint32_t CS2BCR;
    volatile uint32_t CS3BCR;
    volatile uint32_t CS4BCR;
    volatile uint32_t CS5BCR;
    volatile uint8_t dummy4[12];


    volatile uint32_t CS0WCR;
    volatile uint32_t CS1WCR;
    volatile uint32_t CS2WCR;
    volatile uint32_t CS3WCR;
    volatile uint32_t CS4WCR;
    volatile uint32_t CS5WCR;
    volatile uint8_t dummy5[12];
    volatile uint32_t SDCR;
    volatile uint32_t RTCSR;
    volatile uint32_t RTCNT;
    volatile uint32_t RTCOR;
    volatile uint8_t dummy6[4];


    volatile uint32_t TOSCOR0;
    volatile uint32_t TOSCOR1;
    volatile uint32_t TOSCOR2;
    volatile uint32_t TOSCOR3;
    volatile uint32_t TOSCOR4;
    volatile uint32_t TOSCOR5;
    volatile uint8_t dummy7[8];
    volatile uint32_t TOSTR;
    volatile uint32_t TOENR;
} r_io_bsc_t;
/*  38 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ceu_iodefine.h" 1 */
/*  119 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ceu_iodefine.h" */
typedef struct st_ceu
{



    volatile uint32_t CAPSR;
    volatile uint32_t CAPCR;
    volatile uint32_t CAMCR;
    volatile uint32_t CMCYR;
    volatile uint32_t CAMOR_A;
    volatile uint32_t CAPWR_A;
    volatile uint32_t CAIFR;
    volatile uint8_t dummy305[12];
    volatile uint32_t CRCNTR;
    volatile uint32_t CRCMPR;
    volatile uint32_t CFLCR_A;
    volatile uint32_t CFSZR_A;
    volatile uint32_t CDWDR_A;
    volatile uint32_t CDAYR_A;
    volatile uint32_t CDACR_A;
    volatile uint32_t CDBYR_A;
    volatile uint32_t CDBCR_A;
    volatile uint32_t CBDSR_A;
    volatile uint8_t dummy306[12];
    volatile uint32_t CFWCR;
    volatile uint32_t CLFCR_A;
    volatile uint32_t CDOCR_A;
    volatile uint8_t dummy307[8];
    volatile uint32_t CEIER;
    volatile uint32_t CETCR;
    volatile uint8_t dummy308[4];
    volatile uint32_t CSTSR;
    volatile uint8_t dummy309[4];
    volatile uint32_t CDSSR;
    volatile uint8_t dummy310[8];
    volatile uint32_t CDAYR2_A;
    volatile uint32_t CDACR2_A;
    volatile uint32_t CDBYR2_A;
    volatile uint32_t CDBCR2_A;


    volatile uint8_t dummy3110[3936];


    volatile uint8_t dummy3111[4];
    volatile uint8_t dummy3112[4];
    volatile uint8_t dummy3113[4];
    volatile uint8_t dummy3114[4];
    volatile uint32_t CAMOR_B;
    volatile uint32_t CAPWR_B;
    volatile uint8_t dummy3120[4];
    volatile uint8_t dummy3121[12];
    volatile uint8_t dummy3122[4];
    volatile uint8_t dummy3123[4];
    volatile uint32_t CFLCR_B;
    volatile uint32_t CFSZR_B;
    volatile uint32_t CDWDR_B;
    volatile uint32_t CDAYR_B;
    volatile uint32_t CDACR_B;
    volatile uint32_t CDBYR_B;
    volatile uint32_t CDBCR_B;
    volatile uint32_t CBDSR_B;
    volatile uint8_t dummy3130[12];
    volatile uint8_t dummy3131[4];
    volatile uint32_t CLFCR_B;
    volatile uint32_t CDOCR_B;
    volatile uint8_t dummy3140[8];
    volatile uint8_t dummy3141[4];
    volatile uint8_t dummy3142[4];
    volatile uint8_t dummy3143[4];
    volatile uint8_t dummy3144[4];
    volatile uint8_t dummy3145[4];
    volatile uint8_t dummy3146[4];
    volatile uint8_t dummy3147[8];
    volatile uint32_t CDAYR2_B;
    volatile uint32_t CDACR2_B;
    volatile uint32_t CDBYR2_B;
    volatile uint32_t CDBCR2_B;


    volatile uint8_t dummy3150[3936];


    volatile uint8_t dummy3151[4];
    volatile uint8_t dummy3152[4];
    volatile uint8_t dummy3153[4];
    volatile uint8_t dummy3154[4];
    volatile uint32_t CAMOR_M;
    volatile uint32_t CAPWR_M;
    volatile uint8_t dummy3160[4];
    volatile uint8_t dummy3161[12];
    volatile uint8_t dummy3162[4];
    volatile uint8_t dummy3163[4];
    volatile uint32_t CFLCR_M;
    volatile uint32_t CFSZR_M;
    volatile uint32_t CDWDR_M;
    volatile uint32_t CDAYR_M;
    volatile uint32_t CDACR_M;
    volatile uint32_t CDBYR_M;
    volatile uint32_t CDBCR_M;
    volatile uint32_t CBDSR_M;
    volatile uint8_t dummy3170[12];
    volatile uint8_t dummy3171[4];
    volatile uint32_t CLFCR_M;
    volatile uint32_t CDOCR_M;
    volatile uint8_t dummy3180[8];
    volatile uint8_t dummy3181[4];
    volatile uint8_t dummy3182[4];
    volatile uint8_t dummy3183[4];
    volatile uint8_t dummy3184[4];
    volatile uint8_t dummy3185[4];
    volatile uint8_t dummy3186[4];
    volatile uint8_t dummy3187[8];
    volatile uint32_t CDAYR2_M;
    volatile uint32_t CDACR2_M;
    volatile uint32_t CDBYR2_M;
    volatile uint32_t CDBCR2_M;


} r_io_ceu_t;


typedef struct st_ceu_n
{

    volatile uint32_t not_common1;
    volatile uint32_t not_common2;
    volatile uint32_t not_common3;
    volatile uint32_t not_common4;
    volatile uint32_t CAMOR;
    volatile uint32_t CAPWR;
    volatile uint32_t not_common5;
    volatile uint8_t dummy322[12];
    volatile uint32_t not_common6;
    volatile uint32_t not_common7;
    volatile uint32_t CFLCR;
    volatile uint32_t CFSZR;
    volatile uint32_t CDWDR;
    volatile uint32_t CDAYR;
    volatile uint32_t CDACR;
    volatile uint32_t CDBYR;
    volatile uint32_t CDBCR;
    volatile uint32_t CBDSR;
    volatile uint8_t dummy323[12];
    volatile uint32_t not_common8;
    volatile uint32_t CLFCR;
    volatile uint32_t CDOCR;
    volatile uint8_t dummy324[8];
    volatile uint32_t not_common9;
    volatile uint32_t not_common10;
    volatile uint8_t dummy325[4];
    volatile uint32_t not_common11;
    volatile uint8_t dummy326[4];
    volatile uint32_t not_common12;
    volatile uint8_t dummy327[8];
    volatile uint32_t CDAYR2;
    volatile uint32_t CDACR2;
    volatile uint32_t CDBYR2;
    volatile uint32_t CDBCR2;
} r_io_ceu_n_t;
/*  39 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/cpg_iodefine.h" 1 */
/*  121 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/cpg_iodefine.h" */
typedef struct st_cpg
{

    volatile uint16_t FRQCR;
    volatile uint8_t dummy319[2];
    volatile uint16_t FRQCR2;
    volatile uint8_t dummy320[2];
    volatile uint8_t CPUSTS;
    volatile uint8_t dummy321[7];
    volatile uint8_t STBCR1;
    volatile uint8_t dummy322[3];
    volatile uint8_t STBCR2;
    volatile uint8_t dummy323[11];
    volatile uint8_t STBREQ1;
    volatile uint8_t dummy324[3];
    volatile uint8_t STBREQ2;
    volatile uint8_t dummy325[11];
    volatile uint8_t STBACK1;
    volatile uint8_t dummy326[3];
    volatile uint8_t STBACK2;
    volatile uint8_t dummy327[955];


    volatile uint8_t SYSCR1;
    volatile uint8_t dummy328[3];




    volatile uint8_t SYSCR2;
    volatile uint8_t dummy329[3];




    volatile uint8_t SYSCR3;
    volatile uint8_t dummy3300[3];


    volatile uint8_t dummy3301[20];


    volatile uint8_t STBCR3;
    volatile uint8_t dummy331[3];




    volatile uint8_t STBCR4;
    volatile uint8_t dummy332[3];




    volatile uint8_t STBCR5;
    volatile uint8_t dummy333[3];




    volatile uint8_t STBCR6;
    volatile uint8_t dummy334[3];




    volatile uint8_t STBCR7;
    volatile uint8_t dummy335[3];




    volatile uint8_t STBCR8;
    volatile uint8_t dummy336[3];




    volatile uint8_t STBCR9;
    volatile uint8_t dummy337[3];




    volatile uint8_t STBCR10;
    volatile uint8_t dummy338[3];




    volatile uint8_t STBCR11;
    volatile uint8_t dummy339[3];




    volatile uint8_t STBCR12;
    volatile uint8_t dummy3400[3];


    volatile uint8_t dummy3401[24];


    volatile uint8_t SWRSTCR1;
    volatile uint8_t dummy341[3];




    volatile uint8_t SWRSTCR2;
    volatile uint8_t dummy342[3];




    volatile uint8_t SWRSTCR3;
    volatile uint8_t dummy3430[3];


    volatile uint8_t dummy3431[4];
    volatile uint8_t STBCR13;
    volatile uint8_t dummy344[70543];
    volatile uint8_t RRAMKP;
    volatile uint8_t dummy345[1];
    volatile uint8_t DSCTR;
    volatile uint8_t dummy346[1];
    volatile uint16_t DSSSR;
    volatile uint16_t DSESR;
    volatile uint16_t DSFR;
    volatile uint8_t dummy347[6];
    volatile uint8_t XTALCTR;
} r_io_cpg_t;


typedef struct st_cpg_from_syscr1
{

    volatile uint8_t SYSCR1;
    volatile uint8_t dummy1[3];
} r_io_cpg_from_syscr1_t;


typedef struct st_cpg_from_stbcr3
{

    volatile uint8_t STBCR3;
    volatile uint8_t dummy1[3];
} r_io_cpg_from_stbcr3_t;


typedef struct st_cpg_from_swrstcr1
{

    volatile uint8_t SWRSTCR1;
    volatile uint8_t dummy1[3];
} r_io_cpg_from_swrstcr1_t;
/*  40 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/disc_iodefine.h" 1 */
/*  79 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/disc_iodefine.h" */
typedef struct st_disc
{

    volatile uint32_t DOCMCR;
    volatile uint32_t DOCMSTR;
    volatile uint32_t DOCMCLSTR;
    volatile uint32_t DOCMIENR;
    volatile uint8_t dummy1[4];
    volatile uint32_t DOCMPMR;
    volatile uint32_t DOCMECRCR;
    volatile uint32_t DOCMCCRCR;
    volatile uint32_t DOCMSPXR;
    volatile uint32_t DOCMSPYR;
    volatile uint32_t DOCMSZXR;
    volatile uint32_t DOCMSZYR;
    volatile uint32_t DOCMCRCIR;
} r_io_disc_t;
/*  41 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/dmac_iodefine.h" 1 */
/*  377 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/dmac_iodefine.h" */
typedef struct st_dmars_mm
{

    volatile uint32_t DMARS;
} r_io_dmars_mm_t;


typedef struct st_dmac
{



    volatile uint32_t N0SA_0;
    volatile uint32_t N0DA_0;
    volatile uint32_t N0TB_0;
    volatile uint32_t N1SA_0;
    volatile uint32_t N1DA_0;
    volatile uint32_t N1TB_0;
    volatile uint32_t CRSA_0;
    volatile uint32_t CRDA_0;
    volatile uint32_t CRTB_0;
    volatile uint32_t CHSTAT_0;
    volatile uint32_t CHCTRL_0;
    volatile uint32_t CHCFG_0;
    volatile uint32_t CHITVL_0;
    volatile uint32_t CHEXT_0;
    volatile uint32_t NXLA_0;
    volatile uint32_t CRLA_0;




    volatile uint32_t N0SA_1;
    volatile uint32_t N0DA_1;
    volatile uint32_t N0TB_1;
    volatile uint32_t N1SA_1;
    volatile uint32_t N1DA_1;
    volatile uint32_t N1TB_1;
    volatile uint32_t CRSA_1;
    volatile uint32_t CRDA_1;
    volatile uint32_t CRTB_1;
    volatile uint32_t CHSTAT_1;
    volatile uint32_t CHCTRL_1;
    volatile uint32_t CHCFG_1;
    volatile uint32_t CHITVL_1;
    volatile uint32_t CHEXT_1;
    volatile uint32_t NXLA_1;
    volatile uint32_t CRLA_1;




    volatile uint32_t N0SA_2;
    volatile uint32_t N0DA_2;
    volatile uint32_t N0TB_2;
    volatile uint32_t N1SA_2;
    volatile uint32_t N1DA_2;
    volatile uint32_t N1TB_2;
    volatile uint32_t CRSA_2;
    volatile uint32_t CRDA_2;
    volatile uint32_t CRTB_2;
    volatile uint32_t CHSTAT_2;
    volatile uint32_t CHCTRL_2;
    volatile uint32_t CHCFG_2;
    volatile uint32_t CHITVL_2;
    volatile uint32_t CHEXT_2;
    volatile uint32_t NXLA_2;
    volatile uint32_t CRLA_2;




    volatile uint32_t N0SA_3;
    volatile uint32_t N0DA_3;
    volatile uint32_t N0TB_3;
    volatile uint32_t N1SA_3;
    volatile uint32_t N1DA_3;
    volatile uint32_t N1TB_3;
    volatile uint32_t CRSA_3;
    volatile uint32_t CRDA_3;
    volatile uint32_t CRTB_3;
    volatile uint32_t CHSTAT_3;
    volatile uint32_t CHCTRL_3;
    volatile uint32_t CHCFG_3;
    volatile uint32_t CHITVL_3;
    volatile uint32_t CHEXT_3;
    volatile uint32_t NXLA_3;
    volatile uint32_t CRLA_3;




    volatile uint32_t N0SA_4;
    volatile uint32_t N0DA_4;
    volatile uint32_t N0TB_4;
    volatile uint32_t N1SA_4;
    volatile uint32_t N1DA_4;
    volatile uint32_t N1TB_4;
    volatile uint32_t CRSA_4;
    volatile uint32_t CRDA_4;
    volatile uint32_t CRTB_4;
    volatile uint32_t CHSTAT_4;
    volatile uint32_t CHCTRL_4;
    volatile uint32_t CHCFG_4;
    volatile uint32_t CHITVL_4;
    volatile uint32_t CHEXT_4;
    volatile uint32_t NXLA_4;
    volatile uint32_t CRLA_4;




    volatile uint32_t N0SA_5;
    volatile uint32_t N0DA_5;
    volatile uint32_t N0TB_5;
    volatile uint32_t N1SA_5;
    volatile uint32_t N1DA_5;
    volatile uint32_t N1TB_5;
    volatile uint32_t CRSA_5;
    volatile uint32_t CRDA_5;
    volatile uint32_t CRTB_5;
    volatile uint32_t CHSTAT_5;
    volatile uint32_t CHCTRL_5;
    volatile uint32_t CHCFG_5;
    volatile uint32_t CHITVL_5;
    volatile uint32_t CHEXT_5;
    volatile uint32_t NXLA_5;
    volatile uint32_t CRLA_5;




    volatile uint32_t N0SA_6;
    volatile uint32_t N0DA_6;
    volatile uint32_t N0TB_6;
    volatile uint32_t N1SA_6;
    volatile uint32_t N1DA_6;
    volatile uint32_t N1TB_6;
    volatile uint32_t CRSA_6;
    volatile uint32_t CRDA_6;
    volatile uint32_t CRTB_6;
    volatile uint32_t CHSTAT_6;
    volatile uint32_t CHCTRL_6;
    volatile uint32_t CHCFG_6;
    volatile uint32_t CHITVL_6;
    volatile uint32_t CHEXT_6;
    volatile uint32_t NXLA_6;
    volatile uint32_t CRLA_6;




    volatile uint32_t N0SA_7;
    volatile uint32_t N0DA_7;
    volatile uint32_t N0TB_7;
    volatile uint32_t N1SA_7;
    volatile uint32_t N1DA_7;
    volatile uint32_t N1TB_7;
    volatile uint32_t CRSA_7;
    volatile uint32_t CRDA_7;
    volatile uint32_t CRTB_7;
    volatile uint32_t CHSTAT_7;
    volatile uint32_t CHCTRL_7;
    volatile uint32_t CHCFG_7;
    volatile uint32_t CHITVL_7;
    volatile uint32_t CHEXT_7;
    volatile uint32_t NXLA_7;
    volatile uint32_t CRLA_7;


    volatile uint8_t dummy187[256];


    volatile uint32_t DCTRL_0_7;
    volatile uint8_t dummy188[12];
    volatile uint32_t DSTAT_EN_0_7;
    volatile uint32_t DSTAT_ER_0_7;
    volatile uint32_t DSTAT_END_0_7;
    volatile uint32_t DSTAT_TC_0_7;
    volatile uint32_t DSTAT_SUS_0_7;


    volatile uint8_t dummy189[220];


    volatile uint32_t N0SA_8;
    volatile uint32_t N0DA_8;
    volatile uint32_t N0TB_8;
    volatile uint32_t N1SA_8;
    volatile uint32_t N1DA_8;
    volatile uint32_t N1TB_8;
    volatile uint32_t CRSA_8;
    volatile uint32_t CRDA_8;
    volatile uint32_t CRTB_8;
    volatile uint32_t CHSTAT_8;
    volatile uint32_t CHCTRL_8;
    volatile uint32_t CHCFG_8;
    volatile uint32_t CHITVL_8;
    volatile uint32_t CHEXT_8;
    volatile uint32_t NXLA_8;
    volatile uint32_t CRLA_8;




    volatile uint32_t N0SA_9;
    volatile uint32_t N0DA_9;
    volatile uint32_t N0TB_9;
    volatile uint32_t N1SA_9;
    volatile uint32_t N1DA_9;
    volatile uint32_t N1TB_9;
    volatile uint32_t CRSA_9;
    volatile uint32_t CRDA_9;
    volatile uint32_t CRTB_9;
    volatile uint32_t CHSTAT_9;
    volatile uint32_t CHCTRL_9;
    volatile uint32_t CHCFG_9;
    volatile uint32_t CHITVL_9;
    volatile uint32_t CHEXT_9;
    volatile uint32_t NXLA_9;
    volatile uint32_t CRLA_9;




    volatile uint32_t N0SA_10;
    volatile uint32_t N0DA_10;
    volatile uint32_t N0TB_10;
    volatile uint32_t N1SA_10;
    volatile uint32_t N1DA_10;
    volatile uint32_t N1TB_10;
    volatile uint32_t CRSA_10;
    volatile uint32_t CRDA_10;
    volatile uint32_t CRTB_10;
    volatile uint32_t CHSTAT_10;
    volatile uint32_t CHCTRL_10;
    volatile uint32_t CHCFG_10;
    volatile uint32_t CHITVL_10;
    volatile uint32_t CHEXT_10;
    volatile uint32_t NXLA_10;
    volatile uint32_t CRLA_10;




    volatile uint32_t N0SA_11;
    volatile uint32_t N0DA_11;
    volatile uint32_t N0TB_11;
    volatile uint32_t N1SA_11;
    volatile uint32_t N1DA_11;
    volatile uint32_t N1TB_11;
    volatile uint32_t CRSA_11;
    volatile uint32_t CRDA_11;
    volatile uint32_t CRTB_11;
    volatile uint32_t CHSTAT_11;
    volatile uint32_t CHCTRL_11;
    volatile uint32_t CHCFG_11;
    volatile uint32_t CHITVL_11;
    volatile uint32_t CHEXT_11;
    volatile uint32_t NXLA_11;
    volatile uint32_t CRLA_11;




    volatile uint32_t N0SA_12;
    volatile uint32_t N0DA_12;
    volatile uint32_t N0TB_12;
    volatile uint32_t N1SA_12;
    volatile uint32_t N1DA_12;
    volatile uint32_t N1TB_12;
    volatile uint32_t CRSA_12;
    volatile uint32_t CRDA_12;
    volatile uint32_t CRTB_12;
    volatile uint32_t CHSTAT_12;
    volatile uint32_t CHCTRL_12;
    volatile uint32_t CHCFG_12;
    volatile uint32_t CHITVL_12;
    volatile uint32_t CHEXT_12;
    volatile uint32_t NXLA_12;
    volatile uint32_t CRLA_12;




    volatile uint32_t N0SA_13;
    volatile uint32_t N0DA_13;
    volatile uint32_t N0TB_13;
    volatile uint32_t N1SA_13;
    volatile uint32_t N1DA_13;
    volatile uint32_t N1TB_13;
    volatile uint32_t CRSA_13;
    volatile uint32_t CRDA_13;
    volatile uint32_t CRTB_13;
    volatile uint32_t CHSTAT_13;
    volatile uint32_t CHCTRL_13;
    volatile uint32_t CHCFG_13;
    volatile uint32_t CHITVL_13;
    volatile uint32_t CHEXT_13;
    volatile uint32_t NXLA_13;
    volatile uint32_t CRLA_13;




    volatile uint32_t N0SA_14;
    volatile uint32_t N0DA_14;
    volatile uint32_t N0TB_14;
    volatile uint32_t N1SA_14;
    volatile uint32_t N1DA_14;
    volatile uint32_t N1TB_14;
    volatile uint32_t CRSA_14;
    volatile uint32_t CRDA_14;
    volatile uint32_t CRTB_14;
    volatile uint32_t CHSTAT_14;
    volatile uint32_t CHCTRL_14;
    volatile uint32_t CHCFG_14;
    volatile uint32_t CHITVL_14;
    volatile uint32_t CHEXT_14;
    volatile uint32_t NXLA_14;
    volatile uint32_t CRLA_14;




    volatile uint32_t N0SA_15;
    volatile uint32_t N0DA_15;
    volatile uint32_t N0TB_15;
    volatile uint32_t N1SA_15;
    volatile uint32_t N1DA_15;
    volatile uint32_t N1TB_15;
    volatile uint32_t CRSA_15;
    volatile uint32_t CRDA_15;
    volatile uint32_t CRTB_15;
    volatile uint32_t CHSTAT_15;
    volatile uint32_t CHCTRL_15;
    volatile uint32_t CHCFG_15;
    volatile uint32_t CHITVL_15;
    volatile uint32_t CHEXT_15;
    volatile uint32_t NXLA_15;
    volatile uint32_t CRLA_15;


    volatile uint8_t dummy190[256];


    volatile uint32_t DCTRL_8_15;
    volatile uint8_t dummy191[12];
    volatile uint32_t DSTAT_EN_8_15;
    volatile uint32_t DSTAT_ER_8_15;
    volatile uint32_t DSTAT_END_8_15;
    volatile uint32_t DSTAT_TC_8_15;
    volatile uint32_t DSTAT_SUS_8_15;


    volatile uint8_t dummy192[350095580];
    volatile uint32_t DMARS0;
    volatile uint32_t DMARS1;
    volatile uint32_t DMARS2;
    volatile uint32_t DMARS3;
    volatile uint32_t DMARS4;
    volatile uint32_t DMARS5;
    volatile uint32_t DMARS6;
    volatile uint32_t DMARS7;
} r_io_dmac_t;


typedef struct st_dmaccommon_n
{

    volatile uint32_t DCTRL_0_7;
    volatile uint8_t dummy1[12];
    volatile uint32_t DSTAT_EN_0_7;
    volatile uint32_t DSTAT_ER_0_7;
    volatile uint32_t DSTAT_END_0_7;
    volatile uint32_t DSTAT_TC_0_7;
    volatile uint32_t DSTAT_SUS_0_7;
} r_io_dmaccommon_n_t;


typedef struct st_dmac_n
{

    volatile uint32_t N0SA_n;
    volatile uint32_t N0DA_n;
    volatile uint32_t N0TB_n;
    volatile uint32_t N1SA_n;
    volatile uint32_t N1DA_n;
    volatile uint32_t N1TB_n;
    volatile uint32_t CRSA_n;
    volatile uint32_t CRDA_n;
    volatile uint32_t CRTB_n;
    volatile uint32_t CHSTAT_n;
    volatile uint32_t CHCTRL_n;
    volatile uint32_t CHCFG_n;
    volatile uint32_t CHITVL_n;
    volatile uint32_t CHEXT_n;
    volatile uint32_t NXLA_n;
    volatile uint32_t CRLA_n;
} r_io_dmac_n_t;
/*  42 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/dvdec_iodefine.h" 1 */
/*  277 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/dvdec_iodefine.h" */
typedef struct st_dvdec
{

    volatile uint16_t ADCCR1;
    volatile uint8_t dummy1[4];


    volatile uint16_t TGCR1;
    volatile uint16_t TGCR2;
    volatile uint16_t TGCR3;
    volatile uint8_t dummy2[6];


    volatile uint16_t SYNSCR1;
    volatile uint16_t SYNSCR2;
    volatile uint16_t SYNSCR3;
    volatile uint16_t SYNSCR4;
    volatile uint16_t SYNSCR5;


    volatile uint16_t HAFCCR1;
    volatile uint16_t HAFCCR2;
    volatile uint16_t HAFCCR3;
    volatile uint16_t VCDWCR1;
    volatile uint8_t dummy3[4];


    volatile uint16_t DCPCR1;
    volatile uint16_t DCPCR2;
    volatile uint16_t DCPCR3;
    volatile uint16_t DCPCR4;
    volatile uint16_t DCPCR5;
    volatile uint16_t DCPCR6;
    volatile uint16_t DCPCR7;
    volatile uint16_t DCPCR8;
    volatile uint16_t NSDCR;
    volatile uint16_t BTLCR;
    volatile uint16_t BTGPCR;


    volatile uint16_t ACCCR1;
    volatile uint16_t ACCCR2;
    volatile uint16_t ACCCR3;
    volatile uint16_t TINTCR;
    volatile uint16_t YCDCR;


    volatile uint16_t AGCCR1;
    volatile uint16_t AGCCR2;
    volatile uint16_t PKLIMITCR;


    volatile uint16_t RGORCR1;
    volatile uint16_t RGORCR2;
    volatile uint16_t RGORCR3;
    volatile uint16_t RGORCR4;
    volatile uint16_t RGORCR5;
    volatile uint16_t RGORCR6;
    volatile uint16_t RGORCR7;
    volatile uint8_t dummy4[24];
    volatile uint16_t AFCPFCR;
    volatile uint16_t RUPDCR;
    volatile uint16_t VSYNCSR;
    volatile uint16_t HSYNCSR;


    volatile uint16_t DCPSR1;
    volatile uint16_t DCPSR2;
    volatile uint8_t dummy5[4];
    volatile uint16_t NSDSR;


    volatile uint16_t CROMASR1;
    volatile uint16_t CROMASR2;
    volatile uint16_t SYNCSSR;


    volatile uint16_t AGCCSR1;
    volatile uint16_t AGCCSR2;
    volatile uint8_t dummy6[108];


    volatile uint16_t YCSCR3;
    volatile uint16_t YCSCR4;
    volatile uint16_t YCSCR5;
    volatile uint16_t YCSCR6;
    volatile uint16_t YCSCR7;
    volatile uint16_t YCSCR8;
    volatile uint16_t YCSCR9;
    volatile uint8_t dummy7[2];
    volatile uint16_t YCSCR11;
    volatile uint16_t YCSCR12;
    volatile uint8_t dummy8[104];
    volatile uint16_t DCPCR9;
    volatile uint8_t dummy9[16];


    volatile uint16_t YCTWA_F0;
    volatile uint16_t YCTWA_F1;
    volatile uint16_t YCTWA_F2;
    volatile uint16_t YCTWA_F3;
    volatile uint16_t YCTWA_F4;
    volatile uint16_t YCTWA_F5;
    volatile uint16_t YCTWA_F6;
    volatile uint16_t YCTWA_F7;
    volatile uint16_t YCTWA_F8;


    volatile uint16_t YCTWB_F0;
    volatile uint16_t YCTWB_F1;
    volatile uint16_t YCTWB_F2;
    volatile uint16_t YCTWB_F3;
    volatile uint16_t YCTWB_F4;
    volatile uint16_t YCTWB_F5;
    volatile uint16_t YCTWB_F6;
    volatile uint16_t YCTWB_F7;
    volatile uint16_t YCTWB_F8;


    volatile uint16_t YCTNA_F0;
    volatile uint16_t YCTNA_F1;
    volatile uint16_t YCTNA_F2;
    volatile uint16_t YCTNA_F3;
    volatile uint16_t YCTNA_F4;
    volatile uint16_t YCTNA_F5;
    volatile uint16_t YCTNA_F6;
    volatile uint16_t YCTNA_F7;
    volatile uint16_t YCTNA_F8;


    volatile uint16_t YCTNB_F0;
    volatile uint16_t YCTNB_F1;
    volatile uint16_t YCTNB_F2;
    volatile uint16_t YCTNB_F3;
    volatile uint16_t YCTNB_F4;
    volatile uint16_t YCTNB_F5;
    volatile uint16_t YCTNB_F6;
    volatile uint16_t YCTNB_F7;
    volatile uint16_t YCTNB_F8;
    volatile uint8_t dummy10[38];
    volatile uint16_t YGAINCR;
    volatile uint16_t CBGAINCR;
    volatile uint16_t CRGAINCR;
    volatile uint8_t dummy11[122];
    volatile uint16_t PGA_UPDATE;
    volatile uint16_t PGACR;
    volatile uint16_t ADCCR2;
} r_io_dvdec_t;
/*  43 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ether_iodefine.h" 1 */
/*  204 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ether_iodefine.h" */
typedef struct st_ether
{

    volatile uint32_t EDSR0;
    volatile uint8_t dummy207[12];
    volatile uint32_t TDLAR0;
    volatile uint32_t TDFAR0;
    volatile uint32_t TDFXR0;
    volatile uint32_t TDFFR0;
    volatile uint8_t dummy208[16];
    volatile uint32_t RDLAR0;
    volatile uint32_t RDFAR0;
    volatile uint32_t RDFXR0;
    volatile uint32_t RDFFR0;
    volatile uint8_t dummy209[960];
    volatile uint32_t EDMR0;
    volatile uint8_t dummy210[4];
    volatile uint32_t EDTRR0;
    volatile uint8_t dummy211[4];
    volatile uint32_t EDRRR0;
    volatile uint8_t dummy212[20];
    volatile uint32_t EESR0;
    volatile uint8_t dummy213[4];
    volatile uint32_t EESIPR0;
    volatile uint8_t dummy214[4];
    volatile uint32_t TRSCER0;
    volatile uint8_t dummy215[4];
    volatile uint32_t RMFCR0;
    volatile uint8_t dummy216[4];
    volatile uint32_t TFTR0;
    volatile uint8_t dummy217[4];
    volatile uint32_t FDR0;
    volatile uint8_t dummy218[4];
    volatile uint32_t RMCR0;
    volatile uint8_t dummy219[4];
    volatile uint32_t RPADIR0;
    volatile uint8_t dummy220[4];
    volatile uint32_t FCFTR0;
    volatile uint8_t dummy221[120];
    volatile uint32_t CSMR;
    volatile uint32_t CSSBM;
    volatile uint32_t CSSMR;
    volatile uint8_t dummy222[16];
    volatile uint32_t ECMR0;
    volatile uint8_t dummy223[4];
    volatile uint32_t RFLR0;
    volatile uint8_t dummy224[4];
    volatile uint32_t ECSR0;
    volatile uint8_t dummy225[4];
    volatile uint32_t ECSIPR0;
    volatile uint8_t dummy226[4];
    volatile uint32_t PIR0;
    volatile uint8_t dummy227[48];
    volatile uint32_t APR0;
    volatile uint32_t MPR0;
    volatile uint32_t PFTCR0;
    volatile uint32_t PFRCR0;
    volatile uint32_t TPAUSER0;
    volatile uint8_t dummy228[88];
    volatile uint32_t MAHR0;
    volatile uint8_t dummy229[4];
    volatile uint32_t MALR0;
    volatile uint8_t dummy230[372];
    volatile uint32_t CEFCR0;
    volatile uint8_t dummy231[4];
    volatile uint32_t FRECR0;
    volatile uint8_t dummy232[4];
    volatile uint32_t TSFRCR0;
    volatile uint8_t dummy233[4];
    volatile uint32_t TLFRCR0;
    volatile uint8_t dummy234[4];
    volatile uint32_t RFCR0;
    volatile uint8_t dummy235[20];
    volatile uint32_t MAFCR0;
    volatile uint8_t dummy236[4228];
    volatile uint32_t ARSTR;
    volatile uint32_t TSU_CTRST;
    volatile uint8_t dummy237[80];
    volatile uint32_t TSU_VTAG0;
    volatile uint8_t dummy238[4];
    volatile uint32_t TSU_ADSBSY;
    volatile uint32_t TSU_TEN;
    volatile uint8_t dummy239[24];
    volatile uint32_t TXNLCR0;
    volatile uint32_t TXALCR0;
    volatile uint32_t RXNLCR0;
    volatile uint32_t RXALCR0;
    volatile uint8_t dummy240[112];


    volatile uint32_t TSU_ADRH0;
    volatile uint32_t TSU_ADRL0;




    volatile uint32_t TSU_ADRH1;
    volatile uint32_t TSU_ADRL1;




    volatile uint32_t TSU_ADRH2;
    volatile uint32_t TSU_ADRL2;




    volatile uint32_t TSU_ADRH3;
    volatile uint32_t TSU_ADRL3;




    volatile uint32_t TSU_ADRH4;
    volatile uint32_t TSU_ADRL4;




    volatile uint32_t TSU_ADRH5;
    volatile uint32_t TSU_ADRL5;




    volatile uint32_t TSU_ADRH6;
    volatile uint32_t TSU_ADRL6;




    volatile uint32_t TSU_ADRH7;
    volatile uint32_t TSU_ADRL7;




    volatile uint32_t TSU_ADRH8;
    volatile uint32_t TSU_ADRL8;




    volatile uint32_t TSU_ADRH9;
    volatile uint32_t TSU_ADRL9;




    volatile uint32_t TSU_ADRH10;
    volatile uint32_t TSU_ADRL10;




    volatile uint32_t TSU_ADRH11;
    volatile uint32_t TSU_ADRL11;




    volatile uint32_t TSU_ADRH12;
    volatile uint32_t TSU_ADRL12;




    volatile uint32_t TSU_ADRH13;
    volatile uint32_t TSU_ADRL13;




    volatile uint32_t TSU_ADRH14;
    volatile uint32_t TSU_ADRL14;




    volatile uint32_t TSU_ADRH15;
    volatile uint32_t TSU_ADRL15;




    volatile uint32_t TSU_ADRH16;
    volatile uint32_t TSU_ADRL16;




    volatile uint32_t TSU_ADRH17;
    volatile uint32_t TSU_ADRL17;




    volatile uint32_t TSU_ADRH18;
    volatile uint32_t TSU_ADRL18;




    volatile uint32_t TSU_ADRH19;
    volatile uint32_t TSU_ADRL19;




    volatile uint32_t TSU_ADRH20;
    volatile uint32_t TSU_ADRL20;




    volatile uint32_t TSU_ADRH21;
    volatile uint32_t TSU_ADRL21;




    volatile uint32_t TSU_ADRH22;
    volatile uint32_t TSU_ADRL22;




    volatile uint32_t TSU_ADRH23;
    volatile uint32_t TSU_ADRL23;




    volatile uint32_t TSU_ADRH24;
    volatile uint32_t TSU_ADRL24;




    volatile uint32_t TSU_ADRH25;
    volatile uint32_t TSU_ADRL25;




    volatile uint32_t TSU_ADRH26;
    volatile uint32_t TSU_ADRL26;




    volatile uint32_t TSU_ADRH27;
    volatile uint32_t TSU_ADRL27;




    volatile uint32_t TSU_ADRH28;
    volatile uint32_t TSU_ADRL28;




    volatile uint32_t TSU_ADRH29;
    volatile uint32_t TSU_ADRL29;




    volatile uint32_t TSU_ADRH30;
    volatile uint32_t TSU_ADRL30;




    volatile uint32_t TSU_ADRH31;
    volatile uint32_t TSU_ADRL31;


} r_io_ether_t;


typedef struct st_ether_from_tsu_adrh0
{

    volatile uint32_t TSU_ADRH0;
    volatile uint32_t TSU_ADRL0;
} r_io_ether_from_tsu_adrh0_t;
/*  44 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/flctl_iodefine.h" 1 */
/*  53 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/flctl_iodefine.h" */
typedef struct st_flctl
{

    volatile uint32_t FLCMNCR;
    volatile uint32_t FLCMDCR;
    volatile uint32_t FLCMCDR;
    volatile uint32_t FLADR;
    volatile uint32_t FLDATAR;
    volatile uint32_t FLDTCNTR;
    volatile uint32_t FLINTDMACR;
    volatile uint32_t FLBSYTMR;
    volatile uint32_t FLBSYCNT;
    volatile uint8_t dummy555[8];
    volatile uint8_t FLTRCR;
    volatile uint8_t dummy556[15];
    volatile uint32_t FLADR2;
    volatile uint8_t dummy557[16];
    volatile uint32_t FLDTFIFO;
} r_io_flctl_t;
/*  45 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/gpio_iodefine.h" 1 */
/*  446 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/gpio_iodefine.h" */
typedef struct st_gpio
{



    volatile uint16_t P1;
    volatile uint8_t dummy348[2];




    volatile uint16_t P2;
    volatile uint8_t dummy349[2];




    volatile uint16_t P3;
    volatile uint8_t dummy350[2];




    volatile uint16_t P4;
    volatile uint8_t dummy351[2];




    volatile uint16_t P5;
    volatile uint8_t dummy352[2];




    volatile uint16_t P6;
    volatile uint8_t dummy353[2];




    volatile uint16_t P7;
    volatile uint8_t dummy354[2];




    volatile uint16_t P8;
    volatile uint8_t dummy355[2];




    volatile uint16_t P9;
    volatile uint8_t dummy356[2];




    volatile uint16_t P10;
    volatile uint8_t dummy357[2];




    volatile uint16_t P11;
    volatile uint8_t dummy3580[2];


    volatile uint8_t dummy3581[212];


    volatile uint32_t PSR1;
    volatile uint32_t PSR2;
    volatile uint32_t PSR3;
    volatile uint32_t PSR4;
    volatile uint32_t PSR5;
    volatile uint32_t PSR6;
    volatile uint32_t PSR7;
    volatile uint32_t PSR8;
    volatile uint32_t PSR9;
    volatile uint32_t PSR10;
    volatile uint32_t PSR11;
    volatile uint8_t dummy359[208];


    volatile uint16_t PPR0;
    volatile uint8_t dummy360[2];




    volatile uint16_t PPR1;
    volatile uint8_t dummy361[2];




    volatile uint16_t PPR2;
    volatile uint8_t dummy362[2];




    volatile uint16_t PPR3;
    volatile uint8_t dummy363[2];




    volatile uint16_t PPR4;
    volatile uint8_t dummy364[2];




    volatile uint16_t PPR5;
    volatile uint8_t dummy365[2];




    volatile uint16_t PPR6;
    volatile uint8_t dummy366[2];




    volatile uint16_t PPR7;
    volatile uint8_t dummy367[2];




    volatile uint16_t PPR8;
    volatile uint8_t dummy368[2];




    volatile uint16_t PPR9;
    volatile uint8_t dummy369[2];




    volatile uint16_t PPR10;
    volatile uint8_t dummy370[2];




    volatile uint16_t PPR11;
    volatile uint8_t dummy3710[2];


    volatile uint8_t dummy3711[212];


    volatile uint16_t PM1;
    volatile uint8_t dummy372[2];




    volatile uint16_t PM2;
    volatile uint8_t dummy373[2];




    volatile uint16_t PM3;
    volatile uint8_t dummy374[2];




    volatile uint16_t PM4;
    volatile uint8_t dummy375[2];




    volatile uint16_t PM5;
    volatile uint8_t dummy376[2];




    volatile uint16_t PM6;
    volatile uint8_t dummy377[2];




    volatile uint16_t PM7;
    volatile uint8_t dummy378[2];




    volatile uint16_t PM8;
    volatile uint8_t dummy379[2];




    volatile uint16_t PM9;
    volatile uint8_t dummy380[2];




    volatile uint16_t PM10;
    volatile uint8_t dummy381[2];




    volatile uint16_t PM11;
    volatile uint8_t dummy3820[2];


    volatile uint8_t dummy3821[208];


    volatile uint16_t PMC0;
    volatile uint8_t dummy383[2];




    volatile uint16_t PMC1;
    volatile uint8_t dummy384[2];




    volatile uint16_t PMC2;
    volatile uint8_t dummy385[2];




    volatile uint16_t PMC3;
    volatile uint8_t dummy386[2];




    volatile uint16_t PMC4;
    volatile uint8_t dummy387[2];




    volatile uint16_t PMC5;
    volatile uint8_t dummy388[2];




    volatile uint16_t PMC6;
    volatile uint8_t dummy389[2];




    volatile uint16_t PMC7;
    volatile uint8_t dummy390[2];




    volatile uint16_t PMC8;
    volatile uint8_t dummy391[2];




    volatile uint16_t PMC9;
    volatile uint8_t dummy392[2];




    volatile uint16_t PMC10;
    volatile uint8_t dummy393[2];




    volatile uint16_t PMC11;
    volatile uint8_t dummy3940[2];


    volatile uint8_t dummy3941[212];


    volatile uint16_t PFC1;
    volatile uint8_t dummy395[2];




    volatile uint16_t PFC2;
    volatile uint8_t dummy396[2];




    volatile uint16_t PFC3;
    volatile uint8_t dummy397[2];




    volatile uint16_t PFC4;
    volatile uint8_t dummy398[2];




    volatile uint16_t PFC5;
    volatile uint8_t dummy399[2];




    volatile uint16_t PFC6;
    volatile uint8_t dummy400[2];




    volatile uint16_t PFC7;
    volatile uint8_t dummy401[2];




    volatile uint16_t PFC8;
    volatile uint8_t dummy402[2];




    volatile uint16_t PFC9;
    volatile uint8_t dummy403[2];




    volatile uint16_t PFC10;
    volatile uint8_t dummy404[2];




    volatile uint16_t PFC11;
    volatile uint8_t dummy4050[2];


    volatile uint8_t dummy4051[212];


    volatile uint16_t PFCE1;
    volatile uint8_t dummy406[2];




    volatile uint16_t PFCE2;
    volatile uint8_t dummy407[2];




    volatile uint16_t PFCE3;
    volatile uint8_t dummy408[2];




    volatile uint16_t PFCE4;
    volatile uint8_t dummy409[2];




    volatile uint16_t PFCE5;
    volatile uint8_t dummy410[2];




    volatile uint16_t PFCE6;
    volatile uint8_t dummy411[2];




    volatile uint16_t PFCE7;
    volatile uint8_t dummy412[2];




    volatile uint16_t PFCE8;
    volatile uint8_t dummy413[2];




    volatile uint16_t PFCE9;
    volatile uint8_t dummy414[2];




    volatile uint16_t PFCE10;
    volatile uint8_t dummy415[2];




    volatile uint16_t PFCE11;
    volatile uint8_t dummy4160[2];


    volatile uint8_t dummy4161[212];


    volatile uint16_t PNOT1;
    volatile uint8_t dummy417[2];




    volatile uint16_t PNOT2;
    volatile uint8_t dummy418[2];




    volatile uint16_t PNOT3;
    volatile uint8_t dummy419[2];




    volatile uint16_t PNOT4;
    volatile uint8_t dummy420[2];




    volatile uint16_t PNOT5;
    volatile uint8_t dummy421[2];




    volatile uint16_t PNOT6;
    volatile uint8_t dummy422[2];




    volatile uint16_t PNOT7;
    volatile uint8_t dummy423[2];




    volatile uint16_t PNOT8;
    volatile uint8_t dummy424[2];




    volatile uint16_t PNOT9;
    volatile uint8_t dummy425[2];




    volatile uint16_t PNOT10;
    volatile uint8_t dummy426[2];




    volatile uint16_t PNOT11;
    volatile uint8_t dummy4270[2];


    volatile uint8_t dummy4271[212];


    volatile uint32_t PMSR1;
    volatile uint32_t PMSR2;
    volatile uint32_t PMSR3;
    volatile uint32_t PMSR4;
    volatile uint32_t PMSR5;
    volatile uint32_t PMSR6;
    volatile uint32_t PMSR7;
    volatile uint32_t PMSR8;
    volatile uint32_t PMSR9;
    volatile uint32_t PMSR10;
    volatile uint32_t PMSR11;
    volatile uint8_t dummy428[208];


    volatile uint32_t PMCSR0;
    volatile uint32_t PMCSR1;
    volatile uint32_t PMCSR2;
    volatile uint32_t PMCSR3;
    volatile uint32_t PMCSR4;
    volatile uint32_t PMCSR5;
    volatile uint32_t PMCSR6;
    volatile uint32_t PMCSR7;
    volatile uint32_t PMCSR8;
    volatile uint32_t PMCSR9;
    volatile uint32_t PMCSR10;
    volatile uint32_t PMCSR11;
    volatile uint8_t dummy429[212];


    volatile uint16_t PFCAE1;
    volatile uint8_t dummy430[2];




    volatile uint16_t PFCAE2;
    volatile uint8_t dummy431[2];




    volatile uint16_t PFCAE3;
    volatile uint8_t dummy432[2];




    volatile uint16_t PFCAE4;
    volatile uint8_t dummy433[2];




    volatile uint16_t PFCAE5;
    volatile uint8_t dummy434[2];




    volatile uint16_t PFCAE6;
    volatile uint8_t dummy435[2];




    volatile uint16_t PFCAE7;
    volatile uint8_t dummy436[2];




    volatile uint16_t PFCAE8;
    volatile uint8_t dummy437[2];




    volatile uint16_t PFCAE9;
    volatile uint8_t dummy438[2];




    volatile uint16_t PFCAE10;
    volatile uint8_t dummy439[2];




    volatile uint16_t PFCAE11;
    volatile uint8_t dummy4400[2];


    volatile uint8_t dummy4401[464];
    volatile uint32_t SNCR;
    volatile uint8_t dummy441[13308];


    volatile uint16_t PIBC0;
    volatile uint8_t dummy442[2];




    volatile uint16_t PIBC1;
    volatile uint8_t dummy443[2];




    volatile uint16_t PIBC2;
    volatile uint8_t dummy444[2];




    volatile uint16_t PIBC3;
    volatile uint8_t dummy445[2];




    volatile uint16_t PIBC4;
    volatile uint8_t dummy446[2];




    volatile uint16_t PIBC5;
    volatile uint8_t dummy447[2];




    volatile uint16_t PIBC6;
    volatile uint8_t dummy448[2];




    volatile uint16_t PIBC7;
    volatile uint8_t dummy449[2];




    volatile uint16_t PIBC8;
    volatile uint8_t dummy450[2];




    volatile uint16_t PIBC9;
    volatile uint8_t dummy451[2];




    volatile uint16_t PIBC10;
    volatile uint8_t dummy452[2];




    volatile uint16_t PIBC11;
    volatile uint8_t dummy4530[2];


    volatile uint8_t dummy4531[212];


    volatile uint16_t PBDC1;
    volatile uint8_t dummy454[2];




    volatile uint16_t PBDC2;
    volatile uint8_t dummy455[2];




    volatile uint16_t PBDC3;
    volatile uint8_t dummy456[2];




    volatile uint16_t PBDC4;
    volatile uint8_t dummy457[2];




    volatile uint16_t PBDC5;
    volatile uint8_t dummy458[2];




    volatile uint16_t PBDC6;
    volatile uint8_t dummy459[2];




    volatile uint16_t PBDC7;
    volatile uint8_t dummy460[2];




    volatile uint16_t PBDC8;
    volatile uint8_t dummy461[2];




    volatile uint16_t PBDC9;
    volatile uint8_t dummy462[2];




    volatile uint16_t PBDC10;
    volatile uint8_t dummy463[2];




    volatile uint16_t PBDC11;
    volatile uint8_t dummy4640[2];


    volatile uint8_t dummy4641[212];


    volatile uint16_t PIPC1;
    volatile uint8_t dummy465[2];




    volatile uint16_t PIPC2;
    volatile uint8_t dummy466[2];




    volatile uint16_t PIPC3;
    volatile uint8_t dummy467[2];




    volatile uint16_t PIPC4;
    volatile uint8_t dummy468[2];




    volatile uint16_t PIPC5;
    volatile uint8_t dummy469[2];




    volatile uint16_t PIPC6;
    volatile uint8_t dummy470[2];




    volatile uint16_t PIPC7;
    volatile uint8_t dummy471[2];




    volatile uint16_t PIPC8;
    volatile uint8_t dummy472[2];




    volatile uint16_t PIPC9;
    volatile uint8_t dummy473[2];




    volatile uint16_t PIPC10;
    volatile uint8_t dummy474[2];




    volatile uint16_t PIPC11;
    volatile uint8_t dummy4750[2];


    volatile uint8_t dummy4751[2288];
    volatile uint16_t JPPR0;
    volatile uint8_t dummy476[30];
    volatile uint16_t JPMC0;
    volatile uint8_t dummy477[78];
    volatile uint32_t JPMCSR0;
    volatile uint8_t dummy478[876];
    volatile uint16_t JPIBC0;
} r_io_gpio_t;


typedef struct st_gpio_from_p1
{

    volatile uint16_t P1;
    volatile uint8_t dummy1[3];
} r_io_gpio_from_p1_t;


typedef struct st_gpio_from_ppr0
{

    volatile uint16_t PPR0;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_ppr0_t;


typedef struct st_gpio_from_pm1
{

    volatile uint16_t PM1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pm1_t;


typedef struct st_gpio_from_pmc0
{

    volatile uint16_t PMC0;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pmc0_t;


typedef struct st_gpio_from_pfc1
{

    volatile uint16_t PFC1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pfc1_t;


typedef struct st_gpio_from_pfce1
{

    volatile uint16_t PFCE1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pfce1_t;


typedef struct st_gpio_from_pnot1
{

    volatile uint16_t PNOT1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pnot1_t;


typedef struct st_gpio_from_pfcae1
{

    volatile uint16_t PFCAE1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pfcae1_t;


typedef struct st_gpio_from_pibc1
{

    volatile uint16_t PIBC1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pibc1_t;


typedef struct st_gpio_from_pbdc1
{

    volatile uint16_t PBDC1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pbdc1_t;


typedef struct st_gpio_from_pipc1
{

    volatile uint16_t PIPC1;
    volatile uint8_t dummy1[2];
} r_io_gpio_from_pipc1_t;
/*  46 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ieb_iodefine.h" 1 */
/*  67 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ieb_iodefine.h" */
typedef struct st_ieb
{

    volatile uint8_t B0BCR;
    volatile uint8_t dummy495[3];
    volatile uint8_t B0PSR;
    volatile uint8_t dummy496[3];
    volatile uint16_t B0UAR;
    volatile uint8_t dummy497[2];
    volatile uint16_t B0SAR;
    volatile uint8_t dummy498[2];
    volatile uint16_t B0PAR;
    volatile uint8_t dummy499[2];
    volatile uint16_t B0RSA;
    volatile uint8_t dummy500[2];
    volatile uint8_t B0CDR;
    volatile uint8_t dummy501[3];
    volatile uint8_t B0TCD;
    volatile uint8_t dummy502[3];
    volatile uint8_t B0RCD;
    volatile uint8_t dummy503[3];
    volatile uint8_t B0DLR;
    volatile uint8_t dummy504[3];
    volatile uint8_t B0TDL;
    volatile uint8_t dummy505[3];
    volatile uint8_t B0RDL;
    volatile uint8_t dummy506[3];
    volatile uint8_t B0CKS;
    volatile uint8_t dummy507[3];
    volatile uint8_t B0TMS;
    volatile uint8_t dummy508[3];
    volatile uint8_t B0PCR;
    volatile uint8_t dummy509[3];
    volatile uint16_t B0BSR;
    volatile uint8_t dummy510[2];
    volatile uint8_t B0SSR;
    volatile uint8_t dummy511[3];
    volatile uint8_t B0USR;
    volatile uint8_t dummy512[3];
    volatile uint8_t B0ISR;
    volatile uint8_t dummy513[3];
    volatile uint8_t B0ESR;
    volatile uint8_t dummy514[3];
    volatile uint8_t B0FSR;
    volatile uint8_t dummy515[3];
    volatile uint8_t B0SCR;
    volatile uint8_t dummy516[3];
    volatile uint8_t B0CCR;
    volatile uint8_t dummy517[3];
    volatile uint8_t B0STC0;
    volatile uint8_t dummy518[3];
    volatile uint8_t B0STC1;
    volatile uint8_t dummy519[3];
    volatile uint8_t B0DR;
} r_io_ieb_t;
/*  47 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/inb_iodefine.h" 1 */
/*  70 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/inb_iodefine.h" */
typedef struct st_inb
{

    volatile uint32_t RMPR;


    volatile uint32_t AXIBUSCTL0;
    volatile uint32_t AXIBUSCTL1;
    volatile uint32_t AXIBUSCTL2;
    volatile uint32_t AXIBUSCTL3;
    volatile uint32_t AXIBUSCTL4;
    volatile uint32_t AXIBUSCTL5;
    volatile uint32_t AXIBUSCTL6;
    volatile uint32_t AXIBUSCTL7;
    volatile uint32_t AXIBUSCTL8;
    volatile uint32_t AXIBUSCTL9;
    volatile uint32_t AXIBUSCTL10;


    volatile uint32_t AXIRERRCTL0;
    volatile uint32_t AXIRERRCTL1;
    volatile uint32_t AXIRERRCTL2;
    volatile uint32_t AXIRERRCTL3;


    volatile uint32_t AXIRERRST0;
    volatile uint32_t AXIRERRST1;
    volatile uint32_t AXIRERRST2;
    volatile uint32_t AXIRERRST3;


    volatile uint32_t AXIRERRCLR0;
    volatile uint32_t AXIRERRCLR1;
    volatile uint32_t AXIRERRCLR2;
    volatile uint32_t AXIRERRCLR3;
} r_io_inb_t;
/*  48 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/intc_iodefine.h" 1 */
/*  531 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/intc_iodefine.h" */
typedef struct st_intc
{

    volatile uint32_t ICDDCR;
    volatile uint32_t ICDICTR;
    volatile uint32_t ICDIIDR;
    volatile uint8_t dummy193[116];


    volatile uint32_t ICDISR0;
    volatile uint32_t ICDISR1;
    volatile uint32_t ICDISR2;
    volatile uint32_t ICDISR3;
    volatile uint32_t ICDISR4;
    volatile uint32_t ICDISR5;
    volatile uint32_t ICDISR6;
    volatile uint32_t ICDISR7;
    volatile uint32_t ICDISR8;
    volatile uint32_t ICDISR9;
    volatile uint32_t ICDISR10;
    volatile uint32_t ICDISR11;
    volatile uint32_t ICDISR12;
    volatile uint32_t ICDISR13;
    volatile uint32_t ICDISR14;
    volatile uint32_t ICDISR15;
    volatile uint32_t ICDISR16;
    volatile uint32_t ICDISR17;
    volatile uint32_t ICDISR18;
    volatile uint8_t dummy194[52];


    volatile uint32_t ICDISER0;
    volatile uint32_t ICDISER1;
    volatile uint32_t ICDISER2;
    volatile uint32_t ICDISER3;
    volatile uint32_t ICDISER4;
    volatile uint32_t ICDISER5;
    volatile uint32_t ICDISER6;
    volatile uint32_t ICDISER7;
    volatile uint32_t ICDISER8;
    volatile uint32_t ICDISER9;
    volatile uint32_t ICDISER10;
    volatile uint32_t ICDISER11;
    volatile uint32_t ICDISER12;
    volatile uint32_t ICDISER13;
    volatile uint32_t ICDISER14;
    volatile uint32_t ICDISER15;
    volatile uint32_t ICDISER16;
    volatile uint32_t ICDISER17;
    volatile uint32_t ICDISER18;
    volatile uint8_t dummy195[52];


    volatile uint32_t ICDICER0;
    volatile uint32_t ICDICER1;
    volatile uint32_t ICDICER2;
    volatile uint32_t ICDICER3;
    volatile uint32_t ICDICER4;
    volatile uint32_t ICDICER5;
    volatile uint32_t ICDICER6;
    volatile uint32_t ICDICER7;
    volatile uint32_t ICDICER8;
    volatile uint32_t ICDICER9;
    volatile uint32_t ICDICER10;
    volatile uint32_t ICDICER11;
    volatile uint32_t ICDICER12;
    volatile uint32_t ICDICER13;
    volatile uint32_t ICDICER14;
    volatile uint32_t ICDICER15;
    volatile uint32_t ICDICER16;
    volatile uint32_t ICDICER17;
    volatile uint32_t ICDICER18;
    volatile uint8_t dummy196[52];


    volatile uint32_t ICDISPR0;
    volatile uint32_t ICDISPR1;
    volatile uint32_t ICDISPR2;
    volatile uint32_t ICDISPR3;
    volatile uint32_t ICDISPR4;
    volatile uint32_t ICDISPR5;
    volatile uint32_t ICDISPR6;
    volatile uint32_t ICDISPR7;
    volatile uint32_t ICDISPR8;
    volatile uint32_t ICDISPR9;
    volatile uint32_t ICDISPR10;
    volatile uint32_t ICDISPR11;
    volatile uint32_t ICDISPR12;
    volatile uint32_t ICDISPR13;
    volatile uint32_t ICDISPR14;
    volatile uint32_t ICDISPR15;
    volatile uint32_t ICDISPR16;
    volatile uint32_t ICDISPR17;
    volatile uint32_t ICDISPR18;
    volatile uint8_t dummy197[52];


    volatile uint32_t ICDICPR0;
    volatile uint32_t ICDICPR1;
    volatile uint32_t ICDICPR2;
    volatile uint32_t ICDICPR3;
    volatile uint32_t ICDICPR4;
    volatile uint32_t ICDICPR5;
    volatile uint32_t ICDICPR6;
    volatile uint32_t ICDICPR7;
    volatile uint32_t ICDICPR8;
    volatile uint32_t ICDICPR9;
    volatile uint32_t ICDICPR10;
    volatile uint32_t ICDICPR11;
    volatile uint32_t ICDICPR12;
    volatile uint32_t ICDICPR13;
    volatile uint32_t ICDICPR14;
    volatile uint32_t ICDICPR15;
    volatile uint32_t ICDICPR16;
    volatile uint32_t ICDICPR17;
    volatile uint32_t ICDICPR18;
    volatile uint8_t dummy198[52];


    volatile uint32_t ICDABR0;
    volatile uint32_t ICDABR1;
    volatile uint32_t ICDABR2;
    volatile uint32_t ICDABR3;
    volatile uint32_t ICDABR4;
    volatile uint32_t ICDABR5;
    volatile uint32_t ICDABR6;
    volatile uint32_t ICDABR7;
    volatile uint32_t ICDABR8;
    volatile uint32_t ICDABR9;
    volatile uint32_t ICDABR10;
    volatile uint32_t ICDABR11;
    volatile uint32_t ICDABR12;
    volatile uint32_t ICDABR13;
    volatile uint32_t ICDABR14;
    volatile uint32_t ICDABR15;
    volatile uint32_t ICDABR16;
    volatile uint32_t ICDABR17;
    volatile uint32_t ICDABR18;
    volatile uint8_t dummy199[180];


    volatile uint32_t ICDIPR0;
    volatile uint32_t ICDIPR1;
    volatile uint32_t ICDIPR2;
    volatile uint32_t ICDIPR3;
    volatile uint32_t ICDIPR4;
    volatile uint32_t ICDIPR5;
    volatile uint32_t ICDIPR6;
    volatile uint32_t ICDIPR7;
    volatile uint32_t ICDIPR8;
    volatile uint32_t ICDIPR9;
    volatile uint32_t ICDIPR10;
    volatile uint32_t ICDIPR11;
    volatile uint32_t ICDIPR12;
    volatile uint32_t ICDIPR13;
    volatile uint32_t ICDIPR14;
    volatile uint32_t ICDIPR15;
    volatile uint32_t ICDIPR16;
    volatile uint32_t ICDIPR17;
    volatile uint32_t ICDIPR18;
    volatile uint32_t ICDIPR19;
    volatile uint32_t ICDIPR20;
    volatile uint32_t ICDIPR21;
    volatile uint32_t ICDIPR22;
    volatile uint32_t ICDIPR23;
    volatile uint32_t ICDIPR24;
    volatile uint32_t ICDIPR25;
    volatile uint32_t ICDIPR26;
    volatile uint32_t ICDIPR27;
    volatile uint32_t ICDIPR28;
    volatile uint32_t ICDIPR29;
    volatile uint32_t ICDIPR30;
    volatile uint32_t ICDIPR31;
    volatile uint32_t ICDIPR32;
    volatile uint32_t ICDIPR33;
    volatile uint32_t ICDIPR34;
    volatile uint32_t ICDIPR35;
    volatile uint32_t ICDIPR36;
    volatile uint32_t ICDIPR37;
    volatile uint32_t ICDIPR38;
    volatile uint32_t ICDIPR39;
    volatile uint32_t ICDIPR40;
    volatile uint32_t ICDIPR41;
    volatile uint32_t ICDIPR42;
    volatile uint32_t ICDIPR43;
    volatile uint32_t ICDIPR44;
    volatile uint32_t ICDIPR45;
    volatile uint32_t ICDIPR46;
    volatile uint32_t ICDIPR47;
    volatile uint32_t ICDIPR48;
    volatile uint32_t ICDIPR49;
    volatile uint32_t ICDIPR50;
    volatile uint32_t ICDIPR51;
    volatile uint32_t ICDIPR52;
    volatile uint32_t ICDIPR53;
    volatile uint32_t ICDIPR54;
    volatile uint32_t ICDIPR55;
    volatile uint32_t ICDIPR56;
    volatile uint32_t ICDIPR57;
    volatile uint32_t ICDIPR58;
    volatile uint32_t ICDIPR59;
    volatile uint32_t ICDIPR60;
    volatile uint32_t ICDIPR61;
    volatile uint32_t ICDIPR62;
    volatile uint32_t ICDIPR63;
    volatile uint32_t ICDIPR64;
    volatile uint32_t ICDIPR65;
    volatile uint32_t ICDIPR66;
    volatile uint32_t ICDIPR67;
    volatile uint32_t ICDIPR68;
    volatile uint32_t ICDIPR69;
    volatile uint32_t ICDIPR70;
    volatile uint32_t ICDIPR71;
    volatile uint32_t ICDIPR72;
    volatile uint32_t ICDIPR73;
    volatile uint32_t ICDIPR74;
    volatile uint32_t ICDIPR75;
    volatile uint32_t ICDIPR76;
    volatile uint32_t ICDIPR77;
    volatile uint32_t ICDIPR78;
    volatile uint32_t ICDIPR79;
    volatile uint32_t ICDIPR80;
    volatile uint32_t ICDIPR81;
    volatile uint32_t ICDIPR82;
    volatile uint32_t ICDIPR83;
    volatile uint32_t ICDIPR84;
    volatile uint32_t ICDIPR85;
    volatile uint32_t ICDIPR86;
    volatile uint32_t ICDIPR87;
    volatile uint32_t ICDIPR88;
    volatile uint32_t ICDIPR89;
    volatile uint32_t ICDIPR90;
    volatile uint32_t ICDIPR91;
    volatile uint32_t ICDIPR92;
    volatile uint32_t ICDIPR93;
    volatile uint32_t ICDIPR94;
    volatile uint32_t ICDIPR95;
    volatile uint32_t ICDIPR96;
    volatile uint32_t ICDIPR97;
    volatile uint32_t ICDIPR98;
    volatile uint32_t ICDIPR99;
    volatile uint32_t ICDIPR100;
    volatile uint32_t ICDIPR101;
    volatile uint32_t ICDIPR102;
    volatile uint32_t ICDIPR103;
    volatile uint32_t ICDIPR104;
    volatile uint32_t ICDIPR105;
    volatile uint32_t ICDIPR106;
    volatile uint32_t ICDIPR107;
    volatile uint32_t ICDIPR108;
    volatile uint32_t ICDIPR109;
    volatile uint32_t ICDIPR110;
    volatile uint32_t ICDIPR111;
    volatile uint32_t ICDIPR112;
    volatile uint32_t ICDIPR113;
    volatile uint32_t ICDIPR114;
    volatile uint32_t ICDIPR115;
    volatile uint32_t ICDIPR116;
    volatile uint32_t ICDIPR117;
    volatile uint32_t ICDIPR118;
    volatile uint32_t ICDIPR119;
    volatile uint32_t ICDIPR120;
    volatile uint32_t ICDIPR121;
    volatile uint32_t ICDIPR122;
    volatile uint32_t ICDIPR123;
    volatile uint32_t ICDIPR124;
    volatile uint32_t ICDIPR125;
    volatile uint32_t ICDIPR126;
    volatile uint32_t ICDIPR127;
    volatile uint32_t ICDIPR128;
    volatile uint32_t ICDIPR129;
    volatile uint32_t ICDIPR130;
    volatile uint32_t ICDIPR131;
    volatile uint32_t ICDIPR132;
    volatile uint32_t ICDIPR133;
    volatile uint32_t ICDIPR134;
    volatile uint32_t ICDIPR135;
    volatile uint32_t ICDIPR136;
    volatile uint32_t ICDIPR137;
    volatile uint32_t ICDIPR138;
    volatile uint32_t ICDIPR139;
    volatile uint32_t ICDIPR140;
    volatile uint32_t ICDIPR141;
    volatile uint32_t ICDIPR142;
    volatile uint32_t ICDIPR143;
    volatile uint32_t ICDIPR144;
    volatile uint32_t ICDIPR145;
    volatile uint32_t ICDIPR146;
    volatile uint8_t dummy200[436];


    volatile uint32_t ICDIPTR0;
    volatile uint32_t ICDIPTR1;
    volatile uint32_t ICDIPTR2;
    volatile uint32_t ICDIPTR3;
    volatile uint32_t ICDIPTR4;
    volatile uint32_t ICDIPTR5;
    volatile uint32_t ICDIPTR6;
    volatile uint32_t ICDIPTR7;
    volatile uint32_t ICDIPTR8;
    volatile uint32_t ICDIPTR9;
    volatile uint32_t ICDIPTR10;
    volatile uint32_t ICDIPTR11;
    volatile uint32_t ICDIPTR12;
    volatile uint32_t ICDIPTR13;
    volatile uint32_t ICDIPTR14;
    volatile uint32_t ICDIPTR15;
    volatile uint32_t ICDIPTR16;
    volatile uint32_t ICDIPTR17;
    volatile uint32_t ICDIPTR18;
    volatile uint32_t ICDIPTR19;
    volatile uint32_t ICDIPTR20;
    volatile uint32_t ICDIPTR21;
    volatile uint32_t ICDIPTR22;
    volatile uint32_t ICDIPTR23;
    volatile uint32_t ICDIPTR24;
    volatile uint32_t ICDIPTR25;
    volatile uint32_t ICDIPTR26;
    volatile uint32_t ICDIPTR27;
    volatile uint32_t ICDIPTR28;
    volatile uint32_t ICDIPTR29;
    volatile uint32_t ICDIPTR30;
    volatile uint32_t ICDIPTR31;
    volatile uint32_t ICDIPTR32;
    volatile uint32_t ICDIPTR33;
    volatile uint32_t ICDIPTR34;
    volatile uint32_t ICDIPTR35;
    volatile uint32_t ICDIPTR36;
    volatile uint32_t ICDIPTR37;
    volatile uint32_t ICDIPTR38;
    volatile uint32_t ICDIPTR39;
    volatile uint32_t ICDIPTR40;
    volatile uint32_t ICDIPTR41;
    volatile uint32_t ICDIPTR42;
    volatile uint32_t ICDIPTR43;
    volatile uint32_t ICDIPTR44;
    volatile uint32_t ICDIPTR45;
    volatile uint32_t ICDIPTR46;
    volatile uint32_t ICDIPTR47;
    volatile uint32_t ICDIPTR48;
    volatile uint32_t ICDIPTR49;
    volatile uint32_t ICDIPTR50;
    volatile uint32_t ICDIPTR51;
    volatile uint32_t ICDIPTR52;
    volatile uint32_t ICDIPTR53;
    volatile uint32_t ICDIPTR54;
    volatile uint32_t ICDIPTR55;
    volatile uint32_t ICDIPTR56;
    volatile uint32_t ICDIPTR57;
    volatile uint32_t ICDIPTR58;
    volatile uint32_t ICDIPTR59;
    volatile uint32_t ICDIPTR60;
    volatile uint32_t ICDIPTR61;
    volatile uint32_t ICDIPTR62;
    volatile uint32_t ICDIPTR63;
    volatile uint32_t ICDIPTR64;
    volatile uint32_t ICDIPTR65;
    volatile uint32_t ICDIPTR66;
    volatile uint32_t ICDIPTR67;
    volatile uint32_t ICDIPTR68;
    volatile uint32_t ICDIPTR69;
    volatile uint32_t ICDIPTR70;
    volatile uint32_t ICDIPTR71;
    volatile uint32_t ICDIPTR72;
    volatile uint32_t ICDIPTR73;
    volatile uint32_t ICDIPTR74;
    volatile uint32_t ICDIPTR75;
    volatile uint32_t ICDIPTR76;
    volatile uint32_t ICDIPTR77;
    volatile uint32_t ICDIPTR78;
    volatile uint32_t ICDIPTR79;
    volatile uint32_t ICDIPTR80;
    volatile uint32_t ICDIPTR81;
    volatile uint32_t ICDIPTR82;
    volatile uint32_t ICDIPTR83;
    volatile uint32_t ICDIPTR84;
    volatile uint32_t ICDIPTR85;
    volatile uint32_t ICDIPTR86;
    volatile uint32_t ICDIPTR87;
    volatile uint32_t ICDIPTR88;
    volatile uint32_t ICDIPTR89;
    volatile uint32_t ICDIPTR90;
    volatile uint32_t ICDIPTR91;
    volatile uint32_t ICDIPTR92;
    volatile uint32_t ICDIPTR93;
    volatile uint32_t ICDIPTR94;
    volatile uint32_t ICDIPTR95;
    volatile uint32_t ICDIPTR96;
    volatile uint32_t ICDIPTR97;
    volatile uint32_t ICDIPTR98;
    volatile uint32_t ICDIPTR99;
    volatile uint32_t ICDIPTR100;
    volatile uint32_t ICDIPTR101;
    volatile uint32_t ICDIPTR102;
    volatile uint32_t ICDIPTR103;
    volatile uint32_t ICDIPTR104;
    volatile uint32_t ICDIPTR105;
    volatile uint32_t ICDIPTR106;
    volatile uint32_t ICDIPTR107;
    volatile uint32_t ICDIPTR108;
    volatile uint32_t ICDIPTR109;
    volatile uint32_t ICDIPTR110;
    volatile uint32_t ICDIPTR111;
    volatile uint32_t ICDIPTR112;
    volatile uint32_t ICDIPTR113;
    volatile uint32_t ICDIPTR114;
    volatile uint32_t ICDIPTR115;
    volatile uint32_t ICDIPTR116;
    volatile uint32_t ICDIPTR117;
    volatile uint32_t ICDIPTR118;
    volatile uint32_t ICDIPTR119;
    volatile uint32_t ICDIPTR120;
    volatile uint32_t ICDIPTR121;
    volatile uint32_t ICDIPTR122;
    volatile uint32_t ICDIPTR123;
    volatile uint32_t ICDIPTR124;
    volatile uint32_t ICDIPTR125;
    volatile uint32_t ICDIPTR126;
    volatile uint32_t ICDIPTR127;
    volatile uint32_t ICDIPTR128;
    volatile uint32_t ICDIPTR129;
    volatile uint32_t ICDIPTR130;
    volatile uint32_t ICDIPTR131;
    volatile uint32_t ICDIPTR132;
    volatile uint32_t ICDIPTR133;
    volatile uint32_t ICDIPTR134;
    volatile uint32_t ICDIPTR135;
    volatile uint32_t ICDIPTR136;
    volatile uint32_t ICDIPTR137;
    volatile uint32_t ICDIPTR138;
    volatile uint32_t ICDIPTR139;
    volatile uint32_t ICDIPTR140;
    volatile uint32_t ICDIPTR141;
    volatile uint32_t ICDIPTR142;
    volatile uint32_t ICDIPTR143;
    volatile uint32_t ICDIPTR144;
    volatile uint32_t ICDIPTR145;
    volatile uint32_t ICDIPTR146;
    volatile uint8_t dummy201[436];


    volatile uint32_t ICDICFR0;
    volatile uint32_t ICDICFR1;
    volatile uint32_t ICDICFR2;
    volatile uint32_t ICDICFR3;
    volatile uint32_t ICDICFR4;
    volatile uint32_t ICDICFR5;
    volatile uint32_t ICDICFR6;
    volatile uint32_t ICDICFR7;
    volatile uint32_t ICDICFR8;
    volatile uint32_t ICDICFR9;
    volatile uint32_t ICDICFR10;
    volatile uint32_t ICDICFR11;
    volatile uint32_t ICDICFR12;
    volatile uint32_t ICDICFR13;
    volatile uint32_t ICDICFR14;
    volatile uint32_t ICDICFR15;
    volatile uint32_t ICDICFR16;
    volatile uint32_t ICDICFR17;
    volatile uint32_t ICDICFR18;
    volatile uint32_t ICDICFR19;
    volatile uint32_t ICDICFR20;
    volatile uint32_t ICDICFR21;
    volatile uint32_t ICDICFR22;
    volatile uint32_t ICDICFR23;
    volatile uint32_t ICDICFR24;
    volatile uint32_t ICDICFR25;
    volatile uint32_t ICDICFR26;
    volatile uint32_t ICDICFR27;
    volatile uint32_t ICDICFR28;
    volatile uint32_t ICDICFR29;
    volatile uint32_t ICDICFR30;
    volatile uint32_t ICDICFR31;
    volatile uint32_t ICDICFR32;
    volatile uint32_t ICDICFR33;
    volatile uint32_t ICDICFR34;
    volatile uint32_t ICDICFR35;
    volatile uint32_t ICDICFR36;
    volatile uint8_t dummy202[108];
    volatile uint32_t PPI_STATUS;


    volatile uint32_t SPI_STATUS0;
    volatile uint32_t SPI_STATUS1;
    volatile uint32_t SPI_STATUS2;
    volatile uint32_t SPI_STATUS3;
    volatile uint32_t SPI_STATUS4;
    volatile uint32_t SPI_STATUS5;
    volatile uint32_t SPI_STATUS6;
    volatile uint32_t SPI_STATUS7;
    volatile uint32_t SPI_STATUS8;
    volatile uint32_t SPI_STATUS9;
    volatile uint32_t SPI_STATUS10;
    volatile uint32_t SPI_STATUS11;
    volatile uint32_t SPI_STATUS12;
    volatile uint32_t SPI_STATUS13;
    volatile uint32_t SPI_STATUS14;
    volatile uint32_t SPI_STATUS15;
    volatile uint32_t SPI_STATUS16;
    volatile uint8_t dummy203[440];
    volatile uint32_t ICDSGIR;
    volatile uint8_t dummy204[252];
    volatile uint32_t ICCICR;
    volatile uint32_t ICCPMR;
    volatile uint32_t ICCBPR;
    volatile uint32_t ICCIAR;
    volatile uint32_t ICCEOIR;
    volatile uint32_t ICCRPR;
    volatile uint32_t ICCHPIR;
    volatile uint32_t ICCABPR;
    volatile uint8_t dummy205[220];
    volatile uint32_t ICCIIDR;
    volatile uint8_t dummy206[350148352];
    volatile uint16_t ICR0;
    volatile uint16_t ICR1;
    volatile uint16_t IRQRR;
} r_io_intc_t;
/*  49 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/irda_iodefine.h" 1 */
/*  42 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/irda_iodefine.h" */
typedef struct st_irda
{

    volatile uint8_t IRCR;
} r_io_irda_t;
/*  50 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/jcu_iodefine.h" 1 */
/*  100 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/jcu_iodefine.h" */
typedef struct st_jcu
{

    volatile uint8_t JCMOD;
    volatile uint8_t JCCMD;
    volatile uint8_t dummy145[1];
    volatile uint8_t JCQTN;
    volatile uint8_t JCHTN;
    volatile uint8_t JCDRIU;
    volatile uint8_t JCDRID;
    volatile uint8_t JCVSZU;
    volatile uint8_t JCVSZD;
    volatile uint8_t JCHSZU;
    volatile uint8_t JCHSZD;
    volatile uint8_t JCDTCU;
    volatile uint8_t JCDTCM;
    volatile uint8_t JCDTCD;
    volatile uint8_t JINTE0;
    volatile uint8_t JINTS0;
    volatile uint8_t JCDERR;
    volatile uint8_t JCRST;
    volatile uint8_t dummy146[46];
    volatile uint32_t JIFECNT;
    volatile uint32_t JIFESA;
    volatile uint32_t JIFESOFST;
    volatile uint32_t JIFEDA;
    volatile uint32_t JIFESLC;
    volatile uint32_t JIFEDDC;
    volatile uint32_t JIFDCNT;
    volatile uint32_t JIFDSA;
    volatile uint32_t JIFDDOFST;
    volatile uint32_t JIFDDA;
    volatile uint32_t JIFDSDC;
    volatile uint32_t JIFDDLC;
    volatile uint32_t JIFDADT;
    volatile uint8_t dummy147[24];
    volatile uint32_t JINTE1;
    volatile uint32_t JINTS1;
    volatile uint32_t JIFESVSZ;
    volatile uint32_t JIFESHSZ;
    volatile uint8_t dummy148[100];


    volatile uint8_t JCQTBL0;
    volatile uint8_t dummy149[63];




    volatile uint8_t JCQTBL1;
    volatile uint8_t dummy150[63];




    volatile uint8_t JCQTBL2;
    volatile uint8_t dummy151[63];




    volatile uint8_t JCQTBL3;
    volatile uint8_t dummy152[63];


    volatile uint8_t JCHTBD0;
    volatile uint8_t dummy153[31];
    volatile uint8_t JCHTBA0;
    volatile uint8_t dummy154[223];
    volatile uint8_t JCHTBD1;
    volatile uint8_t dummy155[31];
    volatile uint8_t JCHTBA1;
} r_io_jcu_t;


typedef struct st_jcu_from_jcqtbl0
{

    volatile uint8_t JCQTBL0;
    volatile uint8_t dummy1[63];
} r_io_jcu_from_jcqtbl0_t;
/*  51 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/l2c_iodefine.h" 1 */
/*  109 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/l2c_iodefine.h" */
typedef struct st_l2c
{

    volatile uint32_t REG0_CACHE_ID;
    volatile uint32_t REG0_CACHE_TYPE;
    volatile uint8_t dummy8[248];
    volatile uint32_t REG1_CONTROL;
    volatile uint32_t REG1_AUX_CONTROL;
    volatile uint32_t REG1_TAG_RAM_CONTROL;
    volatile uint32_t REG1_DATA_RAM_CONTROL;
    volatile uint8_t dummy9[240];
    volatile uint32_t REG2_EV_COUNTER_CTRL;
    volatile uint32_t REG2_EV_COUNTER1_CFG;
    volatile uint32_t REG2_EV_COUNTER0_CFG;
    volatile uint32_t REG2_EV_COUNTER1;
    volatile uint32_t REG2_EV_COUNTER0;
    volatile uint32_t REG2_INT_MASK;
    volatile uint32_t REG2_INT_MASK_STATUS;
    volatile uint32_t REG2_INT_RAW_STATUS;
    volatile uint32_t REG2_INT_CLEAR;
    volatile uint8_t dummy10[1292];
    volatile uint32_t REG7_CACHE_SYNC;
    volatile uint8_t dummy11[60];
    volatile uint32_t REG7_INV_PA;
    volatile uint8_t dummy12[8];
    volatile uint32_t REG7_INV_WAY;
    volatile uint8_t dummy13[48];
    volatile uint32_t REG7_CLEAN_PA;
    volatile uint8_t dummy14[4];
    volatile uint32_t REG7_CLEAN_INDEX;
    volatile uint32_t REG7_CLEAN_WAY;
    volatile uint8_t dummy15[48];
    volatile uint32_t REG7_CLEAN_INV_PA;
    volatile uint8_t dummy16[4];
    volatile uint32_t REG7_CLEAN_INV_INDEX;
    volatile uint32_t REG7_CLEAN_INV_WAY;
    volatile uint8_t dummy17[256];


    volatile uint32_t REG9_D_LOCKDOWN0;
    volatile uint32_t REG9_I_LOCKDOWN0;




    volatile uint32_t REG9_D_LOCKDOWN1;
    volatile uint32_t REG9_I_LOCKDOWN1;




    volatile uint32_t REG9_D_LOCKDOWN2;
    volatile uint32_t REG9_I_LOCKDOWN2;




    volatile uint32_t REG9_D_LOCKDOWN3;
    volatile uint32_t REG9_I_LOCKDOWN3;




    volatile uint32_t REG9_D_LOCKDOWN4;
    volatile uint32_t REG9_I_LOCKDOWN4;




    volatile uint32_t REG9_D_LOCKDOWN5;
    volatile uint32_t REG9_I_LOCKDOWN5;




    volatile uint32_t REG9_D_LOCKDOWN6;
    volatile uint32_t REG9_I_LOCKDOWN6;




    volatile uint32_t REG9_D_LOCKDOWN7;
    volatile uint32_t REG9_I_LOCKDOWN7;


    volatile uint8_t dummy18[16];
    volatile uint32_t REG9_LOCK_LINE_EN;
    volatile uint32_t REG9_UNLOCK_WAY;
    volatile uint8_t dummy19[680];
    volatile uint32_t REG12_ADDR_FILTERING_START;
    volatile uint32_t REG12_ADDR_FILTERING_END;
    volatile uint8_t dummy20[824];
    volatile uint32_t REG15_DEBUG_CTRL;
    volatile uint8_t dummy21[28];
    volatile uint32_t REG15_PREFETCH_CTRL;
    volatile uint8_t dummy22[28];
    volatile uint32_t REG15_POWER_CTRL;
} r_io_l2c_t;


typedef struct st_l2c_from_reg9_d_lockdown0
{

    volatile uint32_t REG9_D_LOCKDOWN0;
    volatile uint32_t REG9_I_LOCKDOWN0;
} r_io_l2c_from_reg9_d_lockdown_t ;
/*  52 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/lin_iodefine.h" 1 */
/*  109 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/lin_iodefine.h" */
typedef struct st_lin
{

    volatile uint8_t dummy1[1];
    volatile uint8_t RLN3nLWBR;
    volatile uint8_t RLN3nLBRP0;
    volatile uint8_t RLN3nLBRP1;
    volatile uint8_t RLN3nLSTC;
    volatile uint8_t dummy2[3];
    volatile uint8_t RLN3nLMD;
    volatile uint8_t RLN3nLBFC;
    volatile uint8_t RLN3nLSC;
    volatile uint8_t RLN3nLWUP;
    volatile uint8_t RLN3nLIE;
    volatile uint8_t RLN3nLEDE;
    volatile uint8_t RLN3nLCUC;
    volatile uint8_t dummy3[1];
    volatile uint8_t RLN3nLTRC;
    volatile uint8_t RLN3nLMST;
    volatile uint8_t RLN3nLST;
    volatile uint8_t RLN3nLEST;
    volatile uint8_t RLN3nLDFC;
    volatile uint8_t RLN3nLIDB;
    volatile uint8_t RLN3nLCBR;
    volatile uint8_t dummy4[1];


    volatile uint8_t RLN3nLDBR1;
    volatile uint8_t RLN3nLDBR2;
    volatile uint8_t RLN3nLDBR3;
    volatile uint8_t RLN3nLDBR4;
    volatile uint8_t RLN3nLDBR5;
    volatile uint8_t RLN3nLDBR6;
    volatile uint8_t RLN3nLDBR7;
    volatile uint8_t RLN3nLDBR8;
} r_io_lin_t;
/*  53 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/lvds_iodefine.h" 1 */
/*  46 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/lvds_iodefine.h" */
typedef struct st_lvds
{

    volatile uint32_t LVDS_UPDATE;
    volatile uint32_t LVDSFCL;
    volatile uint8_t dummy608[24];
    volatile uint32_t LCLKSELR;
    volatile uint32_t LPLLSETR;
    volatile uint8_t dummy609[4];
    volatile uint32_t LPHYACC;
} r_io_lvds_t;
/*  54 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/mlb_iodefine.h" 1 */
/*  255 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/mlb_iodefine.h" */
typedef struct st_mlb
{

    volatile uint32_t DCCR;
    volatile uint32_t SSCR;
    volatile uint32_t SDCR;
    volatile uint32_t SMCR;
    volatile uint8_t dummy156[12];
    volatile uint32_t VCCR;
    volatile uint32_t SBCR;
    volatile uint32_t ABCR;
    volatile uint32_t CBCR;
    volatile uint32_t IBCR;
    volatile uint32_t CICR;
    volatile uint8_t dummy157[12];


    volatile uint32_t CECR0;
    volatile uint32_t CSCR0;
    volatile uint32_t CCBCR0;
    volatile uint32_t CNBCR0;




    volatile uint32_t CECR1;
    volatile uint32_t CSCR1;
    volatile uint32_t CCBCR1;
    volatile uint32_t CNBCR1;




    volatile uint32_t CECR2;
    volatile uint32_t CSCR2;
    volatile uint32_t CCBCR2;
    volatile uint32_t CNBCR2;




    volatile uint32_t CECR3;
    volatile uint32_t CSCR3;
    volatile uint32_t CCBCR3;
    volatile uint32_t CNBCR3;




    volatile uint32_t CECR4;
    volatile uint32_t CSCR4;
    volatile uint32_t CCBCR4;
    volatile uint32_t CNBCR4;




    volatile uint32_t CECR5;
    volatile uint32_t CSCR5;
    volatile uint32_t CCBCR5;
    volatile uint32_t CNBCR5;




    volatile uint32_t CECR6;
    volatile uint32_t CSCR6;
    volatile uint32_t CCBCR6;
    volatile uint32_t CNBCR6;




    volatile uint32_t CECR7;
    volatile uint32_t CSCR7;
    volatile uint32_t CCBCR7;
    volatile uint32_t CNBCR7;




    volatile uint32_t CECR8;
    volatile uint32_t CSCR8;
    volatile uint32_t CCBCR8;
    volatile uint32_t CNBCR8;




    volatile uint32_t CECR9;
    volatile uint32_t CSCR9;
    volatile uint32_t CCBCR9;
    volatile uint32_t CNBCR9;




    volatile uint32_t CECR10;
    volatile uint32_t CSCR10;
    volatile uint32_t CCBCR10;
    volatile uint32_t CNBCR10;




    volatile uint32_t CECR11;
    volatile uint32_t CSCR11;
    volatile uint32_t CCBCR11;
    volatile uint32_t CNBCR11;




    volatile uint32_t CECR12;
    volatile uint32_t CSCR12;
    volatile uint32_t CCBCR12;
    volatile uint32_t CNBCR12;




    volatile uint32_t CECR13;
    volatile uint32_t CSCR13;
    volatile uint32_t CCBCR13;
    volatile uint32_t CNBCR13;




    volatile uint32_t CECR14;
    volatile uint32_t CSCR14;
    volatile uint32_t CCBCR14;
    volatile uint32_t CNBCR14;




    volatile uint32_t CECR15;
    volatile uint32_t CSCR15;
    volatile uint32_t CCBCR15;
    volatile uint32_t CNBCR15;




    volatile uint32_t CECR16;
    volatile uint32_t CSCR16;
    volatile uint32_t CCBCR16;
    volatile uint32_t CNBCR16;




    volatile uint32_t CECR17;
    volatile uint32_t CSCR17;
    volatile uint32_t CCBCR17;
    volatile uint32_t CNBCR17;




    volatile uint32_t CECR18;
    volatile uint32_t CSCR18;
    volatile uint32_t CCBCR18;
    volatile uint32_t CNBCR18;




    volatile uint32_t CECR19;
    volatile uint32_t CSCR19;
    volatile uint32_t CCBCR19;
    volatile uint32_t CNBCR19;




    volatile uint32_t CECR20;
    volatile uint32_t CSCR20;
    volatile uint32_t CCBCR20;
    volatile uint32_t CNBCR20;




    volatile uint32_t CECR21;
    volatile uint32_t CSCR21;
    volatile uint32_t CCBCR21;
    volatile uint32_t CNBCR21;




    volatile uint32_t CECR22;
    volatile uint32_t CSCR22;
    volatile uint32_t CCBCR22;
    volatile uint32_t CNBCR22;




    volatile uint32_t CECR23;
    volatile uint32_t CSCR23;
    volatile uint32_t CCBCR23;
    volatile uint32_t CNBCR23;




    volatile uint32_t CECR24;
    volatile uint32_t CSCR24;
    volatile uint32_t CCBCR24;
    volatile uint32_t CNBCR24;




    volatile uint32_t CECR25;
    volatile uint32_t CSCR25;
    volatile uint32_t CCBCR25;
    volatile uint32_t CNBCR25;




    volatile uint32_t CECR26;
    volatile uint32_t CSCR26;
    volatile uint32_t CCBCR26;
    volatile uint32_t CNBCR26;




    volatile uint32_t CECR27;
    volatile uint32_t CSCR27;
    volatile uint32_t CCBCR27;
    volatile uint32_t CNBCR27;




    volatile uint32_t CECR28;
    volatile uint32_t CSCR28;
    volatile uint32_t CCBCR28;
    volatile uint32_t CNBCR28;




    volatile uint32_t CECR29;
    volatile uint32_t CSCR29;
    volatile uint32_t CCBCR29;
    volatile uint32_t CNBCR29;




    volatile uint32_t CECR30;
    volatile uint32_t CSCR30;
    volatile uint32_t CCBCR30;
    volatile uint32_t CNBCR30;


    volatile uint8_t dummy158[80];


    volatile uint32_t LCBCR0;
    volatile uint32_t LCBCR1;
    volatile uint32_t LCBCR2;
    volatile uint32_t LCBCR3;
    volatile uint32_t LCBCR4;
    volatile uint32_t LCBCR5;
    volatile uint32_t LCBCR6;
    volatile uint32_t LCBCR7;
    volatile uint32_t LCBCR8;
    volatile uint32_t LCBCR9;
    volatile uint32_t LCBCR10;
    volatile uint32_t LCBCR11;
    volatile uint32_t LCBCR12;
    volatile uint32_t LCBCR13;
    volatile uint32_t LCBCR14;
    volatile uint32_t LCBCR15;
    volatile uint32_t LCBCR16;
    volatile uint32_t LCBCR17;
    volatile uint32_t LCBCR18;
    volatile uint32_t LCBCR19;
    volatile uint32_t LCBCR20;
    volatile uint32_t LCBCR21;
    volatile uint32_t LCBCR22;
    volatile uint32_t LCBCR23;
    volatile uint32_t LCBCR24;
    volatile uint32_t LCBCR25;
    volatile uint32_t LCBCR26;
    volatile uint32_t LCBCR27;
    volatile uint32_t LCBCR28;
    volatile uint32_t LCBCR29;
    volatile uint32_t LCBCR30;
} r_io_mlb_t;


typedef struct st_mlb_from_cecr0
{

    volatile uint32_t CECR0;
    volatile uint32_t CSCR0;
    volatile uint32_t CCBCR0;
    volatile uint32_t CNBCR0;
} r_io_mlb_from_cecr0_t;
/*  55 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/mmc_iodefine.h" 1 */
/*  65 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/mmc_iodefine.h" */
typedef struct st_mmc
{

    volatile uint16_t CE_CMD_SETH;
    volatile uint16_t CE_CMD_SETL;
    volatile uint8_t dummy182[4];
    volatile uint32_t CE_ARG;
    volatile uint32_t CE_ARG_CMD12;
    volatile uint32_t CE_CMD_CTRL;
    volatile uint32_t CE_BLOCK_SET;
    volatile uint32_t CE_CLK_CTRL;
    volatile uint32_t CE_BUF_ACC;


    volatile uint32_t CE_RESP3;
    volatile uint32_t CE_RESP2;
    volatile uint32_t CE_RESP1;
    volatile uint32_t CE_RESP0;
    volatile uint32_t CE_RESP_CMD12;
    volatile uint32_t CE_DATA;
    volatile uint8_t dummy183[8];
    volatile uint32_t CE_INT;
    volatile uint32_t CE_INT_EN;
    volatile uint32_t CE_HOST_STS1;
    volatile uint32_t CE_HOST_STS2;
    volatile uint8_t dummy184[12];
    volatile uint32_t CE_DMA_MODE;
    volatile uint8_t dummy185[16];
    volatile uint32_t CE_DETECT;
    volatile uint32_t CE_ADD_MODE;
    volatile uint8_t dummy186[4];
    volatile uint32_t CE_VERSION;
} r_io_mmc_t;
/*  56 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/mtu2_iodefine.h" 1 */
/*  120 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/mtu2_iodefine.h" */
typedef struct st_mtu2
{

    volatile uint8_t TCR_2;
    volatile uint8_t TMDR_2;
    volatile uint8_t TIOR_2;
    volatile uint8_t dummy520[1];
    volatile uint8_t TIER_2;
    volatile uint8_t TSR_2;
    volatile uint16_t TCNT_2;
    volatile uint16_t TGRA_2;
    volatile uint16_t TGRB_2;
    volatile uint8_t dummy521[500];
    volatile uint8_t TCR_3;
    volatile uint8_t TCR_4;
    volatile uint8_t TMDR_3;
    volatile uint8_t TMDR_4;
    volatile uint8_t TIORH_3;
    volatile uint8_t TIORL_3;
    volatile uint8_t TIORH_4;
    volatile uint8_t TIORL_4;
    volatile uint8_t TIER_3;
    volatile uint8_t TIER_4;
    volatile uint8_t TOER;
    volatile uint8_t dummy522[2];
    volatile uint8_t TGCR;
    volatile uint8_t TOCR1;
    volatile uint8_t TOCR2;
    volatile uint16_t TCNT_3;
    volatile uint16_t TCNT_4;
    volatile uint16_t TCDR;
    volatile uint16_t TDDR;
    volatile uint16_t TGRA_3;
    volatile uint16_t TGRB_3;
    volatile uint16_t TGRA_4;
    volatile uint16_t TGRB_4;
    volatile uint16_t TCNTS;
    volatile uint16_t TCBR;
    volatile uint16_t TGRC_3;
    volatile uint16_t TGRD_3;
    volatile uint16_t TGRC_4;
    volatile uint16_t TGRD_4;
    volatile uint8_t TSR_3;
    volatile uint8_t TSR_4;
    volatile uint8_t dummy523[2];
    volatile uint8_t TITCR;
    volatile uint8_t TITCNT;
    volatile uint8_t TBTER;
    volatile uint8_t dummy524[1];
    volatile uint8_t TDER;
    volatile uint8_t dummy525[1];
    volatile uint8_t TOLBR;
    volatile uint8_t dummy526[1];
    volatile uint8_t TBTM_3;
    volatile uint8_t TBTM_4;
    volatile uint8_t dummy527[6];
    volatile uint16_t TADCR;
    volatile uint8_t dummy528[2];
    volatile uint16_t TADCORA_4;
    volatile uint16_t TADCORB_4;
    volatile uint16_t TADCOBRA_4;
    volatile uint16_t TADCOBRB_4;
    volatile uint8_t dummy529[20];
    volatile uint8_t TWCR;
    volatile uint8_t dummy530[31];
    volatile uint8_t TSTR;
    volatile uint8_t TSYR;
    volatile uint8_t dummy531[2];
    volatile uint8_t TRWER;
    volatile uint8_t dummy532[123];
    volatile uint8_t TCR_0;
    volatile uint8_t TMDR_0;
    volatile uint8_t TIORH_0;
    volatile uint8_t TIORL_0;
    volatile uint8_t TIER_0;
    volatile uint8_t TSR_0;
    volatile uint16_t TCNT_0;
    volatile uint16_t TGRA_0;
    volatile uint16_t TGRB_0;
    volatile uint16_t TGRC_0;
    volatile uint16_t TGRD_0;
    volatile uint8_t dummy533[16];
    volatile uint16_t TGRE_0;
    volatile uint16_t TGRF_0;
    volatile uint8_t TIER2_0;
    volatile uint8_t TSR2_0;
    volatile uint8_t TBTM_0;
    volatile uint8_t dummy534[89];
    volatile uint8_t TCR_1;
    volatile uint8_t TMDR_1;
    volatile uint8_t TIOR_1;
    volatile uint8_t dummy535[1];
    volatile uint8_t TIER_1;
    volatile uint8_t TSR_1;
    volatile uint16_t TCNT_1;
    volatile uint16_t TGRA_1;
    volatile uint16_t TGRB_1;
    volatile uint8_t dummy536[4];
    volatile uint8_t TICCR;
} r_io_mtu2_t;
/*  57 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ostm_iodefine.h" 1 */
/*  67 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ostm_iodefine.h" */
typedef struct st_ostm
{

    volatile uint32_t OSTMnCMP;
    volatile uint32_t OSTMnCNT;
    volatile uint8_t dummy1[8];
    volatile uint8_t OSTMnTE;
    volatile uint8_t dummy2[3];
    volatile uint8_t OSTMnTS;
    volatile uint8_t dummy3[3];
    volatile uint8_t OSTMnTT;
    volatile uint8_t dummy4[7];
    volatile uint8_t OSTMnCTL;
} r_io_ostm_t;
/*  58 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/pfv_iodefine.h" 1 */
/*  118 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/pfv_iodefine.h" */
typedef struct st_pfv
{

    volatile uint32_t PFVCR;
    volatile uint32_t PFVICR;
    volatile uint32_t PFVISR;
    volatile uint8_t dummy1[20];


    volatile uint32_t PFVID0;
    volatile uint32_t PFVID1;
    volatile uint32_t PFVID2;
    volatile uint32_t PFVID3;
    volatile uint32_t PFVID4;
    volatile uint32_t PFVID5;
    volatile uint32_t PFVID6;
    volatile uint32_t PFVID7;


    volatile uint32_t PFVOD0;
    volatile uint32_t PFVOD1;
    volatile uint32_t PFVOD2;
    volatile uint32_t PFVOD3;
    volatile uint32_t PFVOD4;
    volatile uint32_t PFVOD5;
    volatile uint32_t PFVOD6;
    volatile uint32_t PFVOD7;
    volatile uint8_t dummy2[4];
    volatile uint32_t PFVIFSR;
    volatile uint32_t PFVOFSR;
    volatile uint32_t PFVACR;
    volatile uint32_t PFV_MTX_MODE;
    volatile uint32_t PFV_MTX_YG_ADJ0;
    volatile uint32_t PFV_MTX_YG_ADJ1;
    volatile uint32_t PFV_MTX_CBB_ADJ0;
    volatile uint32_t PFV_MTX_CBB_ADJ1;
    volatile uint32_t PFV_MTX_CRR_ADJ0;
    volatile uint32_t PFV_MTX_CRR_ADJ1;
    volatile uint32_t PFVSZR;
} r_io_pfv_t;
/*  59 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/pwm_iodefine.h" 1 */
/*  71 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/pwm_iodefine.h" */
typedef struct st_pwm
{

    volatile uint8_t dummy559[2];
    volatile uint8_t PWBTCR;
    volatile uint8_t dummy560[217];


    volatile uint8_t PWCR_1;
    volatile uint8_t dummy561[3];
    volatile uint8_t PWPR_1;
    volatile uint8_t dummy562[1];
    volatile uint16_t PWCYR_1;
    volatile uint16_t PWBFR_1A;
    volatile uint16_t PWBFR_1C;
    volatile uint16_t PWBFR_1E;
    volatile uint16_t PWBFR_1G;




    volatile uint8_t PWCR_2;
    volatile uint8_t dummy563[3];
    volatile uint8_t PWPR_2;
    volatile uint8_t dummy564[1];
    volatile uint16_t PWCYR_2;
    volatile uint16_t PWBFR_2A;
    volatile uint16_t PWBFR_2C;
    volatile uint16_t PWBFR_2E;
    volatile uint16_t PWBFR_2G;


} r_io_pwm_t;


typedef struct st_pwm_common
{

    volatile uint8_t PWCR_1;
    volatile uint8_t dummy562[3];
    volatile uint8_t PWPR_1;
    volatile uint8_t dummy563[1];
    volatile uint16_t PWCYR_1;
    volatile uint16_t PWBFR_1A;
    volatile uint16_t PWBFR_1C;
    volatile uint16_t PWBFR_1E;
    volatile uint16_t PWBFR_1G;
} r_io_pwm_common_t;
/*  60 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/riic_iodefine.h" 1 */
/*  538 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/riic_iodefine.h" */
typedef struct st_riic
{



    union iodefine_reg32_t RIICnCR1;
    union iodefine_reg32_t RIICnCR2;


    union iodefine_reg32_t RIICnMR1;
    union iodefine_reg32_t RIICnMR2;
    union iodefine_reg32_t RIICnMR3;
    union iodefine_reg32_t RIICnFER;
    union iodefine_reg32_t RIICnSER;
    union iodefine_reg32_t RIICnIER;


    union iodefine_reg32_t RIICnSR1;
    union iodefine_reg32_t RIICnSR2;


    union iodefine_reg32_t RIICnSAR0;
    union iodefine_reg32_t RIICnSAR1;
    union iodefine_reg32_t RIICnSAR2;
    union iodefine_reg32_t RIICnBRL;
    union iodefine_reg32_t RIICnBRH;
    union iodefine_reg32_t RIICnDRT;
    union iodefine_reg32_t RIICnDRR;

} r_io_riic_t;
/*  61 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/romdec_iodefine.h" 1 */
/*  104 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/romdec_iodefine.h" */
typedef struct st_romdec
{

    volatile uint8_t CROMEN;
    volatile uint8_t CROMSY0;


    volatile uint8_t CROMCTL0;
    volatile uint8_t CROMCTL1;
    volatile uint8_t dummy23[1];
    volatile uint8_t CROMCTL3;
    volatile uint8_t CROMCTL4;
    volatile uint8_t CROMCTL5;


    volatile uint8_t CROMST0;
    volatile uint8_t CROMST1;
    volatile uint8_t dummy24[1];
    volatile uint8_t CROMST3;
    volatile uint8_t CROMST4;
    volatile uint8_t CROMST5;
    volatile uint8_t CROMST6;
    volatile uint8_t dummy25[5];


    volatile uint8_t CBUFST0;
    volatile uint8_t CBUFST1;
    volatile uint8_t CBUFST2;
    volatile uint8_t dummy26[1];


    volatile uint8_t HEAD00;
    volatile uint8_t HEAD01;
    volatile uint8_t HEAD02;
    volatile uint8_t HEAD03;


    volatile uint8_t SHEAD00;
    volatile uint8_t SHEAD01;
    volatile uint8_t SHEAD02;
    volatile uint8_t SHEAD03;
    volatile uint8_t SHEAD04;
    volatile uint8_t SHEAD05;
    volatile uint8_t SHEAD06;
    volatile uint8_t SHEAD07;


    volatile uint8_t HEAD20;
    volatile uint8_t HEAD21;
    volatile uint8_t HEAD22;
    volatile uint8_t HEAD23;


    volatile uint8_t SHEAD20;
    volatile uint8_t SHEAD21;
    volatile uint8_t SHEAD22;
    volatile uint8_t SHEAD23;
    volatile uint8_t SHEAD24;
    volatile uint8_t SHEAD25;
    volatile uint8_t SHEAD26;
    volatile uint8_t SHEAD27;
    volatile uint8_t dummy27[16];


    volatile uint8_t CBUFCTL0;
    volatile uint8_t CBUFCTL1;
    volatile uint8_t CBUFCTL2;
    volatile uint8_t CBUFCTL3;
    volatile uint8_t dummy28[1];
    volatile uint8_t CROMST0M;
    volatile uint8_t dummy29[186];
    volatile uint8_t ROMDECRST;
    volatile uint8_t RSTSTAT;
    volatile uint8_t SSI;
    volatile uint8_t dummy30[5];
    volatile uint8_t INTHOLD;
    volatile uint8_t INHINT;
    volatile uint8_t dummy31[246];


    volatile uint16_t STRMDIN0;
    volatile uint16_t STRMDIN2;
    volatile uint16_t STRMDOUT0;
} r_io_romdec_t;
/*  62 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/rscan0_iodefine.h" 1 */
/*  7205 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/rscan0_iodefine.h" */
typedef struct st_rscan0
{



    union iodefine_reg32_t C0CFG;
    union iodefine_reg32_t C0CTR;
    union iodefine_reg32_t C0STS;
    union iodefine_reg32_t C0ERFL;




    union iodefine_reg32_t C1CFG;
    union iodefine_reg32_t C1CTR;
    union iodefine_reg32_t C1STS;
    union iodefine_reg32_t C1ERFL;




    union iodefine_reg32_t C2CFG;
    union iodefine_reg32_t C2CTR;
    union iodefine_reg32_t C2STS;
    union iodefine_reg32_t C2ERFL;




    union iodefine_reg32_t C3CFG;
    union iodefine_reg32_t C3CTR;
    union iodefine_reg32_t C3STS;
    union iodefine_reg32_t C3ERFL;




    union iodefine_reg32_t C4CFG;
    union iodefine_reg32_t C4CTR;
    union iodefine_reg32_t C4STS;
    union iodefine_reg32_t C4ERFL;



    volatile uint8_t dummy159[52];
    union iodefine_reg32_t GCFG;
    union iodefine_reg32_t GCTR;
    union iodefine_reg32_t GSTS;
    union iodefine_reg32_t GERFL;
    union iodefine_reg32_16_t GTSC;
    union iodefine_reg32_t GAFLECTR;


    union iodefine_reg32_t GAFLCFG0;
    union iodefine_reg32_t GAFLCFG1;
    union iodefine_reg32_t RMNB;


    union iodefine_reg32_t RMND0;
    union iodefine_reg32_t RMND1;
    union iodefine_reg32_t RMND2;

    volatile uint8_t dummy160[4];


    union iodefine_reg32_t RFCC0;
    union iodefine_reg32_t RFCC1;
    union iodefine_reg32_t RFCC2;
    union iodefine_reg32_t RFCC3;
    union iodefine_reg32_t RFCC4;
    union iodefine_reg32_t RFCC5;
    union iodefine_reg32_t RFCC6;
    union iodefine_reg32_t RFCC7;


    union iodefine_reg32_t RFSTS0;
    union iodefine_reg32_t RFSTS1;
    union iodefine_reg32_t RFSTS2;
    union iodefine_reg32_t RFSTS3;
    union iodefine_reg32_t RFSTS4;
    union iodefine_reg32_t RFSTS5;
    union iodefine_reg32_t RFSTS6;
    union iodefine_reg32_t RFSTS7;


    union iodefine_reg32_t RFPCTR0;
    union iodefine_reg32_t RFPCTR1;
    union iodefine_reg32_t RFPCTR2;
    union iodefine_reg32_t RFPCTR3;
    union iodefine_reg32_t RFPCTR4;
    union iodefine_reg32_t RFPCTR5;
    union iodefine_reg32_t RFPCTR6;
    union iodefine_reg32_t RFPCTR7;


    union iodefine_reg32_t CFCC0;
    union iodefine_reg32_t CFCC1;
    union iodefine_reg32_t CFCC2;
    union iodefine_reg32_t CFCC3;
    union iodefine_reg32_t CFCC4;
    union iodefine_reg32_t CFCC5;
    union iodefine_reg32_t CFCC6;
    union iodefine_reg32_t CFCC7;
    union iodefine_reg32_t CFCC8;
    union iodefine_reg32_t CFCC9;
    union iodefine_reg32_t CFCC10;
    union iodefine_reg32_t CFCC11;
    union iodefine_reg32_t CFCC12;
    union iodefine_reg32_t CFCC13;
    union iodefine_reg32_t CFCC14;

    volatile uint8_t dummy161[36];


    union iodefine_reg32_t CFSTS0;
    union iodefine_reg32_t CFSTS1;
    union iodefine_reg32_t CFSTS2;
    union iodefine_reg32_t CFSTS3;
    union iodefine_reg32_t CFSTS4;
    union iodefine_reg32_t CFSTS5;
    union iodefine_reg32_t CFSTS6;
    union iodefine_reg32_t CFSTS7;
    union iodefine_reg32_t CFSTS8;
    union iodefine_reg32_t CFSTS9;
    union iodefine_reg32_t CFSTS10;
    union iodefine_reg32_t CFSTS11;
    union iodefine_reg32_t CFSTS12;
    union iodefine_reg32_t CFSTS13;
    union iodefine_reg32_t CFSTS14;

    volatile uint8_t dummy162[36];


    union iodefine_reg32_t CFPCTR0;
    union iodefine_reg32_t CFPCTR1;
    union iodefine_reg32_t CFPCTR2;
    union iodefine_reg32_t CFPCTR3;
    union iodefine_reg32_t CFPCTR4;
    union iodefine_reg32_t CFPCTR5;
    union iodefine_reg32_t CFPCTR6;
    union iodefine_reg32_t CFPCTR7;
    union iodefine_reg32_t CFPCTR8;
    union iodefine_reg32_t CFPCTR9;
    union iodefine_reg32_t CFPCTR10;
    union iodefine_reg32_t CFPCTR11;
    union iodefine_reg32_t CFPCTR12;
    union iodefine_reg32_t CFPCTR13;
    union iodefine_reg32_t CFPCTR14;

    volatile uint8_t dummy163[36];
    union iodefine_reg32_t FESTS;
    union iodefine_reg32_t FFSTS;
    union iodefine_reg32_t FMSTS;
    union iodefine_reg32_t RFISTS;
    union iodefine_reg32_t CFRISTS;
    union iodefine_reg32_t CFTISTS;



    volatile uint8_t TMC0;
    volatile uint8_t TMC1;
    volatile uint8_t TMC2;
    volatile uint8_t TMC3;
    volatile uint8_t TMC4;
    volatile uint8_t TMC5;
    volatile uint8_t TMC6;
    volatile uint8_t TMC7;
    volatile uint8_t TMC8;
    volatile uint8_t TMC9;
    volatile uint8_t TMC10;
    volatile uint8_t TMC11;
    volatile uint8_t TMC12;
    volatile uint8_t TMC13;
    volatile uint8_t TMC14;
    volatile uint8_t TMC15;
    volatile uint8_t TMC16;
    volatile uint8_t TMC17;
    volatile uint8_t TMC18;
    volatile uint8_t TMC19;
    volatile uint8_t TMC20;
    volatile uint8_t TMC21;
    volatile uint8_t TMC22;
    volatile uint8_t TMC23;
    volatile uint8_t TMC24;
    volatile uint8_t TMC25;
    volatile uint8_t TMC26;
    volatile uint8_t TMC27;
    volatile uint8_t TMC28;
    volatile uint8_t TMC29;
    volatile uint8_t TMC30;
    volatile uint8_t TMC31;
    volatile uint8_t TMC32;
    volatile uint8_t TMC33;
    volatile uint8_t TMC34;
    volatile uint8_t TMC35;
    volatile uint8_t TMC36;
    volatile uint8_t TMC37;
    volatile uint8_t TMC38;
    volatile uint8_t TMC39;
    volatile uint8_t TMC40;
    volatile uint8_t TMC41;
    volatile uint8_t TMC42;
    volatile uint8_t TMC43;
    volatile uint8_t TMC44;
    volatile uint8_t TMC45;
    volatile uint8_t TMC46;
    volatile uint8_t TMC47;
    volatile uint8_t TMC48;
    volatile uint8_t TMC49;
    volatile uint8_t TMC50;
    volatile uint8_t TMC51;
    volatile uint8_t TMC52;
    volatile uint8_t TMC53;
    volatile uint8_t TMC54;
    volatile uint8_t TMC55;
    volatile uint8_t TMC56;
    volatile uint8_t TMC57;
    volatile uint8_t TMC58;
    volatile uint8_t TMC59;
    volatile uint8_t TMC60;
    volatile uint8_t TMC61;
    volatile uint8_t TMC62;
    volatile uint8_t TMC63;
    volatile uint8_t TMC64;
    volatile uint8_t TMC65;
    volatile uint8_t TMC66;
    volatile uint8_t TMC67;
    volatile uint8_t TMC68;
    volatile uint8_t TMC69;
    volatile uint8_t TMC70;
    volatile uint8_t TMC71;
    volatile uint8_t TMC72;
    volatile uint8_t TMC73;
    volatile uint8_t TMC74;
    volatile uint8_t TMC75;
    volatile uint8_t TMC76;
    volatile uint8_t TMC77;
    volatile uint8_t TMC78;
    volatile uint8_t TMC79;
    volatile uint8_t dummy164[48];


    volatile uint8_t TMSTS0;
    volatile uint8_t TMSTS1;
    volatile uint8_t TMSTS2;
    volatile uint8_t TMSTS3;
    volatile uint8_t TMSTS4;
    volatile uint8_t TMSTS5;
    volatile uint8_t TMSTS6;
    volatile uint8_t TMSTS7;
    volatile uint8_t TMSTS8;
    volatile uint8_t TMSTS9;
    volatile uint8_t TMSTS10;
    volatile uint8_t TMSTS11;
    volatile uint8_t TMSTS12;
    volatile uint8_t TMSTS13;
    volatile uint8_t TMSTS14;
    volatile uint8_t TMSTS15;
    volatile uint8_t TMSTS16;
    volatile uint8_t TMSTS17;
    volatile uint8_t TMSTS18;
    volatile uint8_t TMSTS19;
    volatile uint8_t TMSTS20;
    volatile uint8_t TMSTS21;
    volatile uint8_t TMSTS22;
    volatile uint8_t TMSTS23;
    volatile uint8_t TMSTS24;
    volatile uint8_t TMSTS25;
    volatile uint8_t TMSTS26;
    volatile uint8_t TMSTS27;
    volatile uint8_t TMSTS28;
    volatile uint8_t TMSTS29;
    volatile uint8_t TMSTS30;
    volatile uint8_t TMSTS31;
    volatile uint8_t TMSTS32;
    volatile uint8_t TMSTS33;
    volatile uint8_t TMSTS34;
    volatile uint8_t TMSTS35;
    volatile uint8_t TMSTS36;
    volatile uint8_t TMSTS37;
    volatile uint8_t TMSTS38;
    volatile uint8_t TMSTS39;
    volatile uint8_t TMSTS40;
    volatile uint8_t TMSTS41;
    volatile uint8_t TMSTS42;
    volatile uint8_t TMSTS43;
    volatile uint8_t TMSTS44;
    volatile uint8_t TMSTS45;
    volatile uint8_t TMSTS46;
    volatile uint8_t TMSTS47;
    volatile uint8_t TMSTS48;
    volatile uint8_t TMSTS49;
    volatile uint8_t TMSTS50;
    volatile uint8_t TMSTS51;
    volatile uint8_t TMSTS52;
    volatile uint8_t TMSTS53;
    volatile uint8_t TMSTS54;
    volatile uint8_t TMSTS55;
    volatile uint8_t TMSTS56;
    volatile uint8_t TMSTS57;
    volatile uint8_t TMSTS58;
    volatile uint8_t TMSTS59;
    volatile uint8_t TMSTS60;
    volatile uint8_t TMSTS61;
    volatile uint8_t TMSTS62;
    volatile uint8_t TMSTS63;
    volatile uint8_t TMSTS64;
    volatile uint8_t TMSTS65;
    volatile uint8_t TMSTS66;
    volatile uint8_t TMSTS67;
    volatile uint8_t TMSTS68;
    volatile uint8_t TMSTS69;
    volatile uint8_t TMSTS70;
    volatile uint8_t TMSTS71;
    volatile uint8_t TMSTS72;
    volatile uint8_t TMSTS73;
    volatile uint8_t TMSTS74;
    volatile uint8_t TMSTS75;
    volatile uint8_t TMSTS76;
    volatile uint8_t TMSTS77;
    volatile uint8_t TMSTS78;
    volatile uint8_t TMSTS79;
    volatile uint8_t dummy165[48];


    union iodefine_reg32_t TMTRSTS0;
    union iodefine_reg32_t TMTRSTS1;
    union iodefine_reg32_t TMTRSTS2;

    volatile uint8_t dummy166[4];


    union iodefine_reg32_t TMTARSTS0;
    union iodefine_reg32_t TMTARSTS1;
    union iodefine_reg32_t TMTARSTS2;

    volatile uint8_t dummy167[4];


    union iodefine_reg32_t TMTCSTS0;
    union iodefine_reg32_t TMTCSTS1;
    union iodefine_reg32_t TMTCSTS2;

    volatile uint8_t dummy168[4];


    union iodefine_reg32_t TMTASTS0;
    union iodefine_reg32_t TMTASTS1;
    union iodefine_reg32_t TMTASTS2;

    volatile uint8_t dummy169[4];


    union iodefine_reg32_t TMIEC0;
    union iodefine_reg32_t TMIEC1;
    union iodefine_reg32_t TMIEC2;

    volatile uint8_t dummy170[4];


    union iodefine_reg32_t TXQCC0;
    union iodefine_reg32_t TXQCC1;
    union iodefine_reg32_t TXQCC2;
    union iodefine_reg32_t TXQCC3;
    union iodefine_reg32_t TXQCC4;

    volatile uint8_t dummy171[12];


    union iodefine_reg32_t TXQSTS0;
    union iodefine_reg32_t TXQSTS1;
    union iodefine_reg32_t TXQSTS2;
    union iodefine_reg32_t TXQSTS3;
    union iodefine_reg32_t TXQSTS4;

    volatile uint8_t dummy172[12];


    union iodefine_reg32_t TXQPCTR0;
    union iodefine_reg32_t TXQPCTR1;
    union iodefine_reg32_t TXQPCTR2;
    union iodefine_reg32_t TXQPCTR3;
    union iodefine_reg32_t TXQPCTR4;

    volatile uint8_t dummy173[12];


    union iodefine_reg32_t THLCC0;
    union iodefine_reg32_t THLCC1;
    union iodefine_reg32_t THLCC2;
    union iodefine_reg32_t THLCC3;
    union iodefine_reg32_t THLCC4;

    volatile uint8_t dummy174[12];


    union iodefine_reg32_t THLSTS0;
    union iodefine_reg32_t THLSTS1;
    union iodefine_reg32_t THLSTS2;
    union iodefine_reg32_t THLSTS3;
    union iodefine_reg32_t THLSTS4;

    volatile uint8_t dummy175[12];


    union iodefine_reg32_t THLPCTR0;
    union iodefine_reg32_t THLPCTR1;
    union iodefine_reg32_t THLPCTR2;
    union iodefine_reg32_t THLPCTR3;
    union iodefine_reg32_t THLPCTR4;

    volatile uint8_t dummy176[12];


    union iodefine_reg32_t GTINTSTS0;
    union iodefine_reg32_t GTINTSTS1;
    union iodefine_reg32_t GTSTCFG;
    union iodefine_reg32_t GTSTCTR;

    volatile uint8_t dummy177[12];
    union iodefine_reg32_16_t GLOCKK;

    volatile uint8_t dummy178[128];


    union iodefine_reg32_t GAFLID0;
    union iodefine_reg32_t GAFLM0;
    union iodefine_reg32_t GAFLP00;
    union iodefine_reg32_t GAFLP10;




    union iodefine_reg32_t GAFLID1;
    union iodefine_reg32_t GAFLM1;
    union iodefine_reg32_t GAFLP01;
    union iodefine_reg32_t GAFLP11;




    union iodefine_reg32_t GAFLID2;
    union iodefine_reg32_t GAFLM2;
    union iodefine_reg32_t GAFLP02;
    union iodefine_reg32_t GAFLP12;




    union iodefine_reg32_t GAFLID3;
    union iodefine_reg32_t GAFLM3;
    union iodefine_reg32_t GAFLP03;
    union iodefine_reg32_t GAFLP13;




    union iodefine_reg32_t GAFLID4;
    union iodefine_reg32_t GAFLM4;
    union iodefine_reg32_t GAFLP04;
    union iodefine_reg32_t GAFLP14;




    union iodefine_reg32_t GAFLID5;
    union iodefine_reg32_t GAFLM5;
    union iodefine_reg32_t GAFLP05;
    union iodefine_reg32_t GAFLP15;




    union iodefine_reg32_t GAFLID6;
    union iodefine_reg32_t GAFLM6;
    union iodefine_reg32_t GAFLP06;
    union iodefine_reg32_t GAFLP16;




    union iodefine_reg32_t GAFLID7;
    union iodefine_reg32_t GAFLM7;
    union iodefine_reg32_t GAFLP07;
    union iodefine_reg32_t GAFLP17;




    union iodefine_reg32_t GAFLID8;
    union iodefine_reg32_t GAFLM8;
    union iodefine_reg32_t GAFLP08;
    union iodefine_reg32_t GAFLP18;




    union iodefine_reg32_t GAFLID9;
    union iodefine_reg32_t GAFLM9;
    union iodefine_reg32_t GAFLP09;
    union iodefine_reg32_t GAFLP19;




    union iodefine_reg32_t GAFLID10;
    union iodefine_reg32_t GAFLM10;
    union iodefine_reg32_t GAFLP010;
    union iodefine_reg32_t GAFLP110;




    union iodefine_reg32_t GAFLID11;
    union iodefine_reg32_t GAFLM11;
    union iodefine_reg32_t GAFLP011;
    union iodefine_reg32_t GAFLP111;




    union iodefine_reg32_t GAFLID12;
    union iodefine_reg32_t GAFLM12;
    union iodefine_reg32_t GAFLP012;
    union iodefine_reg32_t GAFLP112;




    union iodefine_reg32_t GAFLID13;
    union iodefine_reg32_t GAFLM13;
    union iodefine_reg32_t GAFLP013;
    union iodefine_reg32_t GAFLP113;




    union iodefine_reg32_t GAFLID14;
    union iodefine_reg32_t GAFLM14;
    union iodefine_reg32_t GAFLP014;
    union iodefine_reg32_t GAFLP114;




    union iodefine_reg32_t GAFLID15;
    union iodefine_reg32_t GAFLM15;
    union iodefine_reg32_t GAFLP015;
    union iodefine_reg32_t GAFLP115;




    union iodefine_reg32_t RMID0;
    union iodefine_reg32_t RMPTR0;
    union iodefine_reg32_t RMDF00;
    union iodefine_reg32_t RMDF10;




    union iodefine_reg32_t RMID1;
    union iodefine_reg32_t RMPTR1;
    union iodefine_reg32_t RMDF01;
    union iodefine_reg32_t RMDF11;




    union iodefine_reg32_t RMID2;
    union iodefine_reg32_t RMPTR2;
    union iodefine_reg32_t RMDF02;
    union iodefine_reg32_t RMDF12;




    union iodefine_reg32_t RMID3;
    union iodefine_reg32_t RMPTR3;
    union iodefine_reg32_t RMDF03;
    union iodefine_reg32_t RMDF13;




    union iodefine_reg32_t RMID4;
    union iodefine_reg32_t RMPTR4;
    union iodefine_reg32_t RMDF04;
    union iodefine_reg32_t RMDF14;




    union iodefine_reg32_t RMID5;
    union iodefine_reg32_t RMPTR5;
    union iodefine_reg32_t RMDF05;
    union iodefine_reg32_t RMDF15;




    union iodefine_reg32_t RMID6;
    union iodefine_reg32_t RMPTR6;
    union iodefine_reg32_t RMDF06;
    union iodefine_reg32_t RMDF16;




    union iodefine_reg32_t RMID7;
    union iodefine_reg32_t RMPTR7;
    union iodefine_reg32_t RMDF07;
    union iodefine_reg32_t RMDF17;




    union iodefine_reg32_t RMID8;
    union iodefine_reg32_t RMPTR8;
    union iodefine_reg32_t RMDF08;
    union iodefine_reg32_t RMDF18;




    union iodefine_reg32_t RMID9;
    union iodefine_reg32_t RMPTR9;
    union iodefine_reg32_t RMDF09;
    union iodefine_reg32_t RMDF19;




    union iodefine_reg32_t RMID10;
    union iodefine_reg32_t RMPTR10;
    union iodefine_reg32_t RMDF010;
    union iodefine_reg32_t RMDF110;




    union iodefine_reg32_t RMID11;
    union iodefine_reg32_t RMPTR11;
    union iodefine_reg32_t RMDF011;
    union iodefine_reg32_t RMDF111;




    union iodefine_reg32_t RMID12;
    union iodefine_reg32_t RMPTR12;
    union iodefine_reg32_t RMDF012;
    union iodefine_reg32_t RMDF112;




    union iodefine_reg32_t RMID13;
    union iodefine_reg32_t RMPTR13;
    union iodefine_reg32_t RMDF013;
    union iodefine_reg32_t RMDF113;




    union iodefine_reg32_t RMID14;
    union iodefine_reg32_t RMPTR14;
    union iodefine_reg32_t RMDF014;
    union iodefine_reg32_t RMDF114;




    union iodefine_reg32_t RMID15;
    union iodefine_reg32_t RMPTR15;
    union iodefine_reg32_t RMDF015;
    union iodefine_reg32_t RMDF115;




    union iodefine_reg32_t RMID16;
    union iodefine_reg32_t RMPTR16;
    union iodefine_reg32_t RMDF016;
    union iodefine_reg32_t RMDF116;




    union iodefine_reg32_t RMID17;
    union iodefine_reg32_t RMPTR17;
    union iodefine_reg32_t RMDF017;
    union iodefine_reg32_t RMDF117;




    union iodefine_reg32_t RMID18;
    union iodefine_reg32_t RMPTR18;
    union iodefine_reg32_t RMDF018;
    union iodefine_reg32_t RMDF118;




    union iodefine_reg32_t RMID19;
    union iodefine_reg32_t RMPTR19;
    union iodefine_reg32_t RMDF019;
    union iodefine_reg32_t RMDF119;




    union iodefine_reg32_t RMID20;
    union iodefine_reg32_t RMPTR20;
    union iodefine_reg32_t RMDF020;
    union iodefine_reg32_t RMDF120;




    union iodefine_reg32_t RMID21;
    union iodefine_reg32_t RMPTR21;
    union iodefine_reg32_t RMDF021;
    union iodefine_reg32_t RMDF121;




    union iodefine_reg32_t RMID22;
    union iodefine_reg32_t RMPTR22;
    union iodefine_reg32_t RMDF022;
    union iodefine_reg32_t RMDF122;




    union iodefine_reg32_t RMID23;
    union iodefine_reg32_t RMPTR23;
    union iodefine_reg32_t RMDF023;
    union iodefine_reg32_t RMDF123;




    union iodefine_reg32_t RMID24;
    union iodefine_reg32_t RMPTR24;
    union iodefine_reg32_t RMDF024;
    union iodefine_reg32_t RMDF124;




    union iodefine_reg32_t RMID25;
    union iodefine_reg32_t RMPTR25;
    union iodefine_reg32_t RMDF025;
    union iodefine_reg32_t RMDF125;




    union iodefine_reg32_t RMID26;
    union iodefine_reg32_t RMPTR26;
    union iodefine_reg32_t RMDF026;
    union iodefine_reg32_t RMDF126;




    union iodefine_reg32_t RMID27;
    union iodefine_reg32_t RMPTR27;
    union iodefine_reg32_t RMDF027;
    union iodefine_reg32_t RMDF127;




    union iodefine_reg32_t RMID28;
    union iodefine_reg32_t RMPTR28;
    union iodefine_reg32_t RMDF028;
    union iodefine_reg32_t RMDF128;




    union iodefine_reg32_t RMID29;
    union iodefine_reg32_t RMPTR29;
    union iodefine_reg32_t RMDF029;
    union iodefine_reg32_t RMDF129;




    union iodefine_reg32_t RMID30;
    union iodefine_reg32_t RMPTR30;
    union iodefine_reg32_t RMDF030;
    union iodefine_reg32_t RMDF130;




    union iodefine_reg32_t RMID31;
    union iodefine_reg32_t RMPTR31;
    union iodefine_reg32_t RMDF031;
    union iodefine_reg32_t RMDF131;




    union iodefine_reg32_t RMID32;
    union iodefine_reg32_t RMPTR32;
    union iodefine_reg32_t RMDF032;
    union iodefine_reg32_t RMDF132;




    union iodefine_reg32_t RMID33;
    union iodefine_reg32_t RMPTR33;
    union iodefine_reg32_t RMDF033;
    union iodefine_reg32_t RMDF133;




    union iodefine_reg32_t RMID34;
    union iodefine_reg32_t RMPTR34;
    union iodefine_reg32_t RMDF034;
    union iodefine_reg32_t RMDF134;




    union iodefine_reg32_t RMID35;
    union iodefine_reg32_t RMPTR35;
    union iodefine_reg32_t RMDF035;
    union iodefine_reg32_t RMDF135;




    union iodefine_reg32_t RMID36;
    union iodefine_reg32_t RMPTR36;
    union iodefine_reg32_t RMDF036;
    union iodefine_reg32_t RMDF136;




    union iodefine_reg32_t RMID37;
    union iodefine_reg32_t RMPTR37;
    union iodefine_reg32_t RMDF037;
    union iodefine_reg32_t RMDF137;




    union iodefine_reg32_t RMID38;
    union iodefine_reg32_t RMPTR38;
    union iodefine_reg32_t RMDF038;
    union iodefine_reg32_t RMDF138;




    union iodefine_reg32_t RMID39;
    union iodefine_reg32_t RMPTR39;
    union iodefine_reg32_t RMDF039;
    union iodefine_reg32_t RMDF139;




    union iodefine_reg32_t RMID40;
    union iodefine_reg32_t RMPTR40;
    union iodefine_reg32_t RMDF040;
    union iodefine_reg32_t RMDF140;




    union iodefine_reg32_t RMID41;
    union iodefine_reg32_t RMPTR41;
    union iodefine_reg32_t RMDF041;
    union iodefine_reg32_t RMDF141;




    union iodefine_reg32_t RMID42;
    union iodefine_reg32_t RMPTR42;
    union iodefine_reg32_t RMDF042;
    union iodefine_reg32_t RMDF142;




    union iodefine_reg32_t RMID43;
    union iodefine_reg32_t RMPTR43;
    union iodefine_reg32_t RMDF043;
    union iodefine_reg32_t RMDF143;




    union iodefine_reg32_t RMID44;
    union iodefine_reg32_t RMPTR44;
    union iodefine_reg32_t RMDF044;
    union iodefine_reg32_t RMDF144;




    union iodefine_reg32_t RMID45;
    union iodefine_reg32_t RMPTR45;
    union iodefine_reg32_t RMDF045;
    union iodefine_reg32_t RMDF145;




    union iodefine_reg32_t RMID46;
    union iodefine_reg32_t RMPTR46;
    union iodefine_reg32_t RMDF046;
    union iodefine_reg32_t RMDF146;




    union iodefine_reg32_t RMID47;
    union iodefine_reg32_t RMPTR47;
    union iodefine_reg32_t RMDF047;
    union iodefine_reg32_t RMDF147;




    union iodefine_reg32_t RMID48;
    union iodefine_reg32_t RMPTR48;
    union iodefine_reg32_t RMDF048;
    union iodefine_reg32_t RMDF148;




    union iodefine_reg32_t RMID49;
    union iodefine_reg32_t RMPTR49;
    union iodefine_reg32_t RMDF049;
    union iodefine_reg32_t RMDF149;




    union iodefine_reg32_t RMID50;
    union iodefine_reg32_t RMPTR50;
    union iodefine_reg32_t RMDF050;
    union iodefine_reg32_t RMDF150;




    union iodefine_reg32_t RMID51;
    union iodefine_reg32_t RMPTR51;
    union iodefine_reg32_t RMDF051;
    union iodefine_reg32_t RMDF151;




    union iodefine_reg32_t RMID52;
    union iodefine_reg32_t RMPTR52;
    union iodefine_reg32_t RMDF052;
    union iodefine_reg32_t RMDF152;




    union iodefine_reg32_t RMID53;
    union iodefine_reg32_t RMPTR53;
    union iodefine_reg32_t RMDF053;
    union iodefine_reg32_t RMDF153;




    union iodefine_reg32_t RMID54;
    union iodefine_reg32_t RMPTR54;
    union iodefine_reg32_t RMDF054;
    union iodefine_reg32_t RMDF154;




    union iodefine_reg32_t RMID55;
    union iodefine_reg32_t RMPTR55;
    union iodefine_reg32_t RMDF055;
    union iodefine_reg32_t RMDF155;




    union iodefine_reg32_t RMID56;
    union iodefine_reg32_t RMPTR56;
    union iodefine_reg32_t RMDF056;
    union iodefine_reg32_t RMDF156;




    union iodefine_reg32_t RMID57;
    union iodefine_reg32_t RMPTR57;
    union iodefine_reg32_t RMDF057;
    union iodefine_reg32_t RMDF157;




    union iodefine_reg32_t RMID58;
    union iodefine_reg32_t RMPTR58;
    union iodefine_reg32_t RMDF058;
    union iodefine_reg32_t RMDF158;




    union iodefine_reg32_t RMID59;
    union iodefine_reg32_t RMPTR59;
    union iodefine_reg32_t RMDF059;
    union iodefine_reg32_t RMDF159;




    union iodefine_reg32_t RMID60;
    union iodefine_reg32_t RMPTR60;
    union iodefine_reg32_t RMDF060;
    union iodefine_reg32_t RMDF160;




    union iodefine_reg32_t RMID61;
    union iodefine_reg32_t RMPTR61;
    union iodefine_reg32_t RMDF061;
    union iodefine_reg32_t RMDF161;




    union iodefine_reg32_t RMID62;
    union iodefine_reg32_t RMPTR62;
    union iodefine_reg32_t RMDF062;
    union iodefine_reg32_t RMDF162;




    union iodefine_reg32_t RMID63;
    union iodefine_reg32_t RMPTR63;
    union iodefine_reg32_t RMDF063;
    union iodefine_reg32_t RMDF163;




    union iodefine_reg32_t RMID64;
    union iodefine_reg32_t RMPTR64;
    union iodefine_reg32_t RMDF064;
    union iodefine_reg32_t RMDF164;




    union iodefine_reg32_t RMID65;
    union iodefine_reg32_t RMPTR65;
    union iodefine_reg32_t RMDF065;
    union iodefine_reg32_t RMDF165;




    union iodefine_reg32_t RMID66;
    union iodefine_reg32_t RMPTR66;
    union iodefine_reg32_t RMDF066;
    union iodefine_reg32_t RMDF166;




    union iodefine_reg32_t RMID67;
    union iodefine_reg32_t RMPTR67;
    union iodefine_reg32_t RMDF067;
    union iodefine_reg32_t RMDF167;




    union iodefine_reg32_t RMID68;
    union iodefine_reg32_t RMPTR68;
    union iodefine_reg32_t RMDF068;
    union iodefine_reg32_t RMDF168;




    union iodefine_reg32_t RMID69;
    union iodefine_reg32_t RMPTR69;
    union iodefine_reg32_t RMDF069;
    union iodefine_reg32_t RMDF169;




    union iodefine_reg32_t RMID70;
    union iodefine_reg32_t RMPTR70;
    union iodefine_reg32_t RMDF070;
    union iodefine_reg32_t RMDF170;




    union iodefine_reg32_t RMID71;
    union iodefine_reg32_t RMPTR71;
    union iodefine_reg32_t RMDF071;
    union iodefine_reg32_t RMDF171;




    union iodefine_reg32_t RMID72;
    union iodefine_reg32_t RMPTR72;
    union iodefine_reg32_t RMDF072;
    union iodefine_reg32_t RMDF172;




    union iodefine_reg32_t RMID73;
    union iodefine_reg32_t RMPTR73;
    union iodefine_reg32_t RMDF073;
    union iodefine_reg32_t RMDF173;




    union iodefine_reg32_t RMID74;
    union iodefine_reg32_t RMPTR74;
    union iodefine_reg32_t RMDF074;
    union iodefine_reg32_t RMDF174;




    union iodefine_reg32_t RMID75;
    union iodefine_reg32_t RMPTR75;
    union iodefine_reg32_t RMDF075;
    union iodefine_reg32_t RMDF175;




    union iodefine_reg32_t RMID76;
    union iodefine_reg32_t RMPTR76;
    union iodefine_reg32_t RMDF076;
    union iodefine_reg32_t RMDF176;




    union iodefine_reg32_t RMID77;
    union iodefine_reg32_t RMPTR77;
    union iodefine_reg32_t RMDF077;
    union iodefine_reg32_t RMDF177;




    union iodefine_reg32_t RMID78;
    union iodefine_reg32_t RMPTR78;
    union iodefine_reg32_t RMDF078;
    union iodefine_reg32_t RMDF178;




    union iodefine_reg32_t RMID79;
    union iodefine_reg32_t RMPTR79;
    union iodefine_reg32_t RMDF079;
    union iodefine_reg32_t RMDF179;



    volatile uint8_t dummy179[768];


    union iodefine_reg32_t RFID0;
    union iodefine_reg32_t RFPTR0;
    union iodefine_reg32_t RFDF00;
    union iodefine_reg32_t RFDF10;




    union iodefine_reg32_t RFID1;
    union iodefine_reg32_t RFPTR1;
    union iodefine_reg32_t RFDF01;
    union iodefine_reg32_t RFDF11;




    union iodefine_reg32_t RFID2;
    union iodefine_reg32_t RFPTR2;
    union iodefine_reg32_t RFDF02;
    union iodefine_reg32_t RFDF12;




    union iodefine_reg32_t RFID3;
    union iodefine_reg32_t RFPTR3;
    union iodefine_reg32_t RFDF03;
    union iodefine_reg32_t RFDF13;




    union iodefine_reg32_t RFID4;
    union iodefine_reg32_t RFPTR4;
    union iodefine_reg32_t RFDF04;
    union iodefine_reg32_t RFDF14;




    union iodefine_reg32_t RFID5;
    union iodefine_reg32_t RFPTR5;
    union iodefine_reg32_t RFDF05;
    union iodefine_reg32_t RFDF15;




    union iodefine_reg32_t RFID6;
    union iodefine_reg32_t RFPTR6;
    union iodefine_reg32_t RFDF06;
    union iodefine_reg32_t RFDF16;




    union iodefine_reg32_t RFID7;
    union iodefine_reg32_t RFPTR7;
    union iodefine_reg32_t RFDF07;
    union iodefine_reg32_t RFDF17;




    union iodefine_reg32_t CFID0;
    union iodefine_reg32_t CFPTR0;
    union iodefine_reg32_t CFDF00;
    union iodefine_reg32_t CFDF10;




    union iodefine_reg32_t CFID1;
    union iodefine_reg32_t CFPTR1;
    union iodefine_reg32_t CFDF01;
    union iodefine_reg32_t CFDF11;




    union iodefine_reg32_t CFID2;
    union iodefine_reg32_t CFPTR2;
    union iodefine_reg32_t CFDF02;
    union iodefine_reg32_t CFDF12;




    union iodefine_reg32_t CFID3;
    union iodefine_reg32_t CFPTR3;
    union iodefine_reg32_t CFDF03;
    union iodefine_reg32_t CFDF13;




    union iodefine_reg32_t CFID4;
    union iodefine_reg32_t CFPTR4;
    union iodefine_reg32_t CFDF04;
    union iodefine_reg32_t CFDF14;




    union iodefine_reg32_t CFID5;
    union iodefine_reg32_t CFPTR5;
    union iodefine_reg32_t CFDF05;
    union iodefine_reg32_t CFDF15;




    union iodefine_reg32_t CFID6;
    union iodefine_reg32_t CFPTR6;
    union iodefine_reg32_t CFDF06;
    union iodefine_reg32_t CFDF16;




    union iodefine_reg32_t CFID7;
    union iodefine_reg32_t CFPTR7;
    union iodefine_reg32_t CFDF07;
    union iodefine_reg32_t CFDF17;




    union iodefine_reg32_t CFID8;
    union iodefine_reg32_t CFPTR8;
    union iodefine_reg32_t CFDF08;
    union iodefine_reg32_t CFDF18;




    union iodefine_reg32_t CFID9;
    union iodefine_reg32_t CFPTR9;
    union iodefine_reg32_t CFDF09;
    union iodefine_reg32_t CFDF19;




    union iodefine_reg32_t CFID10;
    union iodefine_reg32_t CFPTR10;
    union iodefine_reg32_t CFDF010;
    union iodefine_reg32_t CFDF110;




    union iodefine_reg32_t CFID11;
    union iodefine_reg32_t CFPTR11;
    union iodefine_reg32_t CFDF011;
    union iodefine_reg32_t CFDF111;




    union iodefine_reg32_t CFID12;
    union iodefine_reg32_t CFPTR12;
    union iodefine_reg32_t CFDF012;
    union iodefine_reg32_t CFDF112;




    union iodefine_reg32_t CFID13;
    union iodefine_reg32_t CFPTR13;
    union iodefine_reg32_t CFDF013;
    union iodefine_reg32_t CFDF113;




    union iodefine_reg32_t CFID14;
    union iodefine_reg32_t CFPTR14;
    union iodefine_reg32_t CFDF014;
    union iodefine_reg32_t CFDF114;



    volatile uint8_t dummy180[144];


    union iodefine_reg32_t TMID0;
    union iodefine_reg32_t TMPTR0;
    union iodefine_reg32_t TMDF00;
    union iodefine_reg32_t TMDF10;




    union iodefine_reg32_t TMID1;
    union iodefine_reg32_t TMPTR1;
    union iodefine_reg32_t TMDF01;
    union iodefine_reg32_t TMDF11;




    union iodefine_reg32_t TMID2;
    union iodefine_reg32_t TMPTR2;
    union iodefine_reg32_t TMDF02;
    union iodefine_reg32_t TMDF12;




    union iodefine_reg32_t TMID3;
    union iodefine_reg32_t TMPTR3;
    union iodefine_reg32_t TMDF03;
    union iodefine_reg32_t TMDF13;




    union iodefine_reg32_t TMID4;
    union iodefine_reg32_t TMPTR4;
    union iodefine_reg32_t TMDF04;
    union iodefine_reg32_t TMDF14;




    union iodefine_reg32_t TMID5;
    union iodefine_reg32_t TMPTR5;
    union iodefine_reg32_t TMDF05;
    union iodefine_reg32_t TMDF15;




    union iodefine_reg32_t TMID6;
    union iodefine_reg32_t TMPTR6;
    union iodefine_reg32_t TMDF06;
    union iodefine_reg32_t TMDF16;




    union iodefine_reg32_t TMID7;
    union iodefine_reg32_t TMPTR7;
    union iodefine_reg32_t TMDF07;
    union iodefine_reg32_t TMDF17;




    union iodefine_reg32_t TMID8;
    union iodefine_reg32_t TMPTR8;
    union iodefine_reg32_t TMDF08;
    union iodefine_reg32_t TMDF18;




    union iodefine_reg32_t TMID9;
    union iodefine_reg32_t TMPTR9;
    union iodefine_reg32_t TMDF09;
    union iodefine_reg32_t TMDF19;




    union iodefine_reg32_t TMID10;
    union iodefine_reg32_t TMPTR10;
    union iodefine_reg32_t TMDF010;
    union iodefine_reg32_t TMDF110;




    union iodefine_reg32_t TMID11;
    union iodefine_reg32_t TMPTR11;
    union iodefine_reg32_t TMDF011;
    union iodefine_reg32_t TMDF111;




    union iodefine_reg32_t TMID12;
    union iodefine_reg32_t TMPTR12;
    union iodefine_reg32_t TMDF012;
    union iodefine_reg32_t TMDF112;




    union iodefine_reg32_t TMID13;
    union iodefine_reg32_t TMPTR13;
    union iodefine_reg32_t TMDF013;
    union iodefine_reg32_t TMDF113;




    union iodefine_reg32_t TMID14;
    union iodefine_reg32_t TMPTR14;
    union iodefine_reg32_t TMDF014;
    union iodefine_reg32_t TMDF114;




    union iodefine_reg32_t TMID15;
    union iodefine_reg32_t TMPTR15;
    union iodefine_reg32_t TMDF015;
    union iodefine_reg32_t TMDF115;




    union iodefine_reg32_t TMID16;
    union iodefine_reg32_t TMPTR16;
    union iodefine_reg32_t TMDF016;
    union iodefine_reg32_t TMDF116;




    union iodefine_reg32_t TMID17;
    union iodefine_reg32_t TMPTR17;
    union iodefine_reg32_t TMDF017;
    union iodefine_reg32_t TMDF117;




    union iodefine_reg32_t TMID18;
    union iodefine_reg32_t TMPTR18;
    union iodefine_reg32_t TMDF018;
    union iodefine_reg32_t TMDF118;




    union iodefine_reg32_t TMID19;
    union iodefine_reg32_t TMPTR19;
    union iodefine_reg32_t TMDF019;
    union iodefine_reg32_t TMDF119;




    union iodefine_reg32_t TMID20;
    union iodefine_reg32_t TMPTR20;
    union iodefine_reg32_t TMDF020;
    union iodefine_reg32_t TMDF120;




    union iodefine_reg32_t TMID21;
    union iodefine_reg32_t TMPTR21;
    union iodefine_reg32_t TMDF021;
    union iodefine_reg32_t TMDF121;




    union iodefine_reg32_t TMID22;
    union iodefine_reg32_t TMPTR22;
    union iodefine_reg32_t TMDF022;
    union iodefine_reg32_t TMDF122;




    union iodefine_reg32_t TMID23;
    union iodefine_reg32_t TMPTR23;
    union iodefine_reg32_t TMDF023;
    union iodefine_reg32_t TMDF123;




    union iodefine_reg32_t TMID24;
    union iodefine_reg32_t TMPTR24;
    union iodefine_reg32_t TMDF024;
    union iodefine_reg32_t TMDF124;




    union iodefine_reg32_t TMID25;
    union iodefine_reg32_t TMPTR25;
    union iodefine_reg32_t TMDF025;
    union iodefine_reg32_t TMDF125;




    union iodefine_reg32_t TMID26;
    union iodefine_reg32_t TMPTR26;
    union iodefine_reg32_t TMDF026;
    union iodefine_reg32_t TMDF126;




    union iodefine_reg32_t TMID27;
    union iodefine_reg32_t TMPTR27;
    union iodefine_reg32_t TMDF027;
    union iodefine_reg32_t TMDF127;




    union iodefine_reg32_t TMID28;
    union iodefine_reg32_t TMPTR28;
    union iodefine_reg32_t TMDF028;
    union iodefine_reg32_t TMDF128;




    union iodefine_reg32_t TMID29;
    union iodefine_reg32_t TMPTR29;
    union iodefine_reg32_t TMDF029;
    union iodefine_reg32_t TMDF129;




    union iodefine_reg32_t TMID30;
    union iodefine_reg32_t TMPTR30;
    union iodefine_reg32_t TMDF030;
    union iodefine_reg32_t TMDF130;




    union iodefine_reg32_t TMID31;
    union iodefine_reg32_t TMPTR31;
    union iodefine_reg32_t TMDF031;
    union iodefine_reg32_t TMDF131;




    union iodefine_reg32_t TMID32;
    union iodefine_reg32_t TMPTR32;
    union iodefine_reg32_t TMDF032;
    union iodefine_reg32_t TMDF132;




    union iodefine_reg32_t TMID33;
    union iodefine_reg32_t TMPTR33;
    union iodefine_reg32_t TMDF033;
    union iodefine_reg32_t TMDF133;




    union iodefine_reg32_t TMID34;
    union iodefine_reg32_t TMPTR34;
    union iodefine_reg32_t TMDF034;
    union iodefine_reg32_t TMDF134;




    union iodefine_reg32_t TMID35;
    union iodefine_reg32_t TMPTR35;
    union iodefine_reg32_t TMDF035;
    union iodefine_reg32_t TMDF135;




    union iodefine_reg32_t TMID36;
    union iodefine_reg32_t TMPTR36;
    union iodefine_reg32_t TMDF036;
    union iodefine_reg32_t TMDF136;




    union iodefine_reg32_t TMID37;
    union iodefine_reg32_t TMPTR37;
    union iodefine_reg32_t TMDF037;
    union iodefine_reg32_t TMDF137;




    union iodefine_reg32_t TMID38;
    union iodefine_reg32_t TMPTR38;
    union iodefine_reg32_t TMDF038;
    union iodefine_reg32_t TMDF138;




    union iodefine_reg32_t TMID39;
    union iodefine_reg32_t TMPTR39;
    union iodefine_reg32_t TMDF039;
    union iodefine_reg32_t TMDF139;




    union iodefine_reg32_t TMID40;
    union iodefine_reg32_t TMPTR40;
    union iodefine_reg32_t TMDF040;
    union iodefine_reg32_t TMDF140;




    union iodefine_reg32_t TMID41;
    union iodefine_reg32_t TMPTR41;
    union iodefine_reg32_t TMDF041;
    union iodefine_reg32_t TMDF141;




    union iodefine_reg32_t TMID42;
    union iodefine_reg32_t TMPTR42;
    union iodefine_reg32_t TMDF042;
    union iodefine_reg32_t TMDF142;




    union iodefine_reg32_t TMID43;
    union iodefine_reg32_t TMPTR43;
    union iodefine_reg32_t TMDF043;
    union iodefine_reg32_t TMDF143;




    union iodefine_reg32_t TMID44;
    union iodefine_reg32_t TMPTR44;
    union iodefine_reg32_t TMDF044;
    union iodefine_reg32_t TMDF144;




    union iodefine_reg32_t TMID45;
    union iodefine_reg32_t TMPTR45;
    union iodefine_reg32_t TMDF045;
    union iodefine_reg32_t TMDF145;




    union iodefine_reg32_t TMID46;
    union iodefine_reg32_t TMPTR46;
    union iodefine_reg32_t TMDF046;
    union iodefine_reg32_t TMDF146;




    union iodefine_reg32_t TMID47;
    union iodefine_reg32_t TMPTR47;
    union iodefine_reg32_t TMDF047;
    union iodefine_reg32_t TMDF147;




    union iodefine_reg32_t TMID48;
    union iodefine_reg32_t TMPTR48;
    union iodefine_reg32_t TMDF048;
    union iodefine_reg32_t TMDF148;




    union iodefine_reg32_t TMID49;
    union iodefine_reg32_t TMPTR49;
    union iodefine_reg32_t TMDF049;
    union iodefine_reg32_t TMDF149;




    union iodefine_reg32_t TMID50;
    union iodefine_reg32_t TMPTR50;
    union iodefine_reg32_t TMDF050;
    union iodefine_reg32_t TMDF150;




    union iodefine_reg32_t TMID51;
    union iodefine_reg32_t TMPTR51;
    union iodefine_reg32_t TMDF051;
    union iodefine_reg32_t TMDF151;




    union iodefine_reg32_t TMID52;
    union iodefine_reg32_t TMPTR52;
    union iodefine_reg32_t TMDF052;
    union iodefine_reg32_t TMDF152;




    union iodefine_reg32_t TMID53;
    union iodefine_reg32_t TMPTR53;
    union iodefine_reg32_t TMDF053;
    union iodefine_reg32_t TMDF153;




    union iodefine_reg32_t TMID54;
    union iodefine_reg32_t TMPTR54;
    union iodefine_reg32_t TMDF054;
    union iodefine_reg32_t TMDF154;




    union iodefine_reg32_t TMID55;
    union iodefine_reg32_t TMPTR55;
    union iodefine_reg32_t TMDF055;
    union iodefine_reg32_t TMDF155;




    union iodefine_reg32_t TMID56;
    union iodefine_reg32_t TMPTR56;
    union iodefine_reg32_t TMDF056;
    union iodefine_reg32_t TMDF156;




    union iodefine_reg32_t TMID57;
    union iodefine_reg32_t TMPTR57;
    union iodefine_reg32_t TMDF057;
    union iodefine_reg32_t TMDF157;




    union iodefine_reg32_t TMID58;
    union iodefine_reg32_t TMPTR58;
    union iodefine_reg32_t TMDF058;
    union iodefine_reg32_t TMDF158;




    union iodefine_reg32_t TMID59;
    union iodefine_reg32_t TMPTR59;
    union iodefine_reg32_t TMDF059;
    union iodefine_reg32_t TMDF159;




    union iodefine_reg32_t TMID60;
    union iodefine_reg32_t TMPTR60;
    union iodefine_reg32_t TMDF060;
    union iodefine_reg32_t TMDF160;




    union iodefine_reg32_t TMID61;
    union iodefine_reg32_t TMPTR61;
    union iodefine_reg32_t TMDF061;
    union iodefine_reg32_t TMDF161;




    union iodefine_reg32_t TMID62;
    union iodefine_reg32_t TMPTR62;
    union iodefine_reg32_t TMDF062;
    union iodefine_reg32_t TMDF162;




    union iodefine_reg32_t TMID63;
    union iodefine_reg32_t TMPTR63;
    union iodefine_reg32_t TMDF063;
    union iodefine_reg32_t TMDF163;




    union iodefine_reg32_t TMID64;
    union iodefine_reg32_t TMPTR64;
    union iodefine_reg32_t TMDF064;
    union iodefine_reg32_t TMDF164;




    union iodefine_reg32_t TMID65;
    union iodefine_reg32_t TMPTR65;
    union iodefine_reg32_t TMDF065;
    union iodefine_reg32_t TMDF165;




    union iodefine_reg32_t TMID66;
    union iodefine_reg32_t TMPTR66;
    union iodefine_reg32_t TMDF066;
    union iodefine_reg32_t TMDF166;




    union iodefine_reg32_t TMID67;
    union iodefine_reg32_t TMPTR67;
    union iodefine_reg32_t TMDF067;
    union iodefine_reg32_t TMDF167;




    union iodefine_reg32_t TMID68;
    union iodefine_reg32_t TMPTR68;
    union iodefine_reg32_t TMDF068;
    union iodefine_reg32_t TMDF168;




    union iodefine_reg32_t TMID69;
    union iodefine_reg32_t TMPTR69;
    union iodefine_reg32_t TMDF069;
    union iodefine_reg32_t TMDF169;




    union iodefine_reg32_t TMID70;
    union iodefine_reg32_t TMPTR70;
    union iodefine_reg32_t TMDF070;
    union iodefine_reg32_t TMDF170;




    union iodefine_reg32_t TMID71;
    union iodefine_reg32_t TMPTR71;
    union iodefine_reg32_t TMDF071;
    union iodefine_reg32_t TMDF171;




    union iodefine_reg32_t TMID72;
    union iodefine_reg32_t TMPTR72;
    union iodefine_reg32_t TMDF072;
    union iodefine_reg32_t TMDF172;




    union iodefine_reg32_t TMID73;
    union iodefine_reg32_t TMPTR73;
    union iodefine_reg32_t TMDF073;
    union iodefine_reg32_t TMDF173;




    union iodefine_reg32_t TMID74;
    union iodefine_reg32_t TMPTR74;
    union iodefine_reg32_t TMDF074;
    union iodefine_reg32_t TMDF174;




    union iodefine_reg32_t TMID75;
    union iodefine_reg32_t TMPTR75;
    union iodefine_reg32_t TMDF075;
    union iodefine_reg32_t TMDF175;




    union iodefine_reg32_t TMID76;
    union iodefine_reg32_t TMPTR76;
    union iodefine_reg32_t TMDF076;
    union iodefine_reg32_t TMDF176;




    union iodefine_reg32_t TMID77;
    union iodefine_reg32_t TMPTR77;
    union iodefine_reg32_t TMDF077;
    union iodefine_reg32_t TMDF177;




    union iodefine_reg32_t TMID78;
    union iodefine_reg32_t TMPTR78;
    union iodefine_reg32_t TMDF078;
    union iodefine_reg32_t TMDF178;




    union iodefine_reg32_t TMID79;
    union iodefine_reg32_t TMPTR79;
    union iodefine_reg32_t TMDF079;
    union iodefine_reg32_t TMDF179;



    volatile uint8_t dummy181[768];


    union iodefine_reg32_t THLACC0;
    union iodefine_reg32_t THLACC1;
    union iodefine_reg32_t THLACC2;
    union iodefine_reg32_t THLACC3;
    union iodefine_reg32_t THLACC4;

} r_io_rscan0_t;


typedef struct st_rscan_from_rscan0cncfg
{

    union iodefine_reg32_t CnCFG;
    union iodefine_reg32_t CnCTR;
    union iodefine_reg32_t CnSTS;
    union iodefine_reg32_t CnERFL;
} r_io_rscan_from_rscan0cncfg_t;


typedef struct st_rscan_from_rscan0gaflidj
{

    union iodefine_reg32_t GAFLIDj;
    union iodefine_reg32_t GAFLMj;
    union iodefine_reg32_t GAFLP0j;
    union iodefine_reg32_t GAFLP1j;
} r_io_rscan_from_rscan0gaflidj_t;


typedef struct st_rscan_from_rscan0rmidp
{

    union iodefine_reg32_t RMIDp;
    union iodefine_reg32_t RMPTRp;
    union iodefine_reg32_t RMDF0p;
    union iodefine_reg32_t RMDF1p;
} r_io_rscan_from_rscan0rmidp_t;


typedef struct st_rscan_from_rscan0rfidm
{

    union iodefine_reg32_t RFIDm;
    union iodefine_reg32_t RFPTRm;
    union iodefine_reg32_t RFDF0m;
    union iodefine_reg32_t RFDF1m;
} r_io_rscan_from_rscan0rfidm_t;


typedef struct st_rscan_from_rscan0tmidp
{

    union iodefine_reg32_t TMIDp;
    union iodefine_reg32_t TMPTRp;
    union iodefine_reg32_t TMDF0p;
    union iodefine_reg32_t TMDF1p;
} r_io_rscan_from_rscan0tmidp_t;


typedef struct st_rscan_from_rscan0cfidm
{

    union iodefine_reg32_t CFIDm;
    union iodefine_reg32_t CFPTRm;
    union iodefine_reg32_t CFDF0m;
    union iodefine_reg32_t CFDF1m;
} r_io_rscan_from_rscan0cfidm_t;
/*  63 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/rspi_iodefine.h" 1 */
/*  180 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/rspi_iodefine.h" */
typedef struct st_rspi
{

    volatile uint8_t SPCR;
    volatile uint8_t SSLP;
    volatile uint8_t SPPCR;
    volatile uint8_t SPSR;
    union iodefine_reg32_t SPDR;

    volatile uint8_t SPSCR;
    volatile uint8_t SPSSR;
    volatile uint8_t SPBR;
    volatile uint8_t SPDCR;
    volatile uint8_t SPCKD;
    volatile uint8_t SSLND;
    volatile uint8_t SPND;
    volatile uint8_t dummy1[1];


    volatile uint16_t SPCMD0;
    volatile uint16_t SPCMD1;
    volatile uint16_t SPCMD2;
    volatile uint16_t SPCMD3;
    volatile uint8_t dummy2[8];
    volatile uint8_t SPBFCR;
    volatile uint8_t dummy3[1];
    volatile uint16_t SPBFDR;
} r_io_rspi_t;
/*  64 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/rtc_iodefine.h" 1 */
/*  62 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/rtc_iodefine.h" */
typedef struct st_rtc
{

    volatile uint8_t R64CNT;
    volatile uint8_t dummy537[1];
    volatile uint8_t RSECCNT;
    volatile uint8_t dummy538[1];
    volatile uint8_t RMINCNT;
    volatile uint8_t dummy539[1];
    volatile uint8_t RHRCNT;
    volatile uint8_t dummy540[1];
    volatile uint8_t RWKCNT;
    volatile uint8_t dummy541[1];
    volatile uint8_t RDAYCNT;
    volatile uint8_t dummy542[1];
    volatile uint8_t RMONCNT;
    volatile uint8_t dummy543[1];
    volatile uint16_t RYRCNT;
    volatile uint8_t RSECAR;
    volatile uint8_t dummy544[1];
    volatile uint8_t RMINAR;
    volatile uint8_t dummy545[1];
    volatile uint8_t RHRAR;
    volatile uint8_t dummy546[1];
    volatile uint8_t RWKAR;
    volatile uint8_t dummy547[1];
    volatile uint8_t RDAYAR;
    volatile uint8_t dummy548[1];
    volatile uint8_t RMONAR;
    volatile uint8_t dummy549[1];
    volatile uint8_t RCR1;
    volatile uint8_t dummy550[1];
    volatile uint8_t RCR2;
    volatile uint8_t dummy551[1];
    volatile uint16_t RYRAR;
    volatile uint8_t dummy552[2];
    volatile uint8_t RCR3;
    volatile uint8_t dummy553[1];
    volatile uint8_t RCR5;
    volatile uint8_t dummy554[3];
    volatile uint16_t RFRH;
    volatile uint16_t RFRL;
} r_io_rtc_t;
/*  65 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/scif_iodefine.h" 1 */
/*  149 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/scif_iodefine.h" */
typedef struct st_scif
{

    volatile uint16_t SCSMR;
    volatile uint8_t dummy1[2];
    volatile uint8_t SCBRR;
    volatile uint8_t dummy2[3];
    volatile uint16_t SCSCR;
    volatile uint8_t dummy3[2];
    volatile uint8_t SCFTDR;
    volatile uint8_t dummy4[3];
    volatile uint16_t SCFSR;
    volatile uint8_t dummy5[2];
    volatile uint8_t SCFRDR;
    volatile uint8_t dummy6[3];
    volatile uint16_t SCFCR;
    volatile uint8_t dummy7[2];
    volatile uint16_t SCFDR;
    volatile uint8_t dummy8[2];
    volatile uint16_t SCSPTR;
    volatile uint8_t dummy9[2];
    volatile uint16_t SCLSR;
    volatile uint8_t dummy10[2];
    volatile uint16_t SCEMR;
} r_io_scif_t;
/*  66 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/scim_iodefine.h" 1 */
/*  75 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/scim_iodefine.h" */
typedef struct st_scim
{

    volatile uint8_t SMR;
    volatile uint8_t BRR;
    volatile uint8_t SCR;
    volatile uint8_t TDR;
    volatile uint8_t SSR;
    volatile uint8_t RDR;
    volatile uint8_t SCMR;
    volatile uint8_t SEMR;
    volatile uint8_t SNFR;
    volatile uint8_t dummy1[4];
    volatile uint8_t SECR;
} r_io_scim_t;
/*  67 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/scux_iodefine.h" 1 */
/*  382 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/scux_iodefine.h" */
typedef struct st_scux
{



    volatile uint32_t IPCIR_IPC0_0;
    volatile uint32_t IPSLR_IPC0_0;
    volatile uint8_t dummy259[248];




    volatile uint32_t IPCIR_IPC0_1;
    volatile uint32_t IPSLR_IPC0_1;
    volatile uint8_t dummy260[248];




    volatile uint32_t IPCIR_IPC0_2;
    volatile uint32_t IPSLR_IPC0_2;
    volatile uint8_t dummy261[248];




    volatile uint32_t IPCIR_IPC0_3;
    volatile uint32_t IPSLR_IPC0_3;
    volatile uint8_t dummy262[248];




    volatile uint32_t OPCIR_OPC0_0;
    volatile uint32_t OPSLR_OPC0_0;
    volatile uint8_t dummy263[248];




    volatile uint32_t OPCIR_OPC0_1;
    volatile uint32_t OPSLR_OPC0_1;
    volatile uint8_t dummy264[248];




    volatile uint32_t OPCIR_OPC0_2;
    volatile uint32_t OPSLR_OPC0_2;
    volatile uint8_t dummy265[248];




    volatile uint32_t OPCIR_OPC0_3;
    volatile uint32_t OPSLR_OPC0_3;
    volatile uint8_t dummy266[248];




    volatile uint32_t FFDIR_FFD0_0;
    volatile uint32_t FDAIR_FFD0_0;
    volatile uint32_t DRQSR_FFD0_0;
    volatile uint32_t FFDPR_FFD0_0;
    volatile uint32_t FFDBR_FFD0_0;
    volatile uint32_t DEVMR_FFD0_0;
    volatile uint8_t dummy267[4];
    volatile uint32_t DEVCR_FFD0_0;


    volatile uint8_t dummy268[224];


    volatile uint32_t FFDIR_FFD0_1;
    volatile uint32_t FDAIR_FFD0_1;
    volatile uint32_t DRQSR_FFD0_1;
    volatile uint32_t FFDPR_FFD0_1;
    volatile uint32_t FFDBR_FFD0_1;
    volatile uint32_t DEVMR_FFD0_1;
    volatile uint8_t dummy269[4];
    volatile uint32_t DEVCR_FFD0_1;


    volatile uint8_t dummy270[224];


    volatile uint32_t FFDIR_FFD0_2;
    volatile uint32_t FDAIR_FFD0_2;
    volatile uint32_t DRQSR_FFD0_2;
    volatile uint32_t FFDPR_FFD0_2;
    volatile uint32_t FFDBR_FFD0_2;
    volatile uint32_t DEVMR_FFD0_2;
    volatile uint8_t dummy271[4];
    volatile uint32_t DEVCR_FFD0_2;


    volatile uint8_t dummy272[224];


    volatile uint32_t FFDIR_FFD0_3;
    volatile uint32_t FDAIR_FFD0_3;
    volatile uint32_t DRQSR_FFD0_3;
    volatile uint32_t FFDPR_FFD0_3;
    volatile uint32_t FFDBR_FFD0_3;
    volatile uint32_t DEVMR_FFD0_3;
    volatile uint8_t dummy273[4];
    volatile uint32_t DEVCR_FFD0_3;


    volatile uint8_t dummy274[224];


    volatile uint32_t FFUIR_FFU0_0;
    volatile uint32_t FUAIR_FFU0_0;
    volatile uint32_t URQSR_FFU0_0;
    volatile uint32_t FFUPR_FFU0_0;
    volatile uint32_t UEVMR_FFU0_0;
    volatile uint8_t dummy275[4];
    volatile uint32_t UEVCR_FFU0_0;


    volatile uint8_t dummy276[228];


    volatile uint32_t FFUIR_FFU0_1;
    volatile uint32_t FUAIR_FFU0_1;
    volatile uint32_t URQSR_FFU0_1;
    volatile uint32_t FFUPR_FFU0_1;
    volatile uint32_t UEVMR_FFU0_1;
    volatile uint8_t dummy277[4];
    volatile uint32_t UEVCR_FFU0_1;


    volatile uint8_t dummy278[228];


    volatile uint32_t FFUIR_FFU0_2;
    volatile uint32_t FUAIR_FFU0_2;
    volatile uint32_t URQSR_FFU0_2;
    volatile uint32_t FFUPR_FFU0_2;
    volatile uint32_t UEVMR_FFU0_2;
    volatile uint8_t dummy279[4];
    volatile uint32_t UEVCR_FFU0_2;


    volatile uint8_t dummy280[228];


    volatile uint32_t FFUIR_FFU0_3;
    volatile uint32_t FUAIR_FFU0_3;
    volatile uint32_t URQSR_FFU0_3;
    volatile uint32_t FFUPR_FFU0_3;
    volatile uint32_t UEVMR_FFU0_3;
    volatile uint8_t dummy281[4];
    volatile uint32_t UEVCR_FFU0_3;


    volatile uint8_t dummy282[228];


    volatile uint32_t SRCIR0_2SRC0_0;
    volatile uint32_t SADIR0_2SRC0_0;
    volatile uint32_t SRCBR0_2SRC0_0;
    volatile uint32_t IFSCR0_2SRC0_0;
    volatile uint32_t IFSVR0_2SRC0_0;
    volatile uint32_t SRCCR0_2SRC0_0;
    volatile uint32_t MNFSR0_2SRC0_0;
    volatile uint32_t BFSSR0_2SRC0_0;
    volatile uint32_t SC2SR0_2SRC0_0;
    volatile uint32_t WATSR0_2SRC0_0;
    volatile uint32_t SEVMR0_2SRC0_0;
    volatile uint8_t dummy283[4];
    volatile uint32_t SEVCR0_2SRC0_0;
    volatile uint32_t SRCIR1_2SRC0_0;
    volatile uint32_t SADIR1_2SRC0_0;
    volatile uint32_t SRCBR1_2SRC0_0;
    volatile uint32_t IFSCR1_2SRC0_0;
    volatile uint32_t IFSVR1_2SRC0_0;
    volatile uint32_t SRCCR1_2SRC0_0;
    volatile uint32_t MNFSR1_2SRC0_0;
    volatile uint32_t BFSSR1_2SRC0_0;
    volatile uint32_t SC2SR1_2SRC0_0;
    volatile uint32_t WATSR1_2SRC0_0;
    volatile uint32_t SEVMR1_2SRC0_0;
    volatile uint8_t dummy284[4];
    volatile uint32_t SEVCR1_2SRC0_0;
    volatile uint32_t SRCIRR_2SRC0_0;


    volatile uint8_t dummy285[148];


    volatile uint32_t SRCIR0_2SRC0_1;
    volatile uint32_t SADIR0_2SRC0_1;
    volatile uint32_t SRCBR0_2SRC0_1;
    volatile uint32_t IFSCR0_2SRC0_1;
    volatile uint32_t IFSVR0_2SRC0_1;
    volatile uint32_t SRCCR0_2SRC0_1;
    volatile uint32_t MNFSR0_2SRC0_1;
    volatile uint32_t BFSSR0_2SRC0_1;
    volatile uint32_t SC2SR0_2SRC0_1;
    volatile uint32_t WATSR0_2SRC0_1;
    volatile uint32_t SEVMR0_2SRC0_1;
    volatile uint8_t dummy286[4];
    volatile uint32_t SEVCR0_2SRC0_1;
    volatile uint32_t SRCIR1_2SRC0_1;
    volatile uint32_t SADIR1_2SRC0_1;
    volatile uint32_t SRCBR1_2SRC0_1;
    volatile uint32_t IFSCR1_2SRC0_1;
    volatile uint32_t IFSVR1_2SRC0_1;
    volatile uint32_t SRCCR1_2SRC0_1;
    volatile uint32_t MNFSR1_2SRC0_1;
    volatile uint32_t BFSSR1_2SRC0_1;
    volatile uint32_t SC2SR1_2SRC0_1;
    volatile uint32_t WATSR1_2SRC0_1;
    volatile uint32_t SEVMR1_2SRC0_1;
    volatile uint8_t dummy287[4];
    volatile uint32_t SEVCR1_2SRC0_1;
    volatile uint32_t SRCIRR_2SRC0_1;


    volatile uint8_t dummy288[148];


    volatile uint32_t DVUIR_DVU0_0;
    volatile uint32_t VADIR_DVU0_0;
    volatile uint32_t DVUBR_DVU0_0;
    volatile uint32_t DVUCR_DVU0_0;
    volatile uint32_t ZCMCR_DVU0_0;
    volatile uint32_t VRCTR_DVU0_0;
    volatile uint32_t VRPDR_DVU0_0;
    volatile uint32_t VRDBR_DVU0_0;
    volatile uint32_t VRWTR_DVU0_0;
    volatile uint32_t VOL0R_DVU0_0;
    volatile uint32_t VOL1R_DVU0_0;
    volatile uint32_t VOL2R_DVU0_0;
    volatile uint32_t VOL3R_DVU0_0;
    volatile uint32_t VOL4R_DVU0_0;
    volatile uint32_t VOL5R_DVU0_0;
    volatile uint32_t VOL6R_DVU0_0;
    volatile uint32_t VOL7R_DVU0_0;
    volatile uint32_t DVUER_DVU0_0;
    volatile uint32_t DVUSR_DVU0_0;
    volatile uint32_t VEVMR_DVU0_0;
    volatile uint8_t dummy289[4];
    volatile uint32_t VEVCR_DVU0_0;


    volatile uint8_t dummy290[168];


    volatile uint32_t DVUIR_DVU0_1;
    volatile uint32_t VADIR_DVU0_1;
    volatile uint32_t DVUBR_DVU0_1;
    volatile uint32_t DVUCR_DVU0_1;
    volatile uint32_t ZCMCR_DVU0_1;
    volatile uint32_t VRCTR_DVU0_1;
    volatile uint32_t VRPDR_DVU0_1;
    volatile uint32_t VRDBR_DVU0_1;
    volatile uint32_t VRWTR_DVU0_1;
    volatile uint32_t VOL0R_DVU0_1;
    volatile uint32_t VOL1R_DVU0_1;
    volatile uint32_t VOL2R_DVU0_1;
    volatile uint32_t VOL3R_DVU0_1;
    volatile uint32_t VOL4R_DVU0_1;
    volatile uint32_t VOL5R_DVU0_1;
    volatile uint32_t VOL6R_DVU0_1;
    volatile uint32_t VOL7R_DVU0_1;
    volatile uint32_t DVUER_DVU0_1;
    volatile uint32_t DVUSR_DVU0_1;
    volatile uint32_t VEVMR_DVU0_1;
    volatile uint8_t dummy291[4];
    volatile uint32_t VEVCR_DVU0_1;


    volatile uint8_t dummy292[168];


    volatile uint32_t DVUIR_DVU0_2;
    volatile uint32_t VADIR_DVU0_2;
    volatile uint32_t DVUBR_DVU0_2;
    volatile uint32_t DVUCR_DVU0_2;
    volatile uint32_t ZCMCR_DVU0_2;
    volatile uint32_t VRCTR_DVU0_2;
    volatile uint32_t VRPDR_DVU0_2;
    volatile uint32_t VRDBR_DVU0_2;
    volatile uint32_t VRWTR_DVU0_2;
    volatile uint32_t VOL0R_DVU0_2;
    volatile uint32_t VOL1R_DVU0_2;
    volatile uint32_t VOL2R_DVU0_2;
    volatile uint32_t VOL3R_DVU0_2;
    volatile uint32_t VOL4R_DVU0_2;
    volatile uint32_t VOL5R_DVU0_2;
    volatile uint32_t VOL6R_DVU0_2;
    volatile uint32_t VOL7R_DVU0_2;
    volatile uint32_t DVUER_DVU0_2;
    volatile uint32_t DVUSR_DVU0_2;
    volatile uint32_t VEVMR_DVU0_2;
    volatile uint8_t dummy293[4];
    volatile uint32_t VEVCR_DVU0_2;


    volatile uint8_t dummy294[168];


    volatile uint32_t DVUIR_DVU0_3;
    volatile uint32_t VADIR_DVU0_3;
    volatile uint32_t DVUBR_DVU0_3;
    volatile uint32_t DVUCR_DVU0_3;
    volatile uint32_t ZCMCR_DVU0_3;
    volatile uint32_t VRCTR_DVU0_3;
    volatile uint32_t VRPDR_DVU0_3;
    volatile uint32_t VRDBR_DVU0_3;
    volatile uint32_t VRWTR_DVU0_3;
    volatile uint32_t VOL0R_DVU0_3;
    volatile uint32_t VOL1R_DVU0_3;
    volatile uint32_t VOL2R_DVU0_3;
    volatile uint32_t VOL3R_DVU0_3;
    volatile uint32_t VOL4R_DVU0_3;
    volatile uint32_t VOL5R_DVU0_3;
    volatile uint32_t VOL6R_DVU0_3;
    volatile uint32_t VOL7R_DVU0_3;
    volatile uint32_t DVUER_DVU0_3;
    volatile uint32_t DVUSR_DVU0_3;
    volatile uint32_t VEVMR_DVU0_3;
    volatile uint8_t dummy295[4];
    volatile uint32_t VEVCR_DVU0_3;


    volatile uint8_t dummy296[168];
    volatile uint32_t MIXIR_MIX0_0;
    volatile uint32_t MADIR_MIX0_0;
    volatile uint32_t MIXBR_MIX0_0;
    volatile uint32_t MIXMR_MIX0_0;
    volatile uint32_t MVPDR_MIX0_0;
    volatile uint32_t MDBAR_MIX0_0;
    volatile uint32_t MDBBR_MIX0_0;
    volatile uint32_t MDBCR_MIX0_0;
    volatile uint32_t MDBDR_MIX0_0;
    volatile uint32_t MDBER_MIX0_0;
    volatile uint32_t MIXSR_MIX0_0;
    volatile uint8_t dummy297[212];
    volatile uint32_t SWRSR_CIM;
    volatile uint32_t DMACR_CIM;


    union iodefine_reg32_16_t DMATD0_CIM;
    union iodefine_reg32_16_t DMATD1_CIM;
    union iodefine_reg32_16_t DMATD2_CIM;
    union iodefine_reg32_16_t DMATD3_CIM;


    union iodefine_reg32_16_t DMATU0_CIM;
    union iodefine_reg32_16_t DMATU1_CIM;
    union iodefine_reg32_16_t DMATU2_CIM;
    union iodefine_reg32_16_t DMATU3_CIM;

    volatile uint8_t dummy298[16];
    volatile uint32_t SSIRSEL_CIM;


    volatile uint32_t FDTSEL0_CIM;
    volatile uint32_t FDTSEL1_CIM;
    volatile uint32_t FDTSEL2_CIM;
    volatile uint32_t FDTSEL3_CIM;


    volatile uint32_t FUTSEL0_CIM;
    volatile uint32_t FUTSEL1_CIM;
    volatile uint32_t FUTSEL2_CIM;
    volatile uint32_t FUTSEL3_CIM;
    volatile uint32_t SSIPMD_CIM;
    volatile uint32_t SSICTRL_CIM;


    volatile uint32_t SRCRSEL0_CIM;
    volatile uint32_t SRCRSEL1_CIM;
    volatile uint32_t SRCRSEL2_CIM;
    volatile uint32_t SRCRSEL3_CIM;
    volatile uint32_t MIXRSEL_CIM;
} r_io_scux_t;


typedef struct st_scux_from_ipcir_ipc0_n
{

    volatile uint32_t IPCIR_IPC0_0;
    volatile uint32_t IPSLR_IPC0_0;
    volatile uint8_t dummy1[248];
} r_io_scux_from_ipcir_ipc0_n_t;


typedef struct st_scux_from_opcir_opc0_n
{

    volatile uint32_t OPCIR_OPC0_0;
    volatile uint32_t OPSLR_OPC0_0;
    volatile uint8_t dummy1[248];
} r_io_scux_from_opcir_opc0_n_t;


typedef struct st_scux_from_ffdir_ffd0_n
{

    volatile uint32_t FFDIR_FFD0_0;
    volatile uint32_t FDAIR_FFD0_0;
    volatile uint32_t DRQSR_FFD0_0;
    volatile uint32_t FFDPR_FFD0_0;
    volatile uint32_t FFDBR_FFD0_0;
    volatile uint32_t DEVMR_FFD0_0;
    volatile uint8_t dummy1[4];
    volatile uint32_t DEVCR_FFD0_0;
} r_io_scux_from_ffdir_ffd0_n_t;


typedef struct st_scux_from_ffuir_ffu0_n
{

    volatile uint32_t FFUIR_FFU0_0;
    volatile uint32_t FUAIR_FFU0_0;
    volatile uint32_t URQSR_FFU0_0;
    volatile uint32_t FFUPR_FFU0_0;
    volatile uint32_t UEVMR_FFU0_0;
    volatile uint8_t dummy1[4];
    volatile uint32_t UEVCR_FFU0_0;
} r_io_scux_from_ffuir_ffu0_n_t;


typedef struct st_scux_from_srcir0_2src0_n
{

    volatile uint32_t SRCIR0_2SRC0_0;
    volatile uint32_t SADIR0_2SRC0_0;
    volatile uint32_t SRCBR0_2SRC0_0;
    volatile uint32_t IFSCR0_2SRC0_0;
    volatile uint32_t IFSVR0_2SRC0_0;
    volatile uint32_t SRCCR0_2SRC0_0;
    volatile uint32_t MNFSR0_2SRC0_0;
    volatile uint32_t BFSSR0_2SRC0_0;
    volatile uint32_t SC2SR0_2SRC0_0;
    volatile uint32_t WATSR0_2SRC0_0;
    volatile uint32_t SEVMR0_2SRC0_0;
    volatile uint8_t dummy1[4];
    volatile uint32_t SEVCR0_2SRC0_0;
    volatile uint32_t SRCIR1_2SRC0_0;
    volatile uint32_t SADIR1_2SRC0_0;
    volatile uint32_t SRCBR1_2SRC0_0;
    volatile uint32_t IFSCR1_2SRC0_0;
    volatile uint32_t IFSVR1_2SRC0_0;
    volatile uint32_t SRCCR1_2SRC0_0;
    volatile uint32_t MNFSR1_2SRC0_0;
    volatile uint32_t BFSSR1_2SRC0_0;
    volatile uint32_t SC2SR1_2SRC0_0;
    volatile uint32_t WATSR1_2SRC0_0;
    volatile uint32_t SEVMR1_2SRC0_0;
    volatile uint8_t dummy2[4];
    volatile uint32_t SEVCR1_2SRC0_0;
    volatile uint32_t SRCIRR_2SRC0_0;
} r_io_scux_from_srcir0_2src0_n_t;


typedef struct st_scux_from_dvuir_dvu0_n
{

    volatile uint32_t DVUIR_DVU0_0;
    volatile uint32_t VADIR_DVU0_0;
    volatile uint32_t DVUBR_DVU0_0;
    volatile uint32_t DVUCR_DVU0_0;
    volatile uint32_t ZCMCR_DVU0_0;
    volatile uint32_t VRCTR_DVU0_0;
    volatile uint32_t VRPDR_DVU0_0;
    volatile uint32_t VRDBR_DVU0_0;
    volatile uint32_t VRWTR_DVU0_0;
    volatile uint32_t VOL0R_DVU0_0;
    volatile uint32_t VOL1R_DVU0_0;
    volatile uint32_t VOL2R_DVU0_0;
    volatile uint32_t VOL3R_DVU0_0;
    volatile uint32_t VOL4R_DVU0_0;
    volatile uint32_t VOL5R_DVU0_0;
    volatile uint32_t VOL6R_DVU0_0;
    volatile uint32_t VOL7R_DVU0_0;
    volatile uint32_t DVUER_DVU0_0;
    volatile uint32_t DVUSR_DVU0_0;
    volatile uint32_t VEVMR_DVU0_0;
    volatile uint8_t dummy1[4];
    volatile uint32_t VEVCR_DVU0_0;
} r_io_scux_from_dvuir_dvu0_n_t;
/*  68 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/sdg_iodefine.h" 1 */
/*  81 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/sdg_iodefine.h" */
typedef struct st_sdg
{

    volatile uint8_t SGCR1;
    volatile uint8_t SGCSR;
    volatile uint8_t SGCR2;
    volatile uint8_t SGLR;
    volatile uint8_t SGTFR;
    volatile uint8_t SGSFR;
} r_io_sdg_t;
/*  69 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/spdif_iodefine.h" 1 */
/*  55 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/spdif_iodefine.h" */
typedef struct st_spdif
{

    volatile uint32_t TLCA;
    volatile uint32_t TRCA;
    volatile uint32_t TLCS;
    volatile uint32_t TRCS;
    volatile uint32_t TUI;
    volatile uint32_t RLCA;
    volatile uint32_t RRCA;
    volatile uint32_t RLCS;
    volatile uint32_t RRCS;
    volatile uint32_t RUI;
    volatile uint32_t CTRL;
    volatile uint32_t STAT;
    volatile uint32_t TDAD;
    volatile uint32_t RDAD;
} r_io_spdif_t;
/*  70 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/spibsc_iodefine.h" 1 */
/*  151 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/spibsc_iodefine.h" */
typedef struct st_spibsc
{

    volatile uint32_t CMNCR;
    volatile uint32_t SSLDR;
    volatile uint32_t SPBCR;
    volatile uint32_t DRCR;
    volatile uint32_t DRCMR;
    volatile uint32_t DREAR;
    volatile uint32_t DROPR;
    volatile uint32_t DRENR;
    volatile uint32_t SMCR;
    volatile uint32_t SMCMR;
    volatile uint32_t SMADR;
    volatile uint32_t SMOPR;
    volatile uint32_t SMENR;
    volatile uint8_t dummy1[4];
    union iodefine_reg32_t SMRDR0;
    union iodefine_reg32_t SMRDR1;
    union iodefine_reg32_t SMWDR0;
    union iodefine_reg32_t SMWDR1;

    volatile uint32_t CMNSR;
    volatile uint8_t dummy2[4];
    volatile uint32_t CKDLY;
    volatile uint8_t dummy3[4];
    volatile uint32_t DRDMCR;
    volatile uint32_t DRDRENR;
    volatile uint32_t SMDMCR;
    volatile uint32_t SMDRENR;
    volatile uint32_t SPODLY;
} r_io_spibsc_t;
/*  71 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ssif_iodefine.h" 1 */
/*  119 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/ssif_iodefine.h" */
typedef struct st_ssif
{

    volatile uint32_t SSICR;
    volatile uint32_t SSISR;
    volatile uint8_t dummy1[8];
    volatile uint32_t SSIFCR;
    volatile uint32_t SSIFSR;
    volatile uint32_t SSIFTDR;
    volatile uint32_t SSIFRDR;
    volatile uint32_t SSITDMR;
    volatile uint32_t SSIFCCR;
    volatile uint32_t SSIFCMR;
    volatile uint32_t SSIFCSR;
} r_io_ssif_t;
/*  72 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/usb20_iodefine.h" 1 */
/*  377 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/usb20_iodefine.h" */
typedef struct st_usb20
{

    volatile uint16_t SYSCFG0;
    volatile uint16_t BUSWAIT;
    volatile uint16_t SYSSTS0;
    volatile uint8_t dummy1[2];
    volatile uint16_t DVSTCTR0;
    volatile uint8_t dummy2[2];
    volatile uint16_t TESTMODE;
    volatile uint8_t dummy3[2];


    volatile uint16_t D0FBCFG;
    volatile uint16_t D1FBCFG;
    union iodefine_reg32_t CFIFO;


    union iodefine_reg32_t D0FIFO;
    union iodefine_reg32_t D1FIFO;

    volatile uint16_t CFIFOSEL;
    volatile uint16_t CFIFOCTR;
    volatile uint8_t dummy4[4];


    volatile uint16_t D0FIFOSEL;
    volatile uint16_t D0FIFOCTR;




    volatile uint16_t D1FIFOSEL;
    volatile uint16_t D1FIFOCTR;




    volatile uint16_t INTENB0;
    volatile uint16_t INTENB1;
    volatile uint8_t dummy5[2];
    volatile uint16_t BRDYENB;
    volatile uint16_t NRDYENB;
    volatile uint16_t BEMPENB;
    volatile uint16_t SOFCFG;
    volatile uint8_t dummy6[2];


    volatile uint16_t INTSTS0;
    volatile uint16_t INTSTS1;
    volatile uint8_t dummy7[2];
    volatile uint16_t BRDYSTS;
    volatile uint16_t NRDYSTS;
    volatile uint16_t BEMPSTS;
    volatile uint16_t FRMNUM;
    volatile uint16_t UFRMNUM;
    volatile uint16_t USBADDR;
    volatile uint8_t dummy8[2];
    volatile uint16_t USBREQ;
    volatile uint16_t USBVAL;
    volatile uint16_t USBINDX;
    volatile uint16_t USBLENG;
    volatile uint16_t DCPCFG;
    volatile uint16_t DCPMAXP;
    volatile uint16_t DCPCTR;
    volatile uint8_t dummy9[2];
    volatile uint16_t PIPESEL;
    volatile uint8_t dummy10[2];
    volatile uint16_t PIPECFG;
    volatile uint16_t PIPEBUF;
    volatile uint16_t PIPEMAXP;
    volatile uint16_t PIPEPERI;


    volatile uint16_t PIPE1CTR;
    volatile uint16_t PIPE2CTR;
    volatile uint16_t PIPE3CTR;
    volatile uint16_t PIPE4CTR;
    volatile uint16_t PIPE5CTR;
    volatile uint16_t PIPE6CTR;
    volatile uint16_t PIPE7CTR;
    volatile uint16_t PIPE8CTR;
    volatile uint16_t PIPE9CTR;
    volatile uint16_t PIPEACTR;
    volatile uint16_t PIPEBCTR;
    volatile uint16_t PIPECCTR;
    volatile uint16_t PIPEDCTR;
    volatile uint16_t PIPEECTR;
    volatile uint16_t PIPEFCTR;
    volatile uint8_t dummy11[2];


    volatile uint16_t PIPE1TRE;
    volatile uint16_t PIPE1TRN;




    volatile uint16_t PIPE2TRE;
    volatile uint16_t PIPE2TRN;




    volatile uint16_t PIPE3TRE;
    volatile uint16_t PIPE3TRN;




    volatile uint16_t PIPE4TRE;
    volatile uint16_t PIPE4TRN;




    volatile uint16_t PIPE5TRE;
    volatile uint16_t PIPE5TRN;


    volatile uint16_t PIPEBTRE;
    volatile uint16_t PIPEBTRN;
    volatile uint16_t PIPECTRE;
    volatile uint16_t PIPECTRN;
    volatile uint16_t PIPEDTRE;
    volatile uint16_t PIPEDTRN;
    volatile uint16_t PIPEETRE;
    volatile uint16_t PIPEETRN;
    volatile uint16_t PIPEFTRE;
    volatile uint16_t PIPEFTRN;
    volatile uint16_t PIPE9TRE;
    volatile uint16_t PIPE9TRN;
    volatile uint16_t PIPEATRE;
    volatile uint16_t PIPEATRN;
    volatile uint8_t dummy12[16];


    volatile uint16_t DEVADD0;
    volatile uint16_t DEVADD1;
    volatile uint16_t DEVADD2;
    volatile uint16_t DEVADD3;
    volatile uint16_t DEVADD4;
    volatile uint16_t DEVADD5;
    volatile uint16_t DEVADD6;
    volatile uint16_t DEVADD7;
    volatile uint16_t DEVADD8;
    volatile uint16_t DEVADD9;
    volatile uint16_t DEVADDA;
    volatile uint8_t dummy13[28];
    volatile uint16_t SUSPMODE;
    volatile uint8_t dummy14[92];


    volatile uint32_t D0FIFOB0;
    volatile uint32_t D0FIFOB1;
    volatile uint32_t D0FIFOB2;
    volatile uint32_t D0FIFOB3;
    volatile uint32_t D0FIFOB4;
    volatile uint32_t D0FIFOB5;
    volatile uint32_t D0FIFOB6;
    volatile uint32_t D0FIFOB7;




    volatile uint32_t D1FIFOB0;
    volatile uint32_t D1FIFOB1;
    volatile uint32_t D1FIFOB2;
    volatile uint32_t D1FIFOB3;
    volatile uint32_t D1FIFOB4;
    volatile uint32_t D1FIFOB5;
    volatile uint32_t D1FIFOB6;
    volatile uint32_t D1FIFOB7;


} r_io_usb20_t;


typedef struct st_usb20_from_d0fifosel
{

    volatile uint16_t D0FIFOSEL;
    volatile uint16_t D0FIFOCTR;
} r_io_usb20_from_d0fifosel_t;


typedef struct st_usb20_from_pipe1tre
{

    volatile uint16_t PIPE1TRE;
    volatile uint16_t PIPE1TRN;
} r_io_usb20_from_pipe1tre_t;


typedef struct st_usb20_from_dmfifob0
{



    volatile uint32_t D0FIFOB0;
    volatile uint32_t D0FIFOB1;
    volatile uint32_t D0FIFOB2;
    volatile uint32_t D0FIFOB3;
    volatile uint32_t D0FIFOB4;
    volatile uint32_t D0FIFOB5;
    volatile uint32_t D0FIFOB6;
    volatile uint32_t D0FIFOB7;
} r_io_usb20_from_dmfifob0_t;
/*  73 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/vdc5_iodefine.h" 1 */
/*  1016 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/vdc5_iodefine.h" */
typedef struct st_vdc5
{

    volatile uint32_t INP_UPDATE;
    volatile uint32_t INP_SEL_CNT;
    volatile uint32_t INP_EXT_SYNC_CNT;
    volatile uint32_t INP_VSYNC_PH_ADJ;
    volatile uint32_t INP_DLY_ADJ;
    volatile uint8_t dummy1[108];
    volatile uint32_t IMGCNT_UPDATE;


    volatile uint32_t IMGCNT_NR_CNT0;
    volatile uint32_t IMGCNT_NR_CNT1;
    volatile uint8_t dummy2[20];
    volatile uint32_t IMGCNT_MTX_MODE;
    volatile uint32_t IMGCNT_MTX_YG_ADJ0;
    volatile uint32_t IMGCNT_MTX_YG_ADJ1;
    volatile uint32_t IMGCNT_MTX_CBB_ADJ0;
    volatile uint32_t IMGCNT_MTX_CBB_ADJ1;
    volatile uint32_t IMGCNT_MTX_CRR_ADJ0;
    volatile uint32_t IMGCNT_MTX_CRR_ADJ1;
    volatile uint8_t dummy3[4];
    volatile uint32_t IMGCNT_DRC_REG;
    volatile uint8_t dummy4[60];


    volatile uint32_t SC0_SCL0_UPDATE;


    volatile uint32_t SC0_SCL0_FRC1;
    volatile uint32_t SC0_SCL0_FRC2;
    volatile uint32_t SC0_SCL0_FRC3;
    volatile uint32_t SC0_SCL0_FRC4;
    volatile uint32_t SC0_SCL0_FRC5;
    volatile uint32_t SC0_SCL0_FRC6;
    volatile uint32_t SC0_SCL0_FRC7;
    volatile uint8_t dummy5[4];
    volatile uint32_t SC0_SCL0_FRC9;
    volatile uint16_t SC0_SCL0_MON0;
    volatile uint16_t SC0_SCL0_INT;


    volatile uint32_t SC0_SCL0_DS1;
    volatile uint32_t SC0_SCL0_DS2;
    volatile uint32_t SC0_SCL0_DS3;
    volatile uint32_t SC0_SCL0_DS4;
    volatile uint32_t SC0_SCL0_DS5;
    volatile uint32_t SC0_SCL0_DS6;
    volatile uint32_t SC0_SCL0_DS7;


    volatile uint32_t SC0_SCL0_US1;
    volatile uint32_t SC0_SCL0_US2;
    volatile uint32_t SC0_SCL0_US3;
    volatile uint32_t SC0_SCL0_US4;
    volatile uint32_t SC0_SCL0_US5;
    volatile uint32_t SC0_SCL0_US6;
    volatile uint32_t SC0_SCL0_US7;
    volatile uint32_t SC0_SCL0_US8;
    volatile uint8_t dummy6[4];
    volatile uint32_t SC0_SCL0_OVR1;
    volatile uint8_t dummy7[16];
    volatile uint32_t SC0_SCL1_UPDATE;
    volatile uint8_t dummy8[4];


    volatile uint32_t SC0_SCL1_WR1;
    volatile uint32_t SC0_SCL1_WR2;
    volatile uint32_t SC0_SCL1_WR3;
    volatile uint32_t SC0_SCL1_WR4;
    volatile uint8_t dummy9[4];
    volatile uint32_t SC0_SCL1_WR5;
    volatile uint32_t SC0_SCL1_WR6;
    volatile uint32_t SC0_SCL1_WR7;
    volatile uint32_t SC0_SCL1_WR8;
    volatile uint32_t SC0_SCL1_WR9;
    volatile uint32_t SC0_SCL1_WR10;


    volatile uint32_t SC0_SCL1_WR11;
    volatile uint32_t SC0_SCL1_MON1;




    volatile uint32_t SC0_SCL1_PBUF0;
    volatile uint32_t SC0_SCL1_PBUF1;
    volatile uint32_t SC0_SCL1_PBUF2;
    volatile uint32_t SC0_SCL1_PBUF3;
    volatile uint32_t SC0_SCL1_PBUF_FLD;
    volatile uint32_t SC0_SCL1_PBUF_CNT;


    volatile uint8_t dummy10[44];


    volatile uint32_t GR0_UPDATE;
    volatile uint32_t GR0_FLM_RD;


    volatile uint32_t GR0_FLM1;
    volatile uint32_t GR0_FLM2;
    volatile uint32_t GR0_FLM3;
    volatile uint32_t GR0_FLM4;
    volatile uint32_t GR0_FLM5;
    volatile uint32_t GR0_FLM6;


    volatile uint32_t GR0_AB1;
    volatile uint32_t GR0_AB2;
    volatile uint32_t GR0_AB3;


    volatile uint8_t dummy11[12];


    volatile uint32_t GR0_AB7;
    volatile uint32_t GR0_AB8;
    volatile uint32_t GR0_AB9;
    volatile uint32_t GR0_AB10;
    volatile uint32_t GR0_AB11;
    volatile uint32_t GR0_BASE;


    volatile uint32_t GR0_CLUT;
    volatile uint8_t dummy12[44];


    volatile uint32_t ADJ0_UPDATE;
    volatile uint32_t ADJ0_BKSTR_SET;


    volatile uint32_t ADJ0_ENH_TIM1;
    volatile uint32_t ADJ0_ENH_TIM2;
    volatile uint32_t ADJ0_ENH_TIM3;


    volatile uint32_t ADJ0_ENH_SHP1;
    volatile uint32_t ADJ0_ENH_SHP2;
    volatile uint32_t ADJ0_ENH_SHP3;
    volatile uint32_t ADJ0_ENH_SHP4;
    volatile uint32_t ADJ0_ENH_SHP5;
    volatile uint32_t ADJ0_ENH_SHP6;


    volatile uint32_t ADJ0_ENH_LTI1;
    volatile uint32_t ADJ0_ENH_LTI2;
    volatile uint32_t ADJ0_MTX_MODE;
    volatile uint32_t ADJ0_MTX_YG_ADJ0;
    volatile uint32_t ADJ0_MTX_YG_ADJ1;
    volatile uint32_t ADJ0_MTX_CBB_ADJ0;
    volatile uint32_t ADJ0_MTX_CBB_ADJ1;
    volatile uint32_t ADJ0_MTX_CRR_ADJ0;
    volatile uint32_t ADJ0_MTX_CRR_ADJ1;


    volatile uint8_t dummy13[48];


    volatile uint32_t GR2_UPDATE;
    volatile uint32_t GR2_FLM_RD;


    volatile uint32_t GR2_FLM1;
    volatile uint32_t GR2_FLM2;
    volatile uint32_t GR2_FLM3;
    volatile uint32_t GR2_FLM4;
    volatile uint32_t GR2_FLM5;
    volatile uint32_t GR2_FLM6;


    volatile uint32_t GR2_AB1;
    volatile uint32_t GR2_AB2;
    volatile uint32_t GR2_AB3;


    volatile uint32_t GR2_AB4;
    volatile uint32_t GR2_AB5;
    volatile uint32_t GR2_AB6;


    volatile uint32_t GR2_AB7;
    volatile uint32_t GR2_AB8;
    volatile uint32_t GR2_AB9;
    volatile uint32_t GR2_AB10;
    volatile uint32_t GR2_AB11;
    volatile uint32_t GR2_BASE;


    volatile uint32_t GR2_CLUT;
    volatile uint32_t GR2_MON;
    volatile uint8_t dummy14[40];


    volatile uint32_t GR3_UPDATE;
    volatile uint32_t GR3_FLM_RD;


    volatile uint32_t GR3_FLM1;
    volatile uint32_t GR3_FLM2;
    volatile uint32_t GR3_FLM3;
    volatile uint32_t GR3_FLM4;
    volatile uint32_t GR3_FLM5;
    volatile uint32_t GR3_FLM6;


    volatile uint32_t GR3_AB1;
    volatile uint32_t GR3_AB2;
    volatile uint32_t GR3_AB3;


    volatile uint32_t GR3_AB4;
    volatile uint32_t GR3_AB5;
    volatile uint32_t GR3_AB6;


    volatile uint32_t GR3_AB7;
    volatile uint32_t GR3_AB8;
    volatile uint32_t GR3_AB9;
    volatile uint32_t GR3_AB10;
    volatile uint32_t GR3_AB11;
    volatile uint32_t GR3_BASE;


    volatile uint32_t GR3_CLUT_INT;
    volatile uint32_t GR3_MON;
    volatile uint8_t dummy15[40];
    volatile uint32_t GAM_G_UPDATE;
    volatile uint32_t GAM_SW;


    volatile uint32_t GAM_G_LUT1;
    volatile uint32_t GAM_G_LUT2;
    volatile uint32_t GAM_G_LUT3;
    volatile uint32_t GAM_G_LUT4;
    volatile uint32_t GAM_G_LUT5;
    volatile uint32_t GAM_G_LUT6;
    volatile uint32_t GAM_G_LUT7;
    volatile uint32_t GAM_G_LUT8;
    volatile uint32_t GAM_G_LUT9;
    volatile uint32_t GAM_G_LUT10;
    volatile uint32_t GAM_G_LUT11;
    volatile uint32_t GAM_G_LUT12;
    volatile uint32_t GAM_G_LUT13;
    volatile uint32_t GAM_G_LUT14;
    volatile uint32_t GAM_G_LUT15;
    volatile uint32_t GAM_G_LUT16;


    volatile uint32_t GAM_G_AREA1;
    volatile uint32_t GAM_G_AREA2;
    volatile uint32_t GAM_G_AREA3;
    volatile uint32_t GAM_G_AREA4;
    volatile uint32_t GAM_G_AREA5;
    volatile uint32_t GAM_G_AREA6;
    volatile uint32_t GAM_G_AREA7;
    volatile uint32_t GAM_G_AREA8;
    volatile uint8_t dummy16[24];
    volatile uint32_t GAM_B_UPDATE;
    volatile uint8_t dummy17[4];


    volatile uint32_t GAM_B_LUT1;
    volatile uint32_t GAM_B_LUT2;
    volatile uint32_t GAM_B_LUT3;
    volatile uint32_t GAM_B_LUT4;
    volatile uint32_t GAM_B_LUT5;
    volatile uint32_t GAM_B_LUT6;
    volatile uint32_t GAM_B_LUT7;
    volatile uint32_t GAM_B_LUT8;
    volatile uint32_t GAM_B_LUT9;
    volatile uint32_t GAM_B_LUT10;
    volatile uint32_t GAM_B_LUT11;
    volatile uint32_t GAM_B_LUT12;
    volatile uint32_t GAM_B_LUT13;
    volatile uint32_t GAM_B_LUT14;
    volatile uint32_t GAM_B_LUT15;
    volatile uint32_t GAM_B_LUT16;


    volatile uint32_t GAM_B_AREA1;
    volatile uint32_t GAM_B_AREA2;
    volatile uint32_t GAM_B_AREA3;
    volatile uint32_t GAM_B_AREA4;
    volatile uint32_t GAM_B_AREA5;
    volatile uint32_t GAM_B_AREA6;
    volatile uint32_t GAM_B_AREA7;
    volatile uint32_t GAM_B_AREA8;
    volatile uint8_t dummy18[24];
    volatile uint32_t GAM_R_UPDATE;
    volatile uint8_t dummy19[4];


    volatile uint32_t GAM_R_LUT1;
    volatile uint32_t GAM_R_LUT2;
    volatile uint32_t GAM_R_LUT3;
    volatile uint32_t GAM_R_LUT4;
    volatile uint32_t GAM_R_LUT5;
    volatile uint32_t GAM_R_LUT6;
    volatile uint32_t GAM_R_LUT7;
    volatile uint32_t GAM_R_LUT8;
    volatile uint32_t GAM_R_LUT9;
    volatile uint32_t GAM_R_LUT10;
    volatile uint32_t GAM_R_LUT11;
    volatile uint32_t GAM_R_LUT12;
    volatile uint32_t GAM_R_LUT13;
    volatile uint32_t GAM_R_LUT14;
    volatile uint32_t GAM_R_LUT15;
    volatile uint32_t GAM_R_LUT16;


    volatile uint32_t GAM_R_AREA1;
    volatile uint32_t GAM_R_AREA2;
    volatile uint32_t GAM_R_AREA3;
    volatile uint32_t GAM_R_AREA4;
    volatile uint32_t GAM_R_AREA5;
    volatile uint32_t GAM_R_AREA6;
    volatile uint32_t GAM_R_AREA7;
    volatile uint32_t GAM_R_AREA8;
    volatile uint8_t dummy20[24];
    volatile uint32_t TCON_UPDATE;
    volatile uint32_t TCON_TIM;


    volatile uint32_t TCON_TIM_STVA1;
    volatile uint32_t TCON_TIM_STVA2;


    volatile uint32_t TCON_TIM_STVB1;
    volatile uint32_t TCON_TIM_STVB2;


    volatile uint32_t TCON_TIM_STH1;
    volatile uint32_t TCON_TIM_STH2;


    volatile uint32_t TCON_TIM_STB1;
    volatile uint32_t TCON_TIM_STB2;


    volatile uint32_t TCON_TIM_CPV1;
    volatile uint32_t TCON_TIM_CPV2;


    volatile uint32_t TCON_TIM_POLA1;
    volatile uint32_t TCON_TIM_POLA2;


    volatile uint32_t TCON_TIM_POLB1;
    volatile uint32_t TCON_TIM_POLB2;
    volatile uint32_t TCON_TIM_DE;
    volatile uint8_t dummy21[60];
    volatile uint32_t OUT_UPDATE;
    volatile uint32_t OUT_SET;


    volatile uint32_t OUT_BRIGHT1;
    volatile uint32_t OUT_BRIGHT2;
    volatile uint32_t OUT_CONTRAST;
    volatile uint32_t OUT_PDTHA;
    volatile uint8_t dummy22[12];
    volatile uint32_t OUT_CLK_PHASE;
    volatile uint8_t dummy23[88];


    volatile uint32_t SYSCNT_INT1;
    volatile uint32_t SYSCNT_INT2;
    volatile uint32_t SYSCNT_INT3;
    volatile uint32_t SYSCNT_INT4;
    volatile uint32_t SYSCNT_INT5;
    volatile uint32_t SYSCNT_INT6;
    volatile uint16_t SYSCNT_PANEL_CLK;
    volatile uint16_t SYSCNT_CLUT;
    volatile uint8_t dummy24[356];


    volatile uint32_t SC1_SCL0_UPDATE;


    volatile uint32_t SC1_SCL0_FRC1;
    volatile uint32_t SC1_SCL0_FRC2;
    volatile uint32_t SC1_SCL0_FRC3;
    volatile uint32_t SC1_SCL0_FRC4;
    volatile uint32_t SC1_SCL0_FRC5;
    volatile uint32_t SC1_SCL0_FRC6;
    volatile uint32_t SC1_SCL0_FRC7;
    volatile uint8_t dummy25[4];
    volatile uint32_t SC1_SCL0_FRC9;
    volatile uint16_t SC1_SCL0_MON0;
    volatile uint16_t SC1_SCL0_INT;


    volatile uint32_t SC1_SCL0_DS1;
    volatile uint32_t SC1_SCL0_DS2;
    volatile uint32_t SC1_SCL0_DS3;
    volatile uint32_t SC1_SCL0_DS4;
    volatile uint32_t SC1_SCL0_DS5;
    volatile uint32_t SC1_SCL0_DS6;
    volatile uint32_t SC1_SCL0_DS7;


    volatile uint32_t SC1_SCL0_US1;
    volatile uint32_t SC1_SCL0_US2;
    volatile uint32_t SC1_SCL0_US3;
    volatile uint32_t SC1_SCL0_US4;
    volatile uint32_t SC1_SCL0_US5;
    volatile uint32_t SC1_SCL0_US6;
    volatile uint32_t SC1_SCL0_US7;
    volatile uint32_t SC1_SCL0_US8;
    volatile uint8_t dummy26[4];
    volatile uint32_t SC1_SCL0_OVR1;
    volatile uint8_t dummy27[16];
    volatile uint32_t SC1_SCL1_UPDATE;
    volatile uint8_t dummy28[4];


    volatile uint32_t SC1_SCL1_WR1;
    volatile uint32_t SC1_SCL1_WR2;
    volatile uint32_t SC1_SCL1_WR3;
    volatile uint32_t SC1_SCL1_WR4;
    volatile uint8_t dummy29[4];
    volatile uint32_t SC1_SCL1_WR5;
    volatile uint32_t SC1_SCL1_WR6;
    volatile uint32_t SC1_SCL1_WR7;
    volatile uint32_t SC1_SCL1_WR8;
    volatile uint32_t SC1_SCL1_WR9;
    volatile uint32_t SC1_SCL1_WR10;


    volatile uint32_t SC1_SCL1_WR11;
    volatile uint32_t SC1_SCL1_MON1;




    volatile uint32_t SC1_SCL1_PBUF0;
    volatile uint32_t SC1_SCL1_PBUF1;
    volatile uint32_t SC1_SCL1_PBUF2;
    volatile uint32_t SC1_SCL1_PBUF3;
    volatile uint32_t SC1_SCL1_PBUF_FLD;
    volatile uint32_t SC1_SCL1_PBUF_CNT;


    volatile uint8_t dummy30[44];


    volatile uint32_t GR1_UPDATE;
    volatile uint32_t GR1_FLM_RD;


    volatile uint32_t GR1_FLM1;
    volatile uint32_t GR1_FLM2;
    volatile uint32_t GR1_FLM3;
    volatile uint32_t GR1_FLM4;
    volatile uint32_t GR1_FLM5;
    volatile uint32_t GR1_FLM6;


    volatile uint32_t GR1_AB1;
    volatile uint32_t GR1_AB2;
    volatile uint32_t GR1_AB3;


    volatile uint32_t GR1_AB4;
    volatile uint32_t GR1_AB5;
    volatile uint32_t GR1_AB6;


    volatile uint32_t GR1_AB7;
    volatile uint32_t GR1_AB8;
    volatile uint32_t GR1_AB9;
    volatile uint32_t GR1_AB10;
    volatile uint32_t GR1_AB11;
    volatile uint32_t GR1_BASE;


    volatile uint32_t GR1_CLUT;
    volatile uint32_t GR1_MON;
    volatile uint8_t dummy31[40];


    volatile uint32_t ADJ1_UPDATE;
    volatile uint32_t ADJ1_BKSTR_SET;


    volatile uint32_t ADJ1_ENH_TIM1;
    volatile uint32_t ADJ1_ENH_TIM2;
    volatile uint32_t ADJ1_ENH_TIM3;


    volatile uint32_t ADJ1_ENH_SHP1;
    volatile uint32_t ADJ1_ENH_SHP2;
    volatile uint32_t ADJ1_ENH_SHP3;
    volatile uint32_t ADJ1_ENH_SHP4;
    volatile uint32_t ADJ1_ENH_SHP5;
    volatile uint32_t ADJ1_ENH_SHP6;


    volatile uint32_t ADJ1_ENH_LTI1;
    volatile uint32_t ADJ1_ENH_LTI2;
    volatile uint32_t ADJ1_MTX_MODE;
    volatile uint32_t ADJ1_MTX_YG_ADJ0;
    volatile uint32_t ADJ1_MTX_YG_ADJ1;
    volatile uint32_t ADJ1_MTX_CBB_ADJ0;
    volatile uint32_t ADJ1_MTX_CBB_ADJ1;
    volatile uint32_t ADJ1_MTX_CRR_ADJ0;
    volatile uint32_t ADJ1_MTX_CRR_ADJ1;


    volatile uint8_t dummy32[48];
    volatile uint32_t GR_VIN_UPDATE;
    volatile uint8_t dummy33[28];


    volatile uint32_t GR_VIN_AB1;
    volatile uint32_t GR_VIN_AB2;
    volatile uint32_t GR_VIN_AB3;
    volatile uint32_t GR_VIN_AB4;
    volatile uint32_t GR_VIN_AB5;
    volatile uint32_t GR_VIN_AB6;
    volatile uint32_t GR_VIN_AB7;
    volatile uint8_t dummy34[16];
    volatile uint32_t GR_VIN_BASE;
    volatile uint8_t dummy35[4];
    volatile uint32_t GR_VIN_MON;
    volatile uint8_t dummy36[40];
    volatile uint32_t OIR_SCL0_UPDATE;


    volatile uint32_t OIR_SCL0_FRC1;
    volatile uint32_t OIR_SCL0_FRC2;
    volatile uint32_t OIR_SCL0_FRC3;
    volatile uint32_t OIR_SCL0_FRC4;
    volatile uint32_t OIR_SCL0_FRC5;
    volatile uint32_t OIR_SCL0_FRC6;
    volatile uint32_t OIR_SCL0_FRC7;
    volatile uint8_t dummy37[12];


    volatile uint32_t OIR_SCL0_DS1;
    volatile uint32_t OIR_SCL0_DS2;
    volatile uint32_t OIR_SCL0_DS3;
    volatile uint8_t dummy38[12];
    volatile uint32_t OIR_SCL0_DS7;
    volatile uint32_t OIR_SCL0_US1;
    volatile uint32_t OIR_SCL0_US2;
    volatile uint32_t OIR_SCL0_US3;
    volatile uint8_t dummy39[16];
    volatile uint32_t OIR_SCL0_US8;
    volatile uint8_t dummy40[4];
    volatile uint32_t OIR_SCL0_OVR1;
    volatile uint8_t dummy41[16];
    volatile uint32_t OIR_SCL1_UPDATE;
    volatile uint8_t dummy42[4];


    volatile uint32_t OIR_SCL1_WR1;
    volatile uint32_t OIR_SCL1_WR2;
    volatile uint32_t OIR_SCL1_WR3;
    volatile uint32_t OIR_SCL1_WR4;
    volatile uint8_t dummy43[4];
    volatile uint32_t OIR_SCL1_WR5;
    volatile uint32_t OIR_SCL1_WR6;
    volatile uint32_t OIR_SCL1_WR7;
    volatile uint8_t dummy44[88];
    volatile uint32_t GR_OIR_UPDATE;
    volatile uint32_t GR_OIR_FLM_RD;


    volatile uint32_t GR_OIR_FLM1;
    volatile uint32_t GR_OIR_FLM2;
    volatile uint32_t GR_OIR_FLM3;
    volatile uint32_t GR_OIR_FLM4;
    volatile uint32_t GR_OIR_FLM5;
    volatile uint32_t GR_OIR_FLM6;


    volatile uint32_t GR_OIR_AB1;
    volatile uint32_t GR_OIR_AB2;
    volatile uint32_t GR_OIR_AB3;
    volatile uint8_t dummy45[12];
    volatile uint32_t GR_OIR_AB7;
    volatile uint32_t GR_OIR_AB8;
    volatile uint32_t GR_OIR_AB9;
    volatile uint32_t GR_OIR_AB10;
    volatile uint32_t GR_OIR_AB11;
    volatile uint32_t GR_OIR_BASE;
    volatile uint32_t GR_OIR_CLUT;
    volatile uint32_t GR_OIR_MON;
} r_io_vdc5_t;


typedef struct st_vdc5_from_gr0_update
{

    volatile uint32_t GR0_UPDATE;
    volatile uint32_t GR0_FLM_RD;
    volatile uint32_t GR0_FLM1;
    volatile uint32_t GR0_FLM2;
    volatile uint32_t GR0_FLM3;
    volatile uint32_t GR0_FLM4;
    volatile uint32_t GR0_FLM5;
    volatile uint32_t GR0_FLM6;
    volatile uint32_t GR0_AB1;
    volatile uint32_t GR0_AB2;
    volatile uint32_t GR0_AB3;
} r_io_vdc5_from_gr0_update_t;


typedef struct st_vdc5_from_gr0_ab7
{

    volatile uint32_t GR0_AB7;
    volatile uint32_t GR0_AB8;
    volatile uint32_t GR0_AB9;
    volatile uint32_t GR0_AB10;
    volatile uint32_t GR0_AB11;
    volatile uint32_t GR0_BASE;
} r_io_vdc5_from_gr0_ab7_t;


typedef struct st_vdc5_from_adj0_update
{

    volatile uint32_t ADJ0_UPDATE;
    volatile uint32_t ADJ0_BKSTR_SET;
    volatile uint32_t ADJ0_ENH_TIM1;
    volatile uint32_t ADJ0_ENH_TIM2;
    volatile uint32_t ADJ0_ENH_TIM3;
    volatile uint32_t ADJ0_ENH_SHP1;
    volatile uint32_t ADJ0_ENH_SHP2;
    volatile uint32_t ADJ0_ENH_SHP3;
    volatile uint32_t ADJ0_ENH_SHP4;
    volatile uint32_t ADJ0_ENH_SHP5;
    volatile uint32_t ADJ0_ENH_SHP6;
    volatile uint32_t ADJ0_ENH_LTI1;
    volatile uint32_t ADJ0_ENH_LTI2;
    volatile uint32_t ADJ0_MTX_MODE;
    volatile uint32_t ADJ0_MTX_YG_ADJ0;
    volatile uint32_t ADJ0_MTX_YG_ADJ1;
    volatile uint32_t ADJ0_MTX_CBB_ADJ0;
    volatile uint32_t ADJ0_MTX_CBB_ADJ1;
    volatile uint32_t ADJ0_MTX_CRR_ADJ0;
    volatile uint32_t ADJ0_MTX_CRR_ADJ1;
} r_io_vdc5_from_adj0_update_t;


typedef struct st_vdc5_from_sc0_scl0_update
{

    volatile uint32_t SC0_SCL0_UPDATE;
    volatile uint32_t SC0_SCL0_FRC1;
    volatile uint32_t SC0_SCL0_FRC2;
    volatile uint32_t SC0_SCL0_FRC3;
    volatile uint32_t SC0_SCL0_FRC4;
    volatile uint32_t SC0_SCL0_FRC5;
    volatile uint32_t SC0_SCL0_FRC6;
    volatile uint32_t SC0_SCL0_FRC7;
    volatile uint8_t dummy5[4];
    volatile uint32_t SC0_SCL0_FRC9;
    volatile uint16_t SC0_SCL0_MON0;
    volatile uint16_t SC0_SCL0_INT;
    volatile uint32_t SC0_SCL0_DS1;
    volatile uint32_t SC0_SCL0_DS2;
    volatile uint32_t SC0_SCL0_DS3;
    volatile uint32_t SC0_SCL0_DS4;
    volatile uint32_t SC0_SCL0_DS5;
    volatile uint32_t SC0_SCL0_DS6;
    volatile uint32_t SC0_SCL0_DS7;
    volatile uint32_t SC0_SCL0_US1;
    volatile uint32_t SC0_SCL0_US2;
    volatile uint32_t SC0_SCL0_US3;
    volatile uint32_t SC0_SCL0_US4;
    volatile uint32_t SC0_SCL0_US5;
    volatile uint32_t SC0_SCL0_US6;
    volatile uint32_t SC0_SCL0_US7;
    volatile uint32_t SC0_SCL0_US8;
    volatile uint8_t dummy6[4];
    volatile uint32_t SC0_SCL0_OVR1;
    volatile uint8_t dummy7[16];
    volatile uint32_t SC0_SCL1_UPDATE;
    volatile uint8_t dummy8[4];
    volatile uint32_t SC0_SCL1_WR1;
    volatile uint32_t SC0_SCL1_WR2;
    volatile uint32_t SC0_SCL1_WR3;
    volatile uint32_t SC0_SCL1_WR4;
    volatile uint8_t dummy9[4];
    volatile uint32_t SC0_SCL1_WR5;
    volatile uint32_t SC0_SCL1_WR6;
    volatile uint32_t SC0_SCL1_WR7;
    volatile uint32_t SC0_SCL1_WR8;
    volatile uint32_t SC0_SCL1_WR9;
    volatile uint32_t SC0_SCL1_WR10;
} r_io_vdc5_from_sc0_scl0_updat_t ;


typedef struct st_vdc5_from_sc0_scl1_pbuf0
{

    volatile uint32_t SC0_SCL1_PBUF0;
    volatile uint32_t SC0_SCL1_PBUF1;
    volatile uint32_t SC0_SCL1_PBUF2;
    volatile uint32_t SC0_SCL1_PBUF3;
    volatile uint32_t SC0_SCL1_PBUF_FLD;
    volatile uint32_t SC0_SCL1_PBUF_CNT;
} r_io_vdc5_from_sc0_scl1_pbuf0_t;
/*  74 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/wdt_iodefine.h" 1 */
/*  44 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefines/wdt_iodefine.h" */
typedef struct st_wdt
{

    volatile uint16_t WTCSR;
    volatile uint16_t WTCNT;
    volatile uint16_t WRCSR;
} r_io_wdt_t;
/*  75 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/iodefine.h" 2 */
/*  655 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/inc/RZ_A1H.h" 2 */
/*  2 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/MBRZA1H.h" 2 */
/*  11 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/cmsis.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/common/cmsis_nvic.h" 1 */
/*  35 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/common/cmsis_nvic.h" */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/cmsis.h" 1 */
/*  36 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/common/cmsis_nvic.h" 2 */





void NVIC_SetVector(IRQn_Type IRQn, uint32_t vector);
uint32_t NVIC_GetVector(IRQn_Type IRQn);
/*  12 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device/cmsis.h" 2 */
/*  21 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PortNames.h" 1 */
/*  23 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PortNames.h" */
typedef enum {
    Port0 = 0,
    Port1 = 1,
    Port2 = 2,
    Port3 = 3,
    Port4 = 4,
    Port5 = 5,
    Port6 = 6,
    Port7 = 7,
    Port8 = 8,
    Port9 = 9,
    Port10 = 10,
    Port11 = 11
} PortName;
/*  22 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PeripheralNames.h" 1 */
/*  20 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PeripheralNames.h" */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PinNames.h" 1 */
/*  25 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PinNames.h" */
typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;



typedef enum {
    P0_0 = 0,
          P0_1, P0_2, P0_3, P0_4, P0_5,_P0_6,_P0_7,_P0_8,_P0_9,_P0_10,_P0_11,_P0_12,_P0_13,_P0_14,_P0_15,
    P1_0, P1_1, P1_2, P1_3, P1_4, P1_5, P1_6, P1_7, P1_8, P1_9, P1_10, P1_11, P1_12, P1_13, P1_14, P1_15,
    P2_0, P2_1, P2_2, P2_3, P2_4, P2_5, P2_6, P2_7, P2_8, P2_9, P2_10, P2_11, P2_12, P2_13, P2_14, P2_15,
    P3_0, P3_1, P3_2, P3_3, P3_4, P3_5, P3_6, P3_7, P3_8, P3_9, P3_10, P3_11, P3_12, P3_13, P3_14, P3_15,
    P4_0, P4_1, P4_2, P4_3, P4_4, P4_5, P4_6, P4_7, P4_8, P4_9, P4_10, P4_11, P4_12, P4_13, P4_14, P4_15,
    P5_0, P5_1, P5_2, P5_3, P5_4, P5_5, P5_6, P5_7, P5_8, P5_9, P5_10, P5_11, P5_12, P5_13, P5_14, P5_15,
    P6_0, P6_1, P6_2, P6_3, P6_4, P6_5, P6_6, P6_7, P6_8, P6_9, P6_10, P6_11, P6_12, P6_13, P6_14, P6_15,
    P7_0, P7_1, P7_2, P7_3, P7_4, P7_5, P7_6, P7_7, P7_8, P7_9, P7_10, P7_11, P7_12, P7_13, P7_14, P7_15,
    P8_0, P8_1, P8_2, P8_3, P8_4, P8_5, P8_6, P8_7, P8_8, P8_9, P8_10, P8_11, P8_12, P8_13, P8_14, P8_15,
    P9_0, P9_1, P9_2, P9_3, P9_4, P9_5, P9_6, P9_7, P9_8, P9_9, P9_10, P9_11, P9_12, P9_13, P9_14, P9_15,
    P10_0,P10_1,P10_2,P10_3,P10_4,P10_5,P10_6,P10_7,P10_8,P10_9,P10_10,P10_11,P10_12,P10_13,P10_14,P10_15,
    P11_0,P11_1,P11_2,P11_3,P11_4,P11_5,P11_6,P11_7,P11_8,P11_9,P11_10,P11_11,P11_12,P11_13,P11_14,P11_15,


    LED1 = P6_13,
    LED2 = P6_14,
    LED3 = P6_15,
    LED4 = P6_12,

    LED_RED = LED1,
    LED_GREEN= LED2,
    LED_BLUE = LED3,
    LED_USER = LED4,

    USBTX = P6_3,
    USBRX = P6_2,


    D0 = P2_15,
    D1 = P2_14,
    D2 = P4_7,
    D3 = P4_6,
    D4 = P4_5,
    D5 = P4_4,
    D6 = P8_13,
    D7 = P8_11,
    D8 = P8_15,
    D9 = P8_14,
    D10 = P10_13,
    D11 = P10_14,
    D12 = P10_15,
    D13 = P10_12,
    D14 = P1_3,
    D15 = P1_2,

    A0 = P1_8,
    A1 = P1_9,
    A2 = P1_10,
    A3 = P1_11,
    A4 = P1_13,
    A5 = P1_15,

    I2C_SCL = D15,
    I2C_SDA = D14,

    USER_BUTTON0 = P6_0,

    BUTTON1 = USER_BUTTON0,


    NC = (int)0xFFFFFFFF
} PinName;

typedef enum {
    PullUp = 0,
    PullDown = 3,
    PullNone = 2,
    OpenDrain = 4,
    PullDefault = PullDown
} PinMode;
/*  21 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PeripheralNames.h" 2 */





typedef enum {
    UART0,
    UART1,
    UART2,
    UART3,
    UART4,
    UART5,
    UART6,
    UART7,
} UARTName;

typedef enum {
    PWM_PWM1A = 0,
    PWM_PWM1B,
    PWM_PWM1C,
    PWM_PWM1D,
    PWM_PWM1E,
    PWM_PWM1F,
    PWM_PWM1G,
    PWM_PWM1H,
    PWM_PWM2A,
    PWM_PWM2B,
    PWM_PWM2C,
    PWM_PWM2D,
    PWM_PWM2E,
    PWM_PWM2F,
    PWM_PWM2G,
    PWM_PWM2H,
    PWM_TIOC0A = 0x20,
    PWM_TIOC0C,
    PWM_TIOC1A,
    PWM_TIOC2A,
    PWM_TIOC3A,
    PWM_TIOC3C,
    PWM_TIOC4A,
    PWM_TIOC4C,
} PWMName;

typedef enum {
    AN0= 0,
    AN1= 1,
    AN2= 2,
    AN3= 3,
    AN4= 4,
    AN5= 5,
    AN6= 6,
    AN7= 7,
} ADCName;

typedef enum {
    SPI_0 = 0,
    SPI_1,
    SPI_2,
    SPI_3,
    SPI_4,
} SPIName;

typedef enum {
    I2C_0 = 0,
    I2C_1,
    I2C_2,
    I2C_3,
} I2CName;

typedef enum {
    CAN_0 = 0,
    CAN_1,
    CAN_2,
    CAN_3,
    CAN_4,
} CANName;
/*  23 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/PinNames.h" 1 */
/*  24 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 2 */
/*  1 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/gpio_object.h" 1 */
/*  19 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/gpio_object.h" */
/*  1 "../mbed/platform/mbed_assert.h" 1 */
/*  26 "../mbed/platform/mbed_assert.h" */
/*  1 "../mbed/platform/mbed_preprocessor.h" 1 */
/*  27 "../mbed/platform/mbed_assert.h" 2 */
/*  40 "../mbed/platform/mbed_assert.h" */
void mbed_assert_internal(const char *expr, const char *file, int line);
/*  20 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/gpio_object.h" 2 */





typedef struct {
    PinName pin;
    uint32_t mask;

    volatile uint32_t *reg_dir;
    volatile uint32_t *reg_set;
    volatile const uint32_t *reg_in;
    volatile uint32_t *reg_buf;
} gpio_t;

static inline void gpio_write(gpio_t *obj, int value) {
    *obj->reg_set = (obj->mask << 16) | ((value != 0) ? obj->mask : 0);
}

static inline int gpio_read(gpio_t *obj) {
    return ((*obj->reg_in & obj->mask) ? 1 : 0);
}

static inline int gpio_is_connected(const gpio_t *obj) {
    return obj->pin != (PinName)NC;
}
/*  25 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/objects.h" 2 */





struct i2c_s {
    uint32_t i2c;
    uint32_t dummy;
    uint8_t pclk_bit;
    uint8_t width_low;
    uint8_t width_hi;
    int bbsy_wait_cnt;
    int last_stop_flag;
};

struct spi_s {
    struct st_rspi *spi;
    uint32_t bits;
    int index;
};

struct gpio_irq_s {
    uint32_t port;
    uint32_t pin;
    uint32_t ch;
    uint8_t int_enable;
};

struct port_s {
    volatile uint32_t *reg_dir;
    volatile uint32_t *reg_out;
    volatile const uint32_t *reg_in;
    volatile uint32_t *reg_buf;
    PortName port;
    uint32_t mask;
};

struct serial_s {
    struct st_scif *uart;
    int index;
};

struct pwmout_s {
    uint32_t ch;
    PWMName pwm;
};

struct analogin_s {
    ADCName adc;
};

struct can_s {
    uint32_t ch;
};

struct trng_s {
    uint8_t dummy;
};

struct flash_s {
    uint8_t dummy;
};
/*  48 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device.h" 2 */
/*  1 "../mbed/hal/dma_api.h" 1 */
/*  26 "../mbed/hal/dma_api.h" */
typedef enum {
    DMA_USAGE_NEVER,
    DMA_USAGE_OPPORTUNISTIC,
    DMA_USAGE_ALWAYS,
    DMA_USAGE_TEMPORARY_ALLOCATED,
    DMA_USAGE_ALLOCATED
} DMAUsage;





void dma_init(void);

int dma_channel_allocate(uint32_t capabilities);

int dma_channel_free(int channelid);
/*  49 "../mbed/targets/TARGET_RENESAS/TARGET_RZA1XX/TARGET_RZ_A1H/device.h" 2 */
/*  37 "./gen/tmp_C_src.c" 2 */
