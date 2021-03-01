# 4x5-Macropad-Handwired

### Arduino Pro Micro Pinout
| columns     | 0   | 1   | 2   | 3   |
| ----------- | --- | --- | --- | --- |
| arduino pin | A3  | 16  | TXO | 9   |
| qmk pin     | F4  | B2  | D3  | B5  |

| rows        | 0   | 1   | 2   | 3   | 4   |
| ----------- | --- | --- | --- | --- | --- |
| arduino pin | A2  | 14  | 15  | 8   | 6   |
| qmk pin     | F5  | B3  | B1  | B4  | D7  |


Make example for this keyboard (after setting up your build environment):

    make cgironalas/4x5_macropad_handwired:default

Bootmagic is enabled.  Press the key at (0,0) while plugging the keyboard in to jump to bootloader. This is `7` in the default keymap.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
