# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Test Build'
on:
  push:
    branches:
    - master
  pull_request:
  workflow_dispatch:
jobs:
  build:
    if: github.repository == 'manna-harbour/zmk-config'
    runs-on: ubuntu-latest
    container:
      image: zmkfirmware/zmk-build-arm:2.5
    strategy:
      fail-fast: false
      matrix:
        shield:
          - corne_left
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
m4_include(include/build-steps.yml.m4)m4_dnl
