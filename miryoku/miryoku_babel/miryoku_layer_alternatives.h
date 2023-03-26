// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


#if !defined (MOD_1)
  #define MOD_1 LSHFT
#endif

#if !defined (MOD_2)
  #define MOD_2 LCTRL
#endif

#if !defined (MOD_3)
  #define MOD_3 LALT
#endif

#if !defined (MOD_4)
  #define MOD_4 LGUI
#endif


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(MOD_4,Q),     U_MT(MOD_3,S),     U_MT(MOD_2, D),    U_MT(MOD_1, F),    &kp G,             &kp H,             U_MT(MOD_1, J),    U_MT(MOD_2, K),    U_MT(MOD_3,L),     U_MT(MOD_4,M),     \
U_LT(U_BUTTON, W), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           U_MT(MOD_3,SLASH), U_LT(U_BUTTON, SQT),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
U_MT(MOD_4,Y),     U_MT(MOD_3,I),     U_MT(MOD_2, E),    U_MT(MOD_1, A),    &kp DOT,           &kp D,             U_MT(MOD_1, S),    U_MT(MOD_2, T),    U_MT(MOD_3,N),     U_MT(MOD_4,B),     \
U_LT(U_BUTTON, J), U_MT(MOD_3,SLASH), &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             U_MT(MOD_3,P),     U_LT(U_BUTTON, V), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,R),     U_MT(MOD_2, S),    U_MT(MOD_1, T),    &kp D,             &kp H,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,I),     U_MT(MOD_4,O),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,R),     U_MT(MOD_2, S),    U_MT(MOD_1, T),    &kp G,             &kp M,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,I),     U_MT(MOD_4,O),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,R),     U_MT(MOD_2, S),    U_MT(MOD_1, T),    &kp G,             &kp K,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,I),     U_MT(MOD_4,O),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(MOD_4,A),     U_MT(MOD_3,O),     U_MT(MOD_2, E),    U_MT(MOD_1, U),    &kp I,             &kp D,             U_MT(MOD_1, H),    U_MT(MOD_2, T),    U_MT(MOD_3,N),     U_MT(MOD_4,S),     \
U_LT(U_BUTTON, SLASH),U_MT(MOD_3,Q),     &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(MOD_3,V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
U_MT(MOD_4,S),     U_MT(MOD_3,H),     U_MT(MOD_2, N),    U_MT(MOD_1, T),    &kp COMMA,         &kp DOT,           U_MT(MOD_1, A),    U_MT(MOD_2, E),    U_MT(MOD_3,O),     U_MT(MOD_4,I),     \
U_LT(U_BUTTON, F), U_MT(MOD_3,M),     &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             U_MT(MOD_3,K),     U_LT(U_BUTTON, Y), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,S),     U_MT(MOD_2, H),    U_MT(MOD_1, T),    &kp G,             &kp Y,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,O),     U_MT(MOD_4,I),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(MOD_4,A),     U_MT(MOD_3,S),     U_MT(MOD_2, D),    U_MT(MOD_1, F),    &kp G,             &kp H,             U_MT(MOD_1, J),    U_MT(MOD_2, K),    U_MT(MOD_3,L),     U_MT(MOD_4,SQT),   \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(MOD_4,A),     U_MT(MOD_3,S),     U_MT(MOD_2, D),    U_MT(MOD_1, F),    &kp G,             &kp H,             U_MT(MOD_1, J),    U_MT(MOD_2, K),    U_MT(MOD_3,L),     U_MT(MOD_4,SQT),   \
U_LT(U_BUTTON, Y), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(MOD_4,Q),     U_MT(MOD_3,S),     U_MT(MOD_2, D),    U_MT(MOD_1, F),    &kp G,             &kp H,             U_MT(MOD_1, J),    U_MT(MOD_2, K),    U_MT(MOD_3,L),     U_MT(MOD_4,M),     \
U_LT(U_BUTTON, W), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           U_MT(MOD_3,SLASH), U_LT(U_BUTTON, SQT),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
U_MT(MOD_4,Y),     U_MT(MOD_3,I),     U_MT(MOD_2, E),    U_MT(MOD_1, A),    &kp DOT,           &kp D,             U_MT(MOD_1, S),    U_MT(MOD_2, T),    U_MT(MOD_3,N),     U_MT(MOD_4,B),     \
U_LT(U_BUTTON, J), U_MT(MOD_3,SLASH), &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             U_MT(MOD_3,P),     U_LT(U_BUTTON, V), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,R),     U_MT(MOD_2, S),    U_MT(MOD_1, T),    &kp D,             &kp H,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,I),     U_MT(MOD_4,O),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,R),     U_MT(MOD_2, S),    U_MT(MOD_1, T),    &kp G,             &kp M,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,I),     U_MT(MOD_4,O),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,R),     U_MT(MOD_2, S),    U_MT(MOD_1, T),    &kp G,             &kp K,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,I),     U_MT(MOD_4,O),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(MOD_4,A),     U_MT(MOD_3,O),     U_MT(MOD_2, E),    U_MT(MOD_1, U),    &kp I,             &kp D,             U_MT(MOD_1, H),    U_MT(MOD_2, T),    U_MT(MOD_3,N),     U_MT(MOD_4,S),     \
U_LT(U_BUTTON, SLASH),U_MT(MOD_3,Q),     &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(MOD_3,V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
U_MT(MOD_4,S),     U_MT(MOD_3,H),     U_MT(MOD_2, N),    U_MT(MOD_1, T),    &kp COMMA,         &kp DOT,           U_MT(MOD_1, A),    U_MT(MOD_2, E),    U_MT(MOD_3,O),     U_MT(MOD_4,I),     \
U_LT(U_BUTTON, F), U_MT(MOD_3,M),     &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             U_MT(MOD_3,K),     U_LT(U_BUTTON, Y), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
U_MT(MOD_4,A),     U_MT(MOD_3,S),     U_MT(MOD_2, H),    U_MT(MOD_1, T),    &kp G,             &kp Y,             U_MT(MOD_1, N),    U_MT(MOD_2, E),    U_MT(MOD_3,O),     U_MT(MOD_4,I),     \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(MOD_4,A),     U_MT(MOD_3,S),     U_MT(MOD_2, D),    U_MT(MOD_1, F),    &kp G,             &kp H,             U_MT(MOD_1, J),    U_MT(MOD_2, K),    U_MT(MOD_3,L),     U_MT(MOD_4,SQT),   \
U_LT(U_BUTTON, Z), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(MOD_4,A),     U_MT(MOD_3,S),     U_MT(MOD_2, D),    U_MT(MOD_1, F),    &kp G,             &kp H,             U_MT(MOD_1, J),    U_MT(MOD_2, K),    U_MT(MOD_3,L),     U_MT(MOD_4,SQT),   \
U_LT(U_BUTTON, Y), U_MT(MOD_3,X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(MOD_3,DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp MOD_3,         &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp MOD_3,         &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp MOD_3,         &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp MOD_3,         &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp MOD_3,         &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp MOD_3,         &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         &kp C_VOL_UP,      U_RGB_HUI,         U_RGB_SAI,         \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_RGB_BRI,         \
U_NA,              &kp MOD_3,         &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp MOD_3,         &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp MOD_3,         &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          \
U_NA,              &kp MOD_3,         &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         \
U_NA,              &kp MOD_3,         &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp MOD_3,         &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPACE,         &kp K_APP,         U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp MOD_3,         U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp MOD_4,         &kp MOD_3,         &kp MOD_2,         &kp MOD_1,         U_NU,              U_NU,              &kp MOD_1,         &kp MOD_2,         &kp MOD_3,         &kp MOD_4,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
