// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_MAPPING( \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
          K34  K33                 K36  K35

#define MIRYOKU_MAPPING_TAP MIRYOKU_MAPPING

#define MIRYOKU_COMBO_TPSL 30 31
#define MIRYOKU_COMBO_TPSR 32 33

#define MIRYOKU_COMBO_TPS_ENABLE
