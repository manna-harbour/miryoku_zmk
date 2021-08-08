name: 'Test Controllers'
m4_include(include/jobs-build.yml.m4)m4_dnl
        shield:
          - corne_left # in
        board:
          - bluemicro840_v1 # in
          - nice_nano # in
          - nice_nano_v2 # in
          - nrfmicro_11 # in
          - nrfmicro_13 # in
          - proton_c # in
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
