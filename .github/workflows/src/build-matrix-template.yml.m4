# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Build Matrix Template'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
# with shield:
          # - absolem # outboard
          # - bastyl_left # outboard
          # - bastyl_right # outboard
          # - boardsource5x12 # outboard
          # - contra # outboard
          # - corne_left
          # - corne_right
          # - cradio36_left # outboard
          # - cradio36_right # outboard
          # - cradio_left
          # - cradio_right
          # - cradios_left # outboard
          # - cradios_right # outboard
          # - crbn
          # - eek
          # - ergodash_left # outboard
          # - ergodash_right # outboard
          # - helix_left
          # - helix_right
          # - iris_left
          # - iris_right
          # - jian_left
          # - jian_right
          # - jorne_left
          # - jorne_right
          # - kyria_left
          # - kyria_right
          # - levinson_left # outboard
          # - levinson_right # outboard
          # - lily58_left
          # - lily58_right
          # - microdox_left
          # - microdox_right
          # - naked60 # outboard
          # - pockettype # outboard
          # - pteron36_left # outboard
          # - pteron36_right # outboard
          # - rebound_v4 # outboard
          # - reviung39 # outboard
          # - reviung41
          # - sofle_left
          # - sofle_right
          # - sweepv2_left # outboard
          # - sweepv2_right # outboard
          # - splitreus62_left
          # - splitreus62_right
          # - tbkmini_left # outboard
          # - tbkmini_right # outboard
          # - viterbi_left # outboard
          # - viterbi_right # outboard
# without shield:
          # - ""
        board:
# with shield:
          # - bluemicro840_v1
          # - nice_nano
          # - nice_nano_v2
          # - nrfmicro_11
          # - nrfmicro_13
          # - proton_c
# without shield:
          # - ahokore # outboard
          # - corne-ish_zen_left # outboard
          # - corne-ish_zen_right # outboard
          # - ferris_rev02 # outboard
          # - planck_rev6
          # - preonic_rev3 # outboard
          # - zaphod # outboard
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
