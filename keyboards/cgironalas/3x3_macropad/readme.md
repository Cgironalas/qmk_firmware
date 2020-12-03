# 3x3-Macropad

### Arduino Pro Micro Pinout
| columns     | 0   | 1   | 2   |
| ----------- | --- | --- | --- |
| arduino pin | 16  | 15  | A1  |
| qmk pin     | B1  | B3  | F6  |

| rows        | 0   | 1   | 2   |
| ----------- | --- | --- | --- |
| arduino pin | 4   | 5   | 6   |
| qmk pin     | D4  | C6  | D7  |


Make example for this keyboard (after setting up your build environment):

    make cgironalas/3x3_macropad:default

Bootmagic is enabled.  Press the key at (0,0) (top left corner) while plugging the macropad in to jump to bootloader. This is `Home` in the default keymap.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
