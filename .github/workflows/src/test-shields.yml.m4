# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Test Shields'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - absolem # out
          - bastyl_left # out
          - bastyl_right # out
          - corne_left # in
          - corne_right # in
          - cradio36_left # out
          - cradio36_right # out
          - cradio_left # in
          - cradio_right # in
          - cradios_left # out
          - cradios_right # out
          # - cradioz_left out TODO
          # - cradioz_right out TODO
          - crbn # in
          - eek # in
          - helix_left # in
          - helix_right # in
          - iris_left # in
          - iris_right # in
          - jian_left # in
          - jian_right # in
          - jorne_left # in
          - jorne_right # in
          - kyria_left # in
          - kyria_right # in
          - lily58_left # in
          - lily58_right # in
          - microdox_left # in
          - microdox_right # in
          - pteron36_left # out
          - pteron36_right # out
          - sofle_left # in
          - sofle_right # in
          - splitreus62_left # in
          - splitreus62_right # in
          - sweepv2_left # out
          - sweepv2_right # out
          - tbkmini_left # out
          - tbkmini_right # out
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
m4_include(include/build-steps.yml.m4)m4_dnl
