// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Workman base flip layer. Replace apostrophe with semicolon
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SEMI,          \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    &kp G,             &kp Y,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

// flipped navigation layer, preserving the top-to-bottom ordering. Additionally, I disabled some kp's such as U_BOOT
#define MIRYOKU_LAYER_NAV \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              U_NA,              &kp RCTRL,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// num flip layer, with apostrophe instead of semicolon
#define MIRYOKU_LAYER_NUM \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SQT,           \
U_NA,              &kp RALT,          &kp RCTRL,         U_NA,              U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp N0,            &kp DOT,           U_NP,              U_NP

// sym flip layer, with quotes instead of colon
#define MIRYOKU_LAYER_SYM \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp DQT,           \
U_NA,              &kp RALT,          &kp RCTRL,         U_NA,              U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP

#define MIRYOKU_MEDIA \
U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &bt BT_CLR_ALL,    &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP
