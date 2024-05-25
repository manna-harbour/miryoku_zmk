// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#include "miryoku_babel/miryoku_layer_selection.h"
#include "miryoku_babel/miryoku_layer_list.h"

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)
#define U_STRINGIFY(x) #x
#define U_MACRO(name,...) \
/ { \
  macros { \
    name: name { \
      compatible = "zmk,behavior-macro"; \
      #binding-cells = <0>; \
      __VA_ARGS__ \
    }; \
  }; \
};

#define U_NP &none // key is not present
#define U_NA &none // present but not available for use
#define U_NU &none // available but not used

#define U_TAPPING_TERM 200

#include "miryoku_clipboard.h"

#include "miryoku_double_tap_guard.h"

#include "miryoku_shift_functions.h"

#if defined (MIRYOKU_KLUDGE_MOUSEKEYSPR)
  #include "miryoku_kludge_mousekeyspr.h"
#else
  #include "miryoku_mousekeys.h"
#endif

#if defined (MIRYOKU_KLUDGE_TAPDELAY)
  #include "miryoku_kludge_tapdelay.h"
#else
  #include "miryoku_behaviors.h"
#endif
