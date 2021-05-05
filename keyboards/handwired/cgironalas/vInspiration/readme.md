# CGA vInspiration

![cga_pm_alice](imgur.com image replace me!)

This is a project for a handwired prototype that I built for an Arduino Pro Micro powered Alice like keyboard.

* Keyboard Maintainer: [Cgironalas](https://github.com/cgironalas)
* Hardware Supported: This keyboard was designed to be wired with a Pro Micro or equivalent controller.

### Pro Micro Pinout
| Columns     |   0  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |
| ----------- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| Arduino pin |   6  |   4  |   3  |  RX1 |  TX0 |  A3  |  A2  |  A1  |
| QMK pin     |  D7  |  D4  |  D0  |  D2  |  D3  |  F4  |  F5  |  F6  |

| Rows        |   0  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |
| ----------- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| Arduino pin |   5  |   7  |   8  |   9  |  A0  |  15  |  14  |  16  |  10  |
| QMK pin     |  C6  |  E6  |  B4  |  B5  |  F7  |  B1  |  B3  |  B2  |  B6  |


### Firmware commands

Bootmagic is enabled. Press the key at (0,0) while plugging the keyboard in to jump to bootloader. This is `Print Screen` in the default keymaps.

Make commands for building / flashing the available firmwares (after setting up your build environment).

#### Standalone

Firmware for running the keyboard standalone.

Building the firmware:

    make handwired/cgironalas/cga_pm_alice/solo:default

Flashing the firmware:

    make handwired/cgironalas/cga_pm_alice/solo:default:avrdude

#### For split keyboard functionality

These firmwares are for running the keyboard as a "split" allowing it to connect to another keyboard / macropad through a TRRS cable. The firmwares/keymaps already available and shown here will be for other boards that I have worked on mainly the CGA Minipad and the CGA Numpad.

If you are planning to use any other CGA board along this keyboard you can build the firmware with the `split` version and the default `split` keymap until you get the extra board. If you already have or know the extra board that you'll use then build the firmware with the `split` version and the respective board's keymap (either `sp_minipad` or `sp_numpad`).

    make handwired/cgironalas/cga_pm_alice/split:split

Flashing example for this keyboard:

    make handwired/cgironalas/cga_pm_alice/split:split:avrdude-split-left

If you are using a CGA Minipad as the extra board then the firmware for it will be:
    make handwired/cgironalas/cga_pm_alice/split:sp_minipad

Then flash the extra board like this:
    make handwired/cgironalas/cga_pm_alice/split:sp_minipad:avrdude-split-right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
