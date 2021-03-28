# CGA Minipad Rev 2 (EOL)

## Top corners don't work!

Due to a mistake in the PCB design the top corner switches always have continuity so they can't be programmed. Will be revised in version 3.

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

    make cgironalas/cga_minipad_rev2:default

Bootmagic is enabled.  Press the key at (0,1) (top middle) while plugging in the macropad to jump to bootloader. This is `Print Screen` in the default keymap.

* Keyboard Maintainer: [Cgironalas](https://github.com/Cgironalas)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
