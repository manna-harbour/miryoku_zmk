# Miryoku Xiao Shield

This shield configuration allows using the Miryoku layout with Seeeduino Xiao BLE controllers, 
connecting directly to the GPIO pins without using a Pro Micro compatibility layer.

## Features

- Direct GPIO pin access for the Xiao BLE
- 42-key split keyboard layout compatible with Miryoku
- Bluetooth functionality

## Hardware

- 2x Seeeduino Xiao BLE controllers
- 42 switches
- Diodes (for col2row configuration)

## Pinout

### Left Half

- Rows: Xiao pins D10, D9, D8, D7
- Columns: Xiao pins D0, D1, D2, D3, D4

### Right Half

- Rows: Xiao pins D10, D9, D8, D7
- Columns: Xiao pins D0, D1, D2, D3, D4

## Building and Flashing

To build the firmware:

```
west build -p -d build/miryoku_xiao_left -b seeeduino_xiao_ble -- -DSHIELD=miryoku_xiao_left
west build -p -d build/miryoku_xiao_right -b seeeduino_xiao_ble -- -DSHIELD=miryoku_xiao_right
```

To flash:

```
west flash -d build/miryoku_xiao_left
west flash -d build/miryoku_xiao_right
```

## Customization

To customize the keymap, follow the standard Miryoku customization procedures in the main repository. 