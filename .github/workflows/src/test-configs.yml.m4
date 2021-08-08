name: 'Test Configs'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - corne_left # in
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
m4_include(include/build-steps.yml.m4)m4_dnl
