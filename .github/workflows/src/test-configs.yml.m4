# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Test Configs'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - corne_left
        board:
          - nice_nano
        alphas:
          - default
          - colemak
          - colemakdhk
          - dvorak
          - halmak
          - workman
          - qwerty
        nav:
          - default
          - vi
          # - invertedt # TODO
        clipboard:
          - default
          - fun
          - mac
          - win
        layers:
          - default
          # - flip # TODO
        mapping:
          - default
        kconfig:
          - default
m4_include(include/build-steps.yml.m4)m4_dnl
