
.PHONY: default
default: corne

.PHONY: all
all: corne planck


.PHONY: corne
corne: corne_left corne_right

.PHONY: corne_left
corne_left: ZMK_BOARD = nice_nano
corne_left: ZMK_SHIELD = corne_left
corne_left: ZMK_TARGET = $(ZMK_BOARD)-$(ZMK_SHIELD)
corne_left: ZMK_MACROS += -DSHIELD=$(ZMK_SHIELD)
corne_left: zmk-nice_nano-corne_left.uf2

.PHONY: corne_right
corne_right: ZMK_BOARD = nice_nano
corne_right: ZMK_SHIELD = corne_right
corne_right: ZMK_TARGET = $(ZMK_BOARD)-$(ZMK_SHIELD)
corne_right: ZMK_MACROS += -DSHIELD=$(ZMK_SHIELD)
corne_right: zmk-nice_nano-corne_right.uf2

$(ZMK_APP_DIR)/build/nice_nano-corne_*/zephyr/zmk.uf2: corne.conf corne.keymap ../miryoku/split_3x6_3.h ../miryoku/miryoku.dtsi


.PHONY: planck
planck: planck_rev6

.PHONY: planck_rev6
planck_rev6: ZMK_BOARD = planck_rev6
planck_rev6: ZMK_TARGET = $(ZMK_BOARD)
planck_rev6: zmk-planck_rev6.uf2

$(ZMK_APP_DIR)/build/planck_rev6/zephyr/zmk.uf2: planck_rev6.keymap ../miryoku/ortho_4_12.h ../miryoku/miryoku.dtsi


zmk-%.uf2: $(ZMK_APP_DIR)/build/%/zephyr/zmk.uf2
	cp -p $< $@

$(ZMK_APP_DIR)/build/%/zephyr/zmk.uf2: # FORCE
	cd $(ZMK_APP_DIR) && west build -d build/$(ZMK_TARGET) -b $(ZMK_BOARD) -- -DZMK_CONFIG=$(ZMK_CONFIG) $(ZMK_MACROS)

.PHONY: FORCE
FORCE:

# nice_nano.dts.pre.tmp is in app/build/left/zephyr
