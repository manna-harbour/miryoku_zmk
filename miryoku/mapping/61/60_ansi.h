// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_60_ANSI)

  #define XXX &none

  #if defined MIRYOKU_MAPPING_NOREVERSEANGLE
    #define MIRYOKU_LAYOUTMAPPING_60_ANSI( \
K00,  K01,  K02,  K03,  K04,                    K05,  K06,  K07,  K08,  K09, \
K10,  K11,  K12,  K13,  K14,                    K15,  K16,  K17,  K18,  K19, \
K20,  K21,  K22,  K23,  K24,                    K25,  K26,  K27,  K28,  K29, \
N30,  N31,  K32,  K33,  K34,                    K35,  K36,  K37,  N38,  N39 \
) \
K00   K01   K02   K03   K04   XXX   XXX   XXX   K05   K06   K07   K08   K09   XXX \
   K10   K11   K12   K13   K14   XXX   XXX   XXX   K15   K16   K17   K18   K19   XXX \
     K20   K21   K22   K23   K24   XXX   XXX   XXX   K25   K26   K27   K28   K29 \
  XXX         K32   K33   K34   XXX   XXX   XXX   XXX   K35   K36   K37   XXX \
  XXX   XXX   XXX               XXX               XXX   XXX         XXX   XXX
  #elif defined MIRYOKU_MAPPING_LITE
    #if defined MIRYOKU_LAYERS_FLIP
      #define MIRYOKU_LAYOUTMAPPING_60_ANSI( \
         K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
         K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
         K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
         N30,   N31,   K32,   K33,   K34,   K35,   K36,   K37,   N38,   N39 \
) \
&gresc  &kp N1 &kp N2 &kp N3 &kp N4 &kp N5 &kp N6 &kp N7 &kp N8 &kp N9 &kp N0 &kp MINUS &kp EQUAL  &kp BSPC \
&kp TAB  K00    K01    K02    K03    K04    K05    K06    K07    K08    K09    &kp LBKT  &kp RBKT  &kp BSLH \
&kp CLCK  K10    K11    K12    K13    K14    K15    K16    K17    K18    K19    &kp SEMI            &kp RET \
&kp LSHFT   K20    K21    K22    K23    K24    K25    K26    K27    K28    K29                    &kp RSHFT \
&kp LCTRL &kp LGUI &kp LALT                K36                        &kp RALT &kp RGUI &kp K_APP &kp RCTRL
    #else
      #define MIRYOKU_LAYOUTMAPPING_60_ANSI( \
         K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
         K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
         K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
         N30,   N31,   K32,   K33,   K34,   K35,   K36,   K37,   N38,   N39 \
) \
&gresc  &kp N1 &kp N2 &kp N3 &kp N4 &kp N5 &kp N6 &kp N7 &kp N8 &kp N9 &kp N0 &kp MINUS &kp EQUAL  &kp BSPC \
&kp TAB  K00    K01    K02    K03    K04    K05    K06    K07    K08    K09    &kp LBKT  &kp RBKT  &kp BSLH \
&kp CLCK  K10    K11    K12    K13    K14    K15    K16    K17    K18    K19    &kp SEMI            &kp RET \
&kp LSHFT   K20    K21    K22    K23    K24    K25    K26    K27    K28    K29                    &kp RSHFT \
&kp LCTRL &kp LGUI &kp LALT                K33                        &kp RALT &kp RGUI &kp K_APP &kp RCTRL
    #endif
  #else
    #define MIRYOKU_LAYOUTMAPPING_60_ANSI(\
            K00,  K01,  K02,  K03,  K04,        K05,  K06,  K07,  K08,  K09,\
            K10,  K11,  K12,  K13,  K14,        K15,  K16,  K17,  K18,  K19,\
            K20,  K21,  K22,  K23,  K24,        K25,  K26,  K27,  K28,  K29,\
            N30,  N31,  K32,  K33,  K34,        K35,  K36,  K37,  N38,  N39\
)\
XXX   XXX   K00   K01   K02   K03   K04   XXX   K05   K06   K07   K08   K09   XXX \
   XXX   K10   K11   K12   K13   K14   XXX   XXX   K15   K16   K17   K18   K19   XXX \
     K20   K21   K22   K23   K24   XXX   XXX   XXX   K25   K26   K27   K28   K29 \
  XXX         XXX   K32   K33   K34   XXX   XXX   XXX   K35   K36   K37   XXX \
  XXX   XXX   XXX               XXX               XXX   XXX         XXX   XXX
  #endif

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_60_ANSI
