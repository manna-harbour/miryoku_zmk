name: 'Build Example tbkmini nice_nano_v2'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - tbkmini_left # out
          - tbkmini_right # out
        board:
          - nice_nano_v2 # in
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
