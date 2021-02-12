# CGA Pro Micro Alice Prototype

### Arduino Pro Micro Pinout
| columns     | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   |
| ----------- | --- | --- | --- | --- | --- | --- | --- | --- |
| arduino pin |  6  |  4  |  3  | RX1 | TX0 | A3  | A2  | A1  |
| qmk pin     | D7  | D4  | D0  | D2  | D3  | F4  | F5  | F6  |

| rows        | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   |
| ----------- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| arduino pin |  5  |  7  |  8  |  9  | A0  | 15  | 14  | 16  | 10  |
| qmk pin     | C6  | E6  | B4  | B5  | F7  | B1  | B3  | B2  | B6  |


Make example for this keyboard (after setting up your build environment):

    make cgironalas/cga_pm_alice_proto1_handwired:better

Bootmagic is enabled.  Press the key at (0,0) while plugging the keyboard in to jump to bootloader. This is `Print Screen` in the default keymap.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
