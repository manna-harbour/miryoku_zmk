name: 'Build Example corne nice_nano'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - corne_left # in
          - corne_right # in
        board:
          - nice_nano # in
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
