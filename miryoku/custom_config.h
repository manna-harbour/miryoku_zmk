// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


// Define our build options here as well, so that we can compile ZMK locally.
// WARNING: be sure these options match the github workflow, otherwise there will be problems.
#define MIRYOKU_ALPHAS_BEAKL15
#define MIRYOKU_CLIPBOARD_MAC


// https://github.com/manna-harbour/miryoku/discussions/85
// Swapping layers:
//   Don't just blindly copy paste from the miryoku_layer_alternatives.h. You MUST
//   match the layer names here to the ones expcted in miryoku_layer_selection.h.
//   So, MIRYOKU_ALTERNATIVES_SYM becoms MIRYOKU_LAYER_SYM
//   Note, in doing so we lose the ability to do Flip, Inverted T, and other option toggles.

#define ZMK_COMBO_MAX_KEYS_PER_COMBO 4
#define ZMK_COMBO_MAX_COMBOS_PER_KEY 5
#define ZMK_COMBO_MAX_PRESSED_COMBOS 4

// Disable layer indicator widget.
// #define CONFIG_CUSTOM_WIDGET_LAYER_STATUS n


// *********************
// LAYER LIST
// *********************
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "BEAKL") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Navi") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Nump") \
MIRYOKU_X(SYM,    "Sym1") \
MIRYOKU_X(FUN,    "Func") \
/* MIRYOKU_X(GAME,   "Game") */

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
/* #define U_GAME   10 */

// *********************
// LAYER DEFINITIONS
// **********************

/* // Layer 0 is in main BEAKL config. BUT, we swapped NUM and MEDIA triggers to get the symbol layer to work. */
/* // As this would break other user's expected workflows, we keep this change here and don't contribute upstream. */
/* // The config pasted below is identical to the canonical BEAKL15 defined in miryoku, except for the two thumb keys swapped */
/* // TODO: Look into this, see if there's a way to keep the same config and JUST swap the two keys. */
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&hm LGUI Y,        &hm LALT I,        &hm LCTRL E,       &hm LSHFT A,       &kp DOT,           &kp D,             &hm LSHFT S,       &hm LCTRL T,       &hm LALT N,        &hm LGUI B,        \
&lt U_BUTTON J,    &hm RALT SLASH,    &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &hm RALT P,        &lt U_BUTTON V,    \
U_NP,              U_NP,              &lt U_NUM ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_MEDIA BSPC,    &lt U_FUN DEL,     U_NP,              U_NP


// Layer 1
#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &none,             &none,             &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN2,            U_BTN3,            U_BTN1,            U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP

// Layer 2: Nav, use default.


// Layer 3: Mouse, with tons of symbols added
#define MIRYOKU_LAYER_MOUSE \
&bootloader,       U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp DOT,           &kp SLASH,         &kp CARET,         &kp PERCENT,       \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp UNDERSCORE,    &kp COLON,         &kp TILDE,         &kp BACKSLASH,     &kp PIPE,          \
U_NA,              &kp RALT,          U_NA,              U_NA,              U_NA,              U_NA,              &kp HASH,          &kp GRAVE,         &kp ASTERISK,      U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP


// Layer 4: media, we use default flipped variant.
#define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_FLIP


// Layer 5
#define MIRYOKU_LAYER_NUM \
&kp COLON,         &kp SLASH,         &kp COMMA,         &kp DOT,           &kp ASTERISK,      &kp COMMA,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp EQL,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp NUM_0,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         U_NA,           \
&bootloader,       &kp RALT,          U_NA,              U_NA,              U_NA,              &kp DOT,            &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp ENTER,      \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp ENTER,          &kp NUM_0,         &kp DOT,           U_NP,              U_NP


// Layer 6
#define MIRYOKU_LAYER_SYM \
&kp CARET,         &kp AT,           &kp EXCL,          &kp QMARK,         &kp PLUS,          U_NA,              U_NA,              U_NA,              U_NA,              &bootloader,       \
&kp COLON,         &kp MINUS,        &kp LPAR,          &kp RPAR,          &kp PIPE,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp LESS_THAN,     &kp GREATER_THAN, &kp LBKT,          &kp RBKT,          &kp AMPERSAND,     U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,             &kp DOLLAR,        &kp EQL,           &kp SEMICOLON,     U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// Layer 7 is Function, we use the default.

// Layer 8: Game layer (to be used in future)
/* #define MIRYOKU_LAYER_GAME \ */
/* &kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              U_NA,              U_NA,              U_NA,              &bootloader,       \ */
/* &kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \ */
/* &kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \ */
/* U_NP,              U_NP,              &kp K_APP,         &kp SPC,           &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP */
