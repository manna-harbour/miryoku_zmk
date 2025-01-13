
#pragma once


U_MACRO(u_toggle_w_shift,
  bindings = <
    &macro_press &kp W &kp LSFT
    &macro_pause_for_release
    &macro_release &kp W &kp LSFT
  >;
)
