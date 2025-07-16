// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_CPY,             U_UND,             U_RDO,             U_CUT,             U_PST,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp F13,           &kp F14,           &kp F15,           &kp F16,           &kp F17,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp F18,           &kp F19,           &kp F20,           &u_to_U_DA,        &u_to_U_CA,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_CPY,             U_UND,             U_RDO,             U_CUT,             U_PST,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_CPY,             U_UND,             U_RDO,             U_CUT,             U_PST,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_DA \
&kp TAB,           &kp N1,            &kp N2,            &kp N3,            &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp Q,             &kp W,             &kp E,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp A,             &kp S,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &mo U_DB,          &kp SPACE,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_DB \
&kp ESC,           &kp N4,            &kp N5,            &kp N6,            &kp T,             &kp F15,           &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LSHFT,         &kp Q,             &kp D,             &kp F,             &kp G,             &kp F14,           &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
&kp LALT,          &kp Z,             &kp X,             &kp C,             &kp B,             &kp F13,           &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              &kp LALT,          &none,             &kp SPACE,         &kp RET,           &u_to_U_BASE,      &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_CA \
&kp TAB,           &kp N1,            &kp N2,            &kp N3,            &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp W,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp Q,             &kp S,             &kp C,             &kp G,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &mo U_CB,          &kp SPACE,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_CB \
&kp ESC,           &kp N4,            &kp N5,            &kp E,             &kp B,             &kp F15,           &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LSHFT,         &kp A,             &kp W,             &kp D,             &kp T,             &kp F14,           &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
&kp LCTRL,         &kp Z,             &kp S,             &kp X,             &kp Y,             &kp F13,           &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              &kp LALT,          &none,             &kp SPACE,         &kp RET,           &u_to_U_BASE,      &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(DA,     "Dota Base") \
MIRYOKU_X(DB,     "Dota Extra") \
MIRYOKU_X(CA,     "CS Base") \
MIRYOKU_X(CB,     "CS Extra")


#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_DA    10
#define U_DB    11
#define U_CA    12
#define U_CB    13