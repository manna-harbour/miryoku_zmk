// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_NAV_VI

#define MOD_1 LGUI
#define MOD_2 LSHFT
#define MOD_3 LALT
#define MOD_4 LCTRL

// replace quotes with semi colon to better mimic qwerty
// use custom mod tap config
// use R mods on the right side
// disable bottom row alt mod
// no layer on space because it has issues with vscode
// remove mouse layer since it's merged with nav
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,               \
&lhm MOD_4 A,      &lhm MOD_3 S,      &lhm MOD_2 D,      &lhm MOD_1 F,      &kp G,             &kp H,             &rhm RGUI J,       &rhm RSHFT K,      &rhm RALT L,       &rhm RCTRL SEMI,     \
&qlt U_BUTTON Z,   &lhm LS(LGUI) X,   &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &rhm RS(RGUI) DOT, &qlt U_BUTTON SLASH, \
U_NP,              U_NP,              &qlt U_MEDIA ESC,  &kp SPC,           &qlt U_NAV TAB,    &qlt U_SYM RET,    &qlt U_NUM BSPC,   &qlt U_FUN DEL,    U_NP,              U_NP

// add reset button to button layer
#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         &reset,            &reset,            &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

// replace dot with quotes and RALT
#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp SQT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// replace lbr with double quote
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,               \
U_NP,              U_NP,              &kp DQT,           &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// define nav layer as a combination of nav and mouse layer, and RALT
#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &kp PG_UP,         \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            &kp PG_DN,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#if defined (MIRYOKU_KEYBOARD_LOTUS58)
#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_LOTUS58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp GRAVE       &kp N1      &kp N2      &kp N3          &kp N4      &kp N5                                      &kp N6      &kp N7      &kp N8      &kp N9      &kp N0      &kp MINUS \
&kp TAB         K00         K01         K02             K03         K04                                         K05         K06         K07         K08         K09         &kp EQUAL \
&mt LCTRL ESC   K10         K11         K12             K13         K14         XXX             XXX             K15         K16         K17         K18         K19         &kp SQT   \
&kp LSHFT       K20         K21         K22             K23         K24         &kp LBKT        &kp RBKT        K25         K26         K27         K28         K29         &kp LSHFT \
                                        &kp LGUI        K32         K33         K34             K35             K36         K37         &kp LGUI

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 54 55
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 56 57
#define CUSTOM_PHT_LEFT_KEYS \
  6 7 8 9 10 11 18 19 20 21 22 23 31 32 33 34 35 36 37 45 46 47 48 49 50 51 56 57 58 59 53 54 55
#define CUSTOM_PHT_RIGHT_KEYS \
  0 1 2 3 4 5 12 13 14 15 16 17 24 25 26 27 28 29 30 38 39 40 41 42 43 44 52 53 54 55 56 57 58
#define CUSTOM_BASE_ESC_COMBO_KEYS 39 40
#endif

#if defined (MIRYOKU_KEYBOARD_CORNE)
#define CUSTOM_PHT_LEFT_KEYS \
  6 7 8 9 10 11 18 19 20 21 22 23 30 31 32 33 34 35 39 40 41
#define CUSTOM_PHT_RIGHT_KEYS \
  0 1 2 3 4 5 12 13 14 15 16 17 24 25 26 27 28 29 36 37 38
#define CUSTOM_BASE_ESC_COMBO_KEYS 25 26
#endif