// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Substitute Tap layer for a gaming layer.
#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_NP,              U_MT(LSHIFT, SPACE),TAB,              &kp RET,           &kp BSPC,          U_NP,              U_NP,              U_NP

/ {
    combos {
        compatible = "zmk,combos";
        MIRYOKU_KLUDGE_THUMBCOMBOS_MACRO(U_TAP, LEFT, U_MT(LALT, ESC))
        MIRYOKU_KLUDGE_THUMBCOMBOS_MACRO(U_TAP, RIGHT, &u_to_U_BASE)
    };
};

