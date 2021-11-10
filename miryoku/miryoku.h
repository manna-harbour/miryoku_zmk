// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#include "miryoku_babel/miryoku_layer_names.h"
#include "miryoku_babel/miryoku_layer.h"

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#define U_NP &none // key is not present
#define U_NA &none // present but not available for use
#define U_NU &none // available but not used

#define U_TAPPING_TERM 200

#if defined (MIRYOKU_CLIPBOARD_FUN)
  #define U_RDO &kp K_AGAIN
  #define U_PST &kp K_PASTE
  #define U_CPY &kp K_COPY
  #define U_CUT &kp K_CUT
  #define U_UND &kp K_UNDO
#elif defined (MIRYOKU_CLIPBOARD_MAC)
  #define U_RDO &kp LS(LG(Z))
  #define U_PST &kp LG(V)
  #define U_CPY &kp LG(C)
  #define U_CUT &kp LG(X)
  #define U_UND &kp LG(Z)
#elif defined (MIRYOKU_CLIPBOARD_WIN)
  #define U_RDO &kp LC(Y)
  #define U_PST &kp LC(V)
  #define U_CPY &kp LC(C)
  #define U_CUT &kp LC(X)
  #define U_UND &kp LC(Z)
#else
  #define U_RDO &kp K_AGAIN
  #define U_PST &kp LS(INS)
  #define U_CPY &kp LC(INS)
  #define U_CUT &kp LS(DEL)
  #define U_UND &kp K_UNDO
#endif

#if defined (MIRYOKU_KLUDGE_MOUSEKEYSPR)
  #define U_MOUSE_MOVE_MAX 1250
  #define U_MOUSE_MOVE_EXPONENT 1
  #define U_MOUSE_MOVE_TIME 1500
  #define U_MOUSE_MOVE_DELAY 0
  #define U_MOUSE_SCROLL_MAX 100
  #define U_MOUSE_SCROLL_EXPONENT 1
  #define U_MOUSE_SCROLL_TIME 5000
  #define U_MOUSE_SCROLL_DELAY 0
  #undef MOVE_UP
  #undef MOVE_DOWN
  #undef MOVE_LEFT
  #undef MOVE_RIGHT
  #define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
  #define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
  #define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
  #define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)
  #undef SCROLL_UP
  #undef SCROLL_DOWN
  #undef SCROLL_LEFT
  #undef SCROLL_RIGHT
  #define SCROLL_UP SCROLL_VERT(U_MOUSE_SCROLL_MAX)
  #define SCROLL_DOWN SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
  #define SCROLL_LEFT SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
  #define SCROLL_RIGHT SCROLL_HOR(U_MOUSE_SCROLL_MAX)
  #define U_BTN1 &mkp MB1
  #define U_BTN2 &mkp MB2
  #define U_BTN3 &mkp MB3
  #define U_MS_D &mmv MOVE_DOWN
  #define U_MS_L &mmv MOVE_LEFT
  #define U_MS_R &mmv MOVE_RIGHT
  #define U_MS_U &mmv MOVE_UP
  #define U_WH_D &mwh SCROLL_DOWN
  #define U_WH_L &mwh SCROLL_LEFT
  #define U_WH_R &mwh SCROLL_RIGHT
  #define U_WH_U &mwh SCROLL_UP
#else
  #define U_BTN1 &kp KP_N5
  #define U_BTN2 U_NU
  #define U_BTN3 U_NU
  #define U_MS_D &kp KP_N2
  #define U_MS_L &kp KP_N4
  #define U_MS_R &kp KP_N6
  #define U_MS_U &kp KP_N8
  #define U_WH_D U_NU
  #define U_WH_L U_NU
  #define U_WH_R U_NU
  #define U_WH_U U_NU
#endif
