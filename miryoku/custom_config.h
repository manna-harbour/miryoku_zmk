// Copyright 2023 vbn
// https://github.com/vbn/miryoku_zmk

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_BASE \
    &kp Q,           &kp W,           &kp E,            &kp R,             &kp T,               &kp Y,             &kp U,              &kp I,           &kp O,          &kp P,            \
    U_MT(LGUI, A),   U_MT(LALT, S),   U_MT(LCTRL, D),   U_MT(LSHFT, F),    &kp G,               &kp H,             U_MT(LSHFT, J),     U_MT(LCTRL, K),  U_MT(LALT, L),  U_MT(LGUI, SQT),  \
    &kp Z,           &kp X,           &kp C,            &kp V,             &kp B,               &kp N,             &kp M,              &kp COMMA,       &kp DOT,        &kp SLASH,        \
    U_NP,            U_NP,            &kp ESC,          U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),  U_LT(U_FUN, RET),  U_LT(U_NUM, BSPC),  &kp DEL,         U_NP,           U_NP

#define MIRYOKU_LAYER_NAV \
    U_NA,            U_NA,            U_NA,             U_NA,              U_NA,                U_NA,              U_NA,               U_NA,            U_NA,           U_NA,             \
    &kp LGUI,        &kp LALT,        &kp LCTRL,        &kp LSHFT,         U_NA,                &kp LEFT,          &kp DOWN,           &kp UP,          &kp RIGHT,      &kp DEL,          \
    U_NA,            U_NA,            U_NA,             U_NA,              U_NA,                &kp HOME,          &kp PG_DN,          &kp PG_UP,       &kp END,        U_NA,             \
    U_NP,            U_NP,            U_NA,             U_NA,              U_NA,                &kp RET,           &kp BSPC,           &kp DEL,         U_NP,           U_NP

#define MIRYOKU_LAYER_MOUSE \
    &bt BT_SEL 0,    &bt BT_SEL 1,    &bt BT_SEL 2,     &bt BT_SEL 3,      &bt BT_CLR,          &kp C_PP,          &kp C_VOL_DN,       &kp C_VOL_UP,    &kp C_MUTE,     &kp C_PREV,       \
    &kp LGUI,        &kp LALT,        &kp LCTRL,        &kp LSHFT,         U_NA,                U_MS_L,            U_MS_D,             U_MS_U,          U_MS_R,         U_BTN2,           \
    U_NA,            U_NA,            U_NA,             U_NA,              U_NA,                U_WH_L,            U_WH_D,             U_WH_U,          U_WH_R,         &kp C_NEXT,       \
    U_NP,            U_NP,            U_NA,             U_NA,              U_NA,                U_BTN1,            U_BTN3,             U_BTN2,          U_NP,           U_NP

#define MIRYOKU_LAYER_NUM \
    &kp N1,          &kp N2,          &kp N3,           &kp N4,            &kp N5,              U_NA,              &kp GRAVE,          &kp MINUS,       &kp EQUAL,      U_NA,             \
    U_MT(LGUI, N6),  U_MT(LALT, N7),  U_MT(LCTRL, N8),  U_MT(LSHFT, N9),   &kp N0,              U_NA,              &kp LSHFT,          &kp LCTRL,       &kp LALT,       &kp LGUI,         \
    &kp BSLH,        &kp DOT,         &kp SEMI,         &kp LBKT,          &kp RBKT,            U_NA,              U_NA,               U_NA,            U_NA,           U_NA,             \
    U_NP,            U_NP,            U_NA,             &kp SPC,           &kp ESC,             U_NA,              U_NA,               U_NA,            U_NP,           U_NP

#define MIRYOKU_LAYER_FUN \
    &kp F1,          &kp F2,          &kp F3,           &kp F4,            &kp F5,              U_NA,              U_NA,               U_NA,            U_NA,           U_NA,             \
    U_MT(LGUI, F6),  U_MT(LALT, F7),  U_MT(LCTRL, F8),  U_MT(LSHFT, F9),   &kp F10,             U_NA,              &kp LSHFT,          &kp LCTRL,       &kp LALT,       &kp LGUI,         \
    &kp F11,         &kp F12,         &kp F13,          &kp F14,           &kp F15,             U_NA,              U_NA,               U_NA,            U_NA,           U_NA,             \
    U_NP,            U_NP,            U_NA,             U_NA,              U_NA,                U_NA,              U_NA,               U_NA,            U_NP,           U_NP

#define MIRYOKU_LAYER_LIST \
    MIRYOKU_X(BASE,   "Base")  \
    MIRYOKU_X(NAV,    "Nav")   \
    MIRYOKU_X(MOUSE,  "Mouse") \
    MIRYOKU_X(NUM,    "Num")   \
    MIRYOKU_X(FUN,    "Fun")

#define MIRYOKU_LAYERMAPPING_BASE   MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_NAV    MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_MOUSE  MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_NUM    MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_FUN    MIRYOKU_MAPPING

#define U_BASE   0
#define U_NAV    1
#define U_MOUSE  2
#define U_NUM    3
#define U_FUN    4

// faster cursor movement
#define U_MOUSE_MOVE_MAX 2000
// smaller mouse scroll increments.
#define U_MOUSE_SCROLL_MAX 20
