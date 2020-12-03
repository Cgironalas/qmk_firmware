# 3x3-Macropad-Rev2

### Arduino Pro Micro Pinout
| columns     | 0   | 1   | 2   |
| ----------- | --- | --- | --- |
| arduino pin | A3  | 16  | TXO |
| qmk pin     | F4  | B2  | D3  |

| rows        | 0   | 1   | 2   |
| ----------- | --- | --- | --- |
| arduino pin | A2  | 14  | 15  |
| qmk pin     | F5  | B3  | B1  |


Make example for this keyboard (after setting up your build environment):

    make cgironalas/3x3_macropad_rev2:default

Bootmagic is enabled.  Press the key at (0,0) (top left corner) while plugging in the macropad to jump to bootloader. This is `Home` in the default keymap. This can still be done with 5 pin rotary encoders if using one on the top left corner.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
