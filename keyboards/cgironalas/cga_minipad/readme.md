# CGA-Minipad

### Arduino Pro Micro Pinout
| columns     |  0  |  1  |  2  |
| ----------- | --- | --- | --- |
| Arduino pin | 16  | 15  | A1  |
| QMK pin     | B1  | B3  | F6  |

| rows        |  0  |  1  |  2  |
| ----------- | --- | --- | --- |
| Arduino pin | 4   | 5   | 6   |
| QMK pin     | D4  | C6  | D7  |


Make example to build the firmware for this keyboard (after setting up your build environment):

    make cgironalas/cga_minipad:default

Make example to flash the firmware:

    make cgironalas/cga_minipad:default:avrdude

Bootmagic is enabled. Press the key at (0,0) (top left corner) while plugging in the macropad to jump to bootloader. This is `Home` in the default keymap.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
