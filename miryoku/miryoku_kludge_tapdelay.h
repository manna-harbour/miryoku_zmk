// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_TAPDELAY_TAP(CODE) \
U_MACRO(u_tapdelay_tap_##CODE, bindings = <&macro_press &kp CODE>, <&macro_release &kp CODE>;)

#define MIRYOKU_TAPDELAY_MT(CODE) \
/ { \
  behaviors { \
    u_tapdelay_mt_##CODE: u_tapdelay_mt_##CODE { \
      compatible = "zmk,behavior-hold-tap"; \
      #binding-cells = <2>; \
      tapping-term-ms = <U_TAPPING_TERM>; \
      flavor = "tap-preferred"; \
      bindings = <&kp>, <&u_tapdelay_tap_##CODE>; \
    }; \
  }; \
};

#define MIRYOKU_TAPDELAY_LT(CODE) \
/ { \
  behaviors { \
    u_tapdelay_lt_##CODE: u_tapdelay_lt_##CODE { \
      compatible = "zmk,behavior-hold-tap"; \
      #binding-cells = <2>; \
      tapping-term-ms = <U_TAPPING_TERM>; \
      flavor = "tap-preferred"; \
      bindings = <&mo>, <&u_tapdelay_tap_##CODE>; \
    }; \
  }; \
};

#define U_MT(MOD, TAP) &u_tapdelay_mt_##TAP MOD 0
#define U_LT(LAYER, TAP) &u_tapdelay_lt_##TAP LAYER 0

#define MIRYOKU_TAPDELAY_LIST \
MIRYOKU_X(A,) \
MIRYOKU_X(B,) \
MIRYOKU_X(C,) \
MIRYOKU_X(D,) \
MIRYOKU_X(E,) \
MIRYOKU_X(F,) \
MIRYOKU_X(G,) \
MIRYOKU_X(H,) \
MIRYOKU_X(I,) \
MIRYOKU_X(J,) \
MIRYOKU_X(K,) \
MIRYOKU_X(L,) \
MIRYOKU_X(M,) \
MIRYOKU_X(N,) \
MIRYOKU_X(O,) \
MIRYOKU_X(P,) \
MIRYOKU_X(Q,) \
MIRYOKU_X(R,) \
MIRYOKU_X(S,) \
MIRYOKU_X(T,) \
MIRYOKU_X(U,) \
MIRYOKU_X(V,) \
MIRYOKU_X(W,) \
MIRYOKU_X(X,) \
MIRYOKU_X(Y,) \
MIRYOKU_X(Z,) \
MIRYOKU_X(SQT,) \
MIRYOKU_X(COMMA,) \
MIRYOKU_X(DOT,) \
MIRYOKU_X(SLASH,) \
MIRYOKU_X(ESC,) \
MIRYOKU_X(SPACE,) \
MIRYOKU_X(TAB,) \
MIRYOKU_X(RET,) \
MIRYOKU_X(BSPC,) \
MIRYOKU_X(DEL,)
