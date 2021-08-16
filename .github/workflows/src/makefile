# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

source := $(wildcard *.yml.m4)
targets := $(source:%.yml.m4=../%.yml)
all: $(targets)

../%.yml: %.yml.m4 include/* makefile
	m4 -P include/init.yml.m4 $< > $@
