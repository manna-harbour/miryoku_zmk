// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_LAYER_BASE                                                     \
  &kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P, &kp A, \
      U_MT(LCTRL, S), U_MT(LALT, D), U_MT(LGUI, F), &kp G, &kp H,              \
      U_MT(RGUI, J), U_MT(RALT, K), U_MT(RCTRL, L), &kp SQT,                   \
      U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C, &kp V, &kp B, &kp N, &kp M,     \
      &kp COMMA, U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH), &kp ESC, &kp LSHFT,   \
      &kp SPACE, &kp ENTER, &kp BACKSPACE, &kp TAB

#define MIRYOKU_LAYER_MEDIA                                                    \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, U_RGB_TOG,           \
      U_RGB_EFF, U_RGB_HUI, U_RGB_SAI, U_RGB_BRI, U_NA, &kp LCTRL, &kp LALT,   \
      &kp LGUI, U_NA, U_EP_TOG, &kp C_PREV, &kp C_VOL_DN, &kp C_VOL_UP,        \
      &kp C_NEXT, U_NA, &kp RALT, &u_to_U_FUN, &u_to_U_MEDIA, U_NA,            \
      &u_out_tog, &u_bt_sel_0, &u_bt_sel_1, &u_bt_sel_2, &u_bt_sel_3, U_NP,    \
      U_NP, &kp LSHFT, U_NA, U_NA, &kp C_STOP, &kp C_PP, &kp C_MUTE, U_NP,     \
      U_NP

#define MIRYOKU_LAYER_NUM                                                      \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, &kp LBKT, &kp N7,    \
      &kp N8, &kp N9, &kp RBKT, U_NA, &kp LCTRL, &kp LALT, &kp LGUI, U_NA,     \
      &kp MINUS, &kp N4, &kp N5, &kp N6, &kp SEMI, U_NA, &kp RALT,             \
      &u_to_U_NAV, &u_to_U_NUM, U_NA, &kp EQUAL, &kp N1, &kp N2, &kp N3,       \
      &kp GRAVE, U_NP, U_NP, &kp LSHFT, U_NA, U_NA, U_NA, &kp BSLH, &kp N0,    \
      U_NP, U_NP

#define MIRYOKU_LAYER_SYM                                                      \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, &kp LBRC, &kp AMPS,  \
      &kp ASTRK, &kp LPAR, &kp RBRC, U_NA, &kp LCTRL, &kp LALT, &kp LGUI,      \
      U_NA, &kp PLUS, &kp DLLR, &kp PRCNT, &kp CARET, &kp COLON, U_NA,         \
      &kp RALT, &u_to_U_MOUSE, &u_to_U_SYM, U_NA, &kp PIPE, &kp EXCL, &kp AT,  \
      &kp HASH, &kp TILDE, U_NP, U_NP, &kp LSHFT, U_NA, U_NA, &kp UNDER,       \
      &kp LPAR, &kp RPAR, U_NP, U_NP

#define MIRYOKU_LAYER_FUN                                                      \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, &kp PSCRN, &kp F7,   \
      &kp F8, &kp F9, &kp F12, U_NA, &kp LCTRL, &kp LALT, &kp LGUI, U_NA,      \
      &kp SLCK, &kp F4, &kp F5, &kp F6, &kp F11, U_NA, &kp RALT,               \
      &u_to_U_MEDIA, &u_to_U_FUN, U_NA, &kp PAUSE_BREAK, &kp F1, &kp F2,       \
      &kp F3, &kp F10, U_NP, U_NP, &kp LSHFT, U_NA, U_NA, &kp TAB, &kp SPACE,  \
      &kp K_APP, U_NP, U_NP

#define MIRYOKU_LAYER_BUTTON                                                   \
  U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NA,  \
      &kp LCTRL, &kp LALT, &kp LGUI, U_NU, U_NU, &kp RCTRL, &kp RALT,          \
      &kp RGUI, U_NU, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY,  \
      U_CUT, U_UND, U_NP, U_NP, U_BTN3, U_BTN1, U_BTN2, U_BTN2, U_BTN1,        \
      U_BTN3, U_NP, U_NP
