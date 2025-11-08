// Copyright 2025 Reza
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_SENSOR_BINDINGS)

// Default sensor bindings for each layer
#if !defined(MIRYOKU_SENSOR_BASE)
  #define MIRYOKU_SENSOR_BASE &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_EXTRA)
  #define MIRYOKU_SENSOR_EXTRA &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_TAP)
  #define MIRYOKU_SENSOR_TAP &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_BUTTON)
  #define MIRYOKU_SENSOR_BUTTON &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_NAV)
  #define MIRYOKU_SENSOR_NAV &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_MOUSE)
  #define MIRYOKU_SENSOR_MOUSE &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_MEDIA)
  #define MIRYOKU_SENSOR_MEDIA &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_NUM)
  #define MIRYOKU_SENSOR_NUM &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_SYM)
  #define MIRYOKU_SENSOR_SYM &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#if !defined(MIRYOKU_SENSOR_FUN)
  #define MIRYOKU_SENSOR_FUN &inc_dec_kp C_VOL_UP C_VOL_DN
#endif

#endif
