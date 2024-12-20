// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K42  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K38 \
K43  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K39 \
K40  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K41 \
               K32  K33  K34       K35  K36  K37
// to revise sym layer, see
// https://github.com/mnivoliez/miryoku_zmk/blob/master/miryoku/custom_config.h

#define K38 &kp F5
#define K39 &kp F9

#define K40 &kp LSHFT
#define K41 &kp RSHFT

#define K42 &u_bt_sel_0
#define K43 &u_bt_sel_1

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          &kp F1,            &kp F2,            &kp F3,            &kp F4,            U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K44 \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K45 \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K46 \
               K32  K33  K34       K35  K36  K37

#define K44 &kp F10
#define K45 &kp F11
#define K46 &kp F12

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_CORNE
