# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Test Shields'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - absolem # outboard
          - a_dux_left
          - a_dux_right
          - ahokore # outboard
          - bastyl_left # outboard
          - bastyl_right # outboard
          - bat43 # outboard
          - boardsource5x12 # outboard
          - contra # outboard
          - corne_left
          - corne_right
          - cradio36_left # outboard
          - cradio36_right # outboard
          - cradio_left
          - cradio_right
          - cradios_left # outboard
          - cradios_right # outboard
          - crbn
          - eek
          - ergodash_left # outboard
          - ergodash_right # outboard
          - helix_left
          - helix_right
          - iris_left
          - iris_right
          - jian_left
          - jian_right
          - jorne_left
          - jorne_right
          - kyria_left
          - kyria_right
          - levinson_left # outboard
          - levinson_right # outboard
          - lily58_left
          - lily58_right
          - microdox_left
          - microdox_right
          - microdox_mod_left # outboard
          - microdox_mod_right # outboard
          - naked60
          - pockettype # outboard
          - pteron36_left # outboard
          - pteron36_right # outboard
          - rebound_v4 # outboard
          - reviung39 # outboard
          - reviung41
          - sofle_left
          - sofle_right
          - splitreus62_left
          - splitreus62_right
          - tbkmini_left # outboard
          - tbkmini_right # outboard
          - tightyl_left # outboard
          - tightyl_right # outboard
          - viterbi_left # outboard
          - viterbi_right # outboard
          - zodiark_left # outboard
          - zodiark_right # outboard
        board:
          - nice_nano
        alphas:
          - default
        nav:
          - default
        clipboard:
          - default
        layers:
          - default
        mapping:
          - default
        kconfig:
          - default
m4_include(include/build-steps.yml.m4)m4_dnl
