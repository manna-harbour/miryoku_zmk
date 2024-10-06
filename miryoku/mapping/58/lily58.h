// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_LILY58)

#define XXX &none
#define ACC &kp J

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX                 XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09  XXX \
ACC  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  ACC \
XXX  K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27  K28  K29  XXX \
               XXX  K32  K33  K34       K35  K36  K37  XXX

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 52 53
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 54 55

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_LILY58
