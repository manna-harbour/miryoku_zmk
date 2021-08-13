# Copyright 2021 Manna Harbour
# https://github.com/manna-harbour/miryoku

name: 'Build Inputs'
on:
  workflow_dispatch:
    inputs:
      board:
        description: 'Board'
        required: true
      shield:
        description: 'Shield'
        required: false
        default: 'default'
      alphas:
        description: 'Miryoku Alphas'
        required: false
        default: 'default'
      nav:
        description: 'Miryoku Nav'
        required: false
        default: 'default'
      clipboard:
        description: 'Miryoku Clipboard'
        required: false
        default: 'default'
      layers:
        description: 'Miryoku Layers'
        required: false
        default: 'default'
      mapping:
        description: 'Miryoku Mapping'
        required: false
        default: 'default'
jobs:
  process-inputs:
    runs-on: ubuntu-latest
    outputs:
      board: ${{ steps.process-inputs.outputs.board }}
      shield: ${{ steps.process-inputs.outputs.shield }}
      alphas: ${{ steps.process-inputs.outputs.alphas }}
      nav: ${{ steps.process-inputs.outputs.nav }}
      clipboard: ${{ steps.process-inputs.outputs.clipboard }}
      layers: ${{ steps.process-inputs.outputs.layers }}
      mapping: ${{ steps.process-inputs.outputs.mapping }}
    steps:
      - name: Process inputs
        id: process-inputs
        run: |
          set-output()
          {
            json=`echo "$2" | jq -cnR 'inputs | split("(,| )+";"")'`
            echo "::set-output name=$1::$json"
          }
          set-output "board" "${{ github.event.inputs.board }}"
          set-output "shield" "${{ github.event.inputs.shield }}"
          set-output "alphas" "${{ github.event.inputs.alphas }}"
          set-output "nav" "${{ github.event.inputs.nav }}"
          set-output "clipboard" "${{ github.event.inputs.clipboard }}"
          set-output "layers" "${{ github.event.inputs.layers }}"
          set-output "mapping" "${{ github.event.inputs.mapping }}"
  build:
    runs-on: ubuntu-latest
    container:
      image: zmkfirmware/zmk-build-arm:2.5
    needs: process-inputs
    strategy:
      fail-fast: false
      matrix:
        board: ${{ fromJSON(needs.process-inputs.outputs.board) }}
        shield: ${{ fromJSON(needs.process-inputs.outputs.shield) }}
        alphas: ${{ fromJSON(needs.process-inputs.outputs.alphas) }}
        nav: ${{ fromJSON(needs.process-inputs.outputs.nav) }}
        clipboard: ${{ fromJSON(needs.process-inputs.outputs.clipboard) }}
        layers: ${{ fromJSON(needs.process-inputs.outputs.layers) }}
        mapping: ${{ fromJSON(needs.process-inputs.outputs.mapping) }}
m4_include(include/build-steps.yml.m4)m4_dnl
