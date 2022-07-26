// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once

// **********************
//     ZMK core options
// **********************
// If you want to patch Combo behavior, uncomment these defaults and change them.
// Docs: https://zmk.dev/docs/config/combos#kconfig
//
// #define ZMK_COMBO_MAX_KEYS_PER_COMBO 4
// #define ZMK_COMBO_MAX_COMBOS_PER_KEY 5
// #define ZMK_COMBO_MAX_PRESSED_COMBOS 4

// Disable layer indicator widget.
// #define CONFIG_CUSTOM_WIDGET_LAYER_STATUS n

// Define our miryoku build options here, so that we can compile ZMK locally.
// WARNING: be sure these options match the github workflow, otherwise there will be problems.
#define MIRYOKU_ALPHAS_BEAKL15
#define MIRYOKU_CLIPBOARD_MAC


// We make use of the custom layer mechanism discussed in #85.
// Docs: https://github.com/manna-harbour/miryoku/discussions/85
// Swapping layers tips:
//   Don't just blindly copy paste from the miryoku_layer_alternatives.h. You MUST
//   match the layer names here to the ones expcted in miryoku_layer_selection.h.
//   So, MIRYOKU_ALTERNATIVES_SYM becoms MIRYOKU_LAYER_SYM
//   Note, in doing so we lose the ability to do Flip, Inverted T, and other option toggles.
//   However, we can simply remap the define to the inverted or flipped layer directly as needed
//   See layer 4 for the example of how we flip media.



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
MIRYOKU_X(GAME,   "Game")

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
#define U_GAME   10



// Custom mapping for game layer
// See https://github.com/manna-harbour/miryoku/discussions/85, "To change the mapping for all layers" under Miryoku ZMK
#if defined (MIRYOKU_KEYBOARD_CORNE_ISH_ZEN) // only enable for corne-ish zen.


// Define convenience mapping to block out keys.
#define XXX &none

// Note: we have to split the layer definition, and specify the outer column keys in this define, while the rest of the
// keycodes go into a standard layer (see MIRYOKU_LAYER_GAME below).
// What happens under the hood is that when the mapping is evaluated, the KNN (K00, K01 etc) defined keys are merged with the
// outer column keys we specify here.
#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
&kp LCTRL   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
&kp LSHIFT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#else
  // Allow us to build for other physical keyboards without issues.
  #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#endif // defined (MIRYOKU_KEYBOARD_CORNE)


// *********************
// LAYER DEFINITIONS
// **********************

// Layer 0 is in main BEAKL config. BUT, we swapped NUM and MEDIA triggers to get the symbol layer to work.
// As this would break other user's expected workflows, we keep this change here and don't contribute upstream.
// The config pasted below is identical to the canonical BEAKL15 defined in miryoku, except for the two thumb keys swapped
// TODO: Look into this, see if there's a way to keep the same config and JUST swap the two keys.
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&hm LGUI Y,        &hm LALT I,        &hm LCTRL E,       &hm LSHFT A,       &kp DOT,           &kp D,             &hm LSHFT S,       &hm LCTRL T,       &hm LALT N,        &hm LGUI B,        \
&lt U_BUTTON J,    &hm RALT SLASH,    &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &hm RALT P,        &lt U_BUTTON V,    \
U_NP,              U_NP,              &lt U_NUM ESC,     &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_MEDIA BSPC,    &lt U_FUN DEL,     U_NP,              U_NP


// Layer 1
#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &to U_GAME,             &none,             &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
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


// Layer 5: Number layer, traditional numpad on the right and useful symbols above home row on the left
#define MIRYOKU_LAYER_NUM \
&kp COLON,         &kp SLASH,         &kp COMMA,         &kp DOT,           &kp ASTERISK,      &kp COMMA,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp EQL,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp NUM_0,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         U_NA,           \
&bootloader,       &kp RALT,          U_NA,              U_NA,              U_NA,              &kp DOT,            &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp ENTER,      \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp ENTER,          &kp NUM_0,         &kp DOT,           U_NP,              U_NP


// Layer 6: Symbol layer. Uses thumb cluster as well.
#define MIRYOKU_LAYER_SYM \
&kp CARET,         &kp AT,           &kp EXCL,          &kp QMARK,         &kp PLUS,          U_NA,              U_NA,              U_NA,              U_NA,              &bootloader,       \
&kp COLON,         &kp MINUS,        &kp LPAR,          &kp RPAR,          &kp PIPE,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp LESS_THAN,     &kp GREATER_THAN, &kp LBKT,          &kp RBKT,          &kp AMPERSAND,     U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,             &kp DOLLAR,        &kp EQL,           &kp SEMICOLON,     U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// Layer 7 is Function, we use the default.

// Layer 8: Game layer
// Note: this is a 3x6 layer. Above, we define MIRYOKU_LAYERMAPPING_GAME which maps in the outer column only for this layer.
// This layer is used for left half only gaming for overwatch, with discord mappings and push to talk mapped instead of some letters.
#define MIRYOKU_LAYER_GAME \
&kp Q,  &kp W,    &kp E,    &kp R,      &kp T,              U_NA,     U_NA,     U_NA,   U_NA,   &to U_BASE,  \
&kp A,  &kp S,    &kp D,    &kp F,      &kp P,              U_NA,     U_NA,     U_NA,   U_NA,   U_NA,   \
&kp Z,  &kp X,    &kp C,    &kp V,      &kp GRAVE,          U_NA,     U_NA,     U_NA,   U_NA,   U_NA,   \
U_NP,   U_NP,     &kp H,    &kp R,      &kp LCTRL,          U_NA,     U_NA,     U_NA,   U_NP,   U_NP
