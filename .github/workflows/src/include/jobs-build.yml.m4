on:
  - workflow_dispatch
jobs:
  build:
    runs-on: ubuntu-latest
    container:
      image: zmkfirmware/zmk-build-arm:2.5
    strategy:
      fail-fast: false
      matrix:
