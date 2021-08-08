name: 'Test Boards'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - ""
        board:
          - ahokore # out
          # - corne-ish_zen_left # out broken
          # - corne-ish_zen_right # out broken
          # - ferris_rev02 out broken
          - planck_rev6 # in
          - zaphod # out
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
