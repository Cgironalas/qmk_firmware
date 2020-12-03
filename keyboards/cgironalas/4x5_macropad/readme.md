# 4x5-Macropad

### Arduino Pro Micro Pinout
| columns     | 0   | 1   | 2   | 3   |
| ----------- | --- | --- | --- | --- |
| arduino pin | 2   | 3   | 5   | 4   |
| qmk pin     | D1  | D0  | C6  | D4  |

| rows        | 0   | 1   | 2   | 3   | 4   |
| ----------- | --- | --- | --- | --- | --- |
| arduino pin | A3  | 15  | A0  | A1  | A2  |
| qmk pin     | F4  | B1  | F7  | F6  | F5  |


Make example for this keyboard (after setting up your build environment):

    make cgironalas/4x5_macropad:default

Bootmagic is enabled.  Press the key at (0,0) (top left corner) while plugging in the macropad to jump to bootloader. This is `Numlock` in the default keymap.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
