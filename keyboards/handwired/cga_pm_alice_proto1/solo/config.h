/*
Copyright 2021 Cgironalas

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID     0xCAAA
#define PRODUCT_ID    0x1000
#define DEVICE_VER    0x0001
#define MANUFACTURER  Cgironalas
#define PRODUCT       CGA-PM-Alice-Proto1-Solo
#define DESCRIPTION   Pro Micro powered Alice prototype

#define TAPPING_TERM 300

/* Key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 8

/* Keyboard Matrix Assignments
 * Cols: left to right.
 * Rows: top to bottom.
 */
#define MATRIX_ROW_PINS { C6, E6, B4, B5, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D7, D4, D0, D2, D3, F4, F5, F6 }

// Encoder pins
#define ENCODERS_PAD_A { D5, F1 }
#define ENCODERS_PAD_B { C7, F0 }

// Backlight
#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_ON_STATE 1
#define BACKLIGHT_LIMIT_VAL 255

#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT
