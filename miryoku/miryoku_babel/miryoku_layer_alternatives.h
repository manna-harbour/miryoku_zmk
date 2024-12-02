// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY                                       \
  &kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P,        \
      U_MT(LGUI, A), U_MT(LALT, S), U_MT(LCTRL, D), U_MT(LSHFT, F), &kp G,     \
      &kp H, U_MT(LSHFT, J), U_MT(LCTRL, K), U_MT(LALT, L), U_MT(LGUI, SQT),   \
      U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C, &kp V, &kp B, &kp N, &kp M,     \
      &kp COMMA, U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH), U_NP, U_NP,           \
      U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB),              \
      U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY                                        \
  &kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P, &kp A, \
      &kp S, &kp D, &kp F, &kp G, &kp H, &kp J, &kp K, &kp L, &kp SQT, &kp Z,  \
      &kp X, &kp C, &kp V, &kp B, &kp N, &kp M, &kp COMMA, &kp DOT, &kp SLASH, \
      U_NP, U_NP, &kp ESC, &kp SPACE, &kp TAB, &kp RET, &kp BSPC, &kp DEL,     \
      U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA                                             \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, U_RGB_TOG,           \
      U_RGB_EFF, U_RGB_HUI, U_RGB_SAI, U_RGB_BRI, &kp LGUI, &kp LALT,          \
      &kp LCTRL, &kp LSHFT, U_NA, U_EP_TOG, &kp C_PREV, &kp C_VOL_DN,          \
      &kp C_VOL_UP, &kp C_NEXT, U_NA, &kp RALT, &u_to_U_FUN, &u_to_U_MEDIA,    \
      U_NA, &u_out_tog, &u_bt_sel_0, &u_bt_sel_1, &u_bt_sel_2, &u_bt_sel_3,    \
      U_NP, U_NP, U_NA, U_NA, U_NA, &kp C_STOP, &kp C_PP, &kp C_MUTE, U_NP,    \
      U_NP

#define MIRYOKU_ALTERNATIVES_NUM_FLIP                                          \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, &kp LBKT, &kp N7,    \
      &kp N8, &kp N9, &kp RBKT, &kp LGUI, &kp LALT, &kp LCTRL, &kp LSHFT,      \
      U_NA, &kp EQUAL, &kp N4, &kp N5, &kp N6, &kp SEMI, U_NA, &kp RALT,       \
      &u_to_U_NAV, &u_to_U_NUM, U_NA, &kp BSLH, &kp N1, &kp N2, &kp N3,        \
      &kp GRAVE, U_NP, U_NP, U_NA, U_NA, U_NA, &kp MINUS, &kp N0, &kp DOT,     \
      U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_NUM                                               \
  &kp LBKT, &kp N7, &kp N8, &kp N9, &kp RBKT, U_NA, &u_to_U_BASE,              \
      &u_to_U_EXTRA, &u_to_U_TAP, U_BOOT, &kp SEMI, &kp N4, &kp N5, &kp N6,    \
      &kp EQUAL, U_NA, &kp LSHFT, &kp LCTRL, &kp LALT, &kp LGUI, &kp GRAVE,    \
      &kp N1, &kp N2, &kp N3, &kp BSLH, U_NA, &u_to_U_NUM, &u_to_U_NAV,        \
      &kp RALT, U_NA, U_NP, U_NP, &kp DOT, &kp N0, &kp MINUS, U_NA, U_NA,      \
      U_NA, U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_SYM_FLIP                                          \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, &kp LBRC, &kp AMPS,  \
      &kp ASTRK, &kp LPAR, &kp RBRC, &kp LGUI, &kp LALT, &kp LCTRL, &kp LSHFT, \
      U_NA, &kp PLUS, &kp DLLR, &kp PRCNT, &kp CARET, &kp COLON, U_NA,         \
      &kp RALT, &u_to_U_MOUSE, &u_to_U_SYM, U_NA, &kp PIPE, &kp EXCL, &kp AT,  \
      &kp HASH, &kp TILDE, U_NP, U_NP, U_NA, U_NA, U_NA, &kp UNDER, &kp LPAR,  \
      &kp RPAR, U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_SYM                                               \
  &kp LBRC, &kp AMPS, &kp ASTRK, &kp LPAR, &kp RBRC, U_NA, &u_to_U_BASE,       \
      &u_to_U_EXTRA, &u_to_U_TAP, U_BOOT, &kp COLON, &kp DLLR, &kp PRCNT,      \
      &kp CARET, &kp PLUS, U_NA, &kp LSHFT, &kp LCTRL, &kp LALT, &kp LGUI,     \
      &kp TILDE, &kp EXCL, &kp AT, &kp HASH, &kp PIPE, U_NA, &u_to_U_SYM,      \
      &u_to_U_MOUSE, &kp RALT, U_NA, U_NP, U_NP, &kp LPAR, &kp RPAR,           \
      &kp UNDER, U_NA, U_NA, U_NA, U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_FUN_FLIP                                          \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, &kp PSCRN, &kp F7,   \
      &kp F8, &kp F9, &kp F12, &kp LGUI, &kp LALT, &kp LCTRL, &kp LSHFT, U_NA, \
      &kp SLCK, &kp F4, &kp F5, &kp F6, &kp F11, U_NA, &kp RALT,               \
      &u_to_U_MEDIA, &u_to_U_FUN, U_NA, &kp PAUSE_BREAK, &kp F1, &kp F2,       \
      &kp F3, &kp F10, U_NP, U_NP, U_NA, U_NA, U_NA, &kp TAB, &kp SPACE,       \
      &kp K_APP, U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_FUN                                               \
  &kp F12, &kp F7, &kp F8, &kp F9, &kp PSCRN, U_NA, &u_to_U_BASE,              \
      &u_to_U_EXTRA, &u_to_U_TAP, U_BOOT, &kp F11, &kp F4, &kp F5, &kp F6,     \
      &kp SLCK, U_NA, &kp LSHFT, &kp LCTRL, &kp LALT, &kp LGUI, &kp F10,       \
      &kp F1, &kp F2, &kp F3, &kp PAUSE_BREAK, U_NA, &u_to_U_FUN,              \
      &u_to_U_MEDIA, &kp RALT, U_NA, U_NP, U_NP, &kp K_APP, &kp SPACE,         \
      &kp TAB, U_NA, U_NA, U_NA, U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_BUTTON                                            \
  U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY, U_CUT, U_UND,        \
      &kp LGUI, &kp LALT, &kp LCTRL, &kp LSHFT, U_NU, U_NU, &kp LSHFT,         \
      &kp LCTRL, &kp LALT, &kp LGUI, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, \
      U_PST, U_CPY, U_CUT, U_UND, U_NP, U_NP, U_BTN3, U_BTN1, U_BTN2, U_BTN2,  \
      U_BTN1, U_BTN3, U_NP, U_NP
