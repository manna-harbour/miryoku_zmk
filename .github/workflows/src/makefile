all: ../build-example-corne-nice_nano.yml ../build-example-tbkmini-nice_nano_v2.yml ../build-inputs.yml ../build-matrix-template.yml ../test-boards.yml ../test-build.yml ../test-configs.yml ../test-controllers.yml ../test-shields.yml

../%.yml: %.yml.m4 include/* makefile
	m4 -P include/init.yml.m4 $< > $@
