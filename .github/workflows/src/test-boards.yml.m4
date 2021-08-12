# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Test Boards'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - ""
        board:
          - ahokore # outboard
          - ble_chiffre # outboard
          - corne-ish_zen_left # outboard
          - corne-ish_zen_right # outboard
          - ferris_rev02 # outboard
          - planck_rev6
          - preonic_rev3 # outboard
          - zaphod # outboard
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
