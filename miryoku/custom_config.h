// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_KLUDGE_TOPROWCOMBOS
//#define MIRYOKU_ALPHAS_QWERTY
//#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC


#define MIRYOKU_LAYER_BASE \
U_LT(U_BUTTON, Q), &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             U_LT(U_BUTTON, P), \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),     U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LGUI, K),     U_MT(LALT, L),     U_MT(LCTRL, SQT),  \
U_MT(LSHFT, Z),    U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_MT(LSHFT, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, GRAVE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET), U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC), U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp AMPS,          &kp ASTRK,         &kp MINUS,         &kp PLUS,          \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            U_MT(LSHFT, N7),   U_MT(LGUI, N8),    U_MT(LALT, N9),    U_MT(LCTRL, N0),   \
U_NP,              U_NP,              U_NP,              U_NP,              U_NP,              U_NA,              U_NP,              U_NP,              U_NP,              U_NA,              \
U_NP,              U_NP,              U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp GRAVE,         U_NA,              U_NA,              U_NA,              U_NA,              &kp PIPE,          &kp LPAR,          &kp RPAR,          &kp UNDER,         &kp EQUAL,            \
&kp TILDE,         U_NA,              U_NA,              U_NA,              U_NA,              &kp COLON,         &kp LBRC,          &kp RBRC,          U_NA,              U_NA,                 \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp SEMI,          &kp LBKT,          &kp RBKT,          U_NA,              &kp BSLH,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         &kp LG(LS(N5)),    &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              U_CUT,             U_CPY,             U_PST,             &kp LG(LC(LS(N4))),&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,               \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
  
#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LCTRL,         &kp LALT,          &kp LGUI,         &kp LSHFT,          U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_NA,           &kp LG(F10),          U_NA,              U_NA,              &kp LG(F6),        U_NA,              U_NA,              U_NA,              U_NA,              U_NA,             \
U_NA,           &kp LG(F1),           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,             \
U_NA,           U_NA,                 &kp LG(F2),        U_NA,              &kp LG(F3),        U_NA,              U_NA,              U_NA,              U_NA,              U_NA,             \
U_NP,           U_NP,                 U_NA,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP
