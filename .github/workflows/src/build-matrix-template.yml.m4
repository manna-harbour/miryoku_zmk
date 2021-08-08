name: 'Build Matrix Template'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
# with shield:
          # - absolem # out
          # - bastyl_left # out
          # - bastyl_right # out
          # - corne_left # in
          # - corne_right # in
          # - cradio36_left # out
          # - cradio36_right # out
          # - cradio_left # in
          # - cradio_right # in
          # - cradios_left # out
          # - cradios_right # out
          # - cradioz_left # out TODO
          # - cradioz_right # out TODO
          # - crbn # in
          # - eek # in
          # - helix_left # in
          # - helix_right # in
          # - iris_left # in
          # - iris_right # in
          # - jian_left # in
          # - jian_right # in
          # - jorne_left # in
          # - jorne_right # in
          # - kyria_left # in
          # - kyria_right # in
          # - lily58_left # in
          # - lily58_right # in
          # - microdox_left # in
          # - microdox_right # in
          # - pteron36_left # out
          # - pteron36_right # out
          # - sofle_left # in
          # - sofle_right # in
          # - sweepv2_left # out
          # - sweepv2_right # out
          # - splitreus62_left # in
          # - splitreus62_right # in
          # - tbkmini_left # out
          # - tbkmini_right # out
# without shield:
          # - ""
        board:
# with shield:
          # - bluemicro840_v1 # in
          # - nice_nano # in
          # - nice_nano_v2 # in
          # - nrfmicro_11 # in
          # - nrfmicro_13 # in
          # - proton_c # in
# without shield:
          # - ahokore # out
          # - corne-ish_zen_left # out broken
          # - corne-ish_zen_right # out broken
          # - ferris_rev02 # out broken
          # - planck_rev6 # in
          # - zaphod # out
        alphas:
          # - default
          # - colemak
          # - colemakdhk
          # - dvorak
          # - halmak
          # - workman
          # - qwerty
        nav:
          # - default
          # - vi
          # - invertedt # TODO
        clipboard:
          # - default
          # - fun
          # - mac
          # - win
        layers:
          # - default
          # - flip # TODO
        mapping:
          # - default
m4_include(include/build-steps.yml.m4)m4_dnl
