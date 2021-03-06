# CGA Pro Micro Alice Prototype 1

![cga_pm_alice_proto1](imgur.com image replace me!)

This is a project for a handwired prototype that I built for an Arduino Pro Micro powered Alice like keyboard.

* Keyboard Maintainer: [Cgironalas](https://github.com/cgironalas)
* Hardware Supported: This keyboard was disegned to be wired with a Pro Micro or equivalent controler.

### Pro Micro Pinout
| columns     |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |
| ----------- | --- | --- | --- | --- | --- | --- | --- | --- |
| arduino pin |  6  |  4  |  3  | RX1 | TX0 | A3  | A2  | A1  |
| qmk pin     | D7  | D4  | D0  | D2  | D3  | F4  | F5  | F6  |

| rows        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |
| ----------- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| arduino pin |  5  |  7  |  8  |  9  | A0  | 15  | 14  | 16  | 10  |
| qmk pin     | C6  | E6  | B4  | B5  | F7  | B1  | B3  | B2  | B6  |


### Firmware commands

Bootmagic is enabled.  Press the key at (0,0) while plugging the keyboard in to jump to bootloader. This is `Print Screen` in the default keymap.

Make example for this keyboard (after setting up your build environment):

    make handwired/cga_pm_alice_proto1/solo:default

Flashing example for this keyboard:

    make handwired/cga_pm_alice_proto1/solo:default:avrdude

#### For split keyboard functionality

Make example for this keyboard as the left hand side of the split (after setting up your build environment):

    make handwired/cga_pm_alice_proto1/split:split

Flashing example for this keyboard:

    make handwired/cga_pm_alice_proto1/split:split:avrdude


**If you choose to manage both the main keyboard and the macropads firmware through this you'll need to do a configuration like the split_all:**
For this you'll need to flash the main keyboard with the command
    make handwired/cga_pm_alice_proto1/split:split_3x3_rev2:avrdude-split-left

The macropad will use:
    make handwired/cga_pm_alice_proto1/split_all:split_3x3_rev2

Then flash the macropad like this:
    make handwired/cga_pm_alice_proto1/split_all:split_3x3_rev2:avrdude-split-right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
