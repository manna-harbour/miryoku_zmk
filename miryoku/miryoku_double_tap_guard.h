// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_KLUDGE_DOUBLETAPBOOT)
  #if defined (MIRYOKU_KLUDGE_SUSPEND)
    #define U_BOOT &u_suspend
  #else
    #define U_BOOT &u_bootloader
  #endif
#else
  #if defined (MIRYOKU_KLUDGE_SUSPEND)
    #define U_BOOT &suspend
  #else
    #define U_BOOT &bootloader
  #endif
#endif
