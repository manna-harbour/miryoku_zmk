# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Build Example corne nice_nano'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - corne_left
          - corne_right
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
