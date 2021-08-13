# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Test Controllers'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - corne_left
        board:
          - bluemicro840_v1
          - nice_nano
          - nice_nano_v2
          - nrfmicro_11
          - nrfmicro_13
          - proton_c
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
