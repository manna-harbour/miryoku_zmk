// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_SOFT_OFF

#define XXX &none

#define TOGGLE_W_SHIFT &toggle_w_shift

/ {
    behaviors {
        toggle_w_shift: toggle_w_shift {
            compatible = "zmk,behavior-macro";
            label = "Toggle W and Shift";
            #binding-cells = <0>;
            bindings = <
                &macro_press &kp W &kp LSFT
                &macro_pause_for_release
                &macro_release &kp W &kp LSFT
            >;
        };
    };
};

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_GAMENUM,     &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_GAMENUM \
&kp ESC,           &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp T,             &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            TOGGLE_W_SHIFT,         \
&kp LSHFT,         &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp G,             &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &sk LSHIFT,         \
&kp LCTRL,         &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp B,             &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,             &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &u_to_U_GAME \
&caps_word  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &ext_power EP_ON \
&kp F11  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

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
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAMENUM,"GNum")

#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &u_to_U_BASE \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_GAME       10
#define U_GAMENUM    11


