// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_HILLSIDE48)

#define XXX &none

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_HILLSIDE48(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX                 XXX  K25  K26  K27  K28  K29  XXX  \
          XXX       XXX  K32  K33  K34       K35  K36  K37  XXX       XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 41 42
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 43 44
#else
#define MIRYOKU_LAYOUTMAPPING_HILLSIDE48(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX                 XXX  K25  K26  K27  K28  K29  XXX  \
          XXX       K32  K33  K34  XXX       XXX  K35  K36  K37       XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 40 41
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 44 45
#endif

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_HILLSIDE48
