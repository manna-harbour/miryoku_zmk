# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Build Example tbkmini nice_nano_v2'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - tbkmini_left # outboard
          - tbkmini_right # outboard
        board:
          - nice_nano_v2
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
