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
#define VENDOR_ID     0xCF1A
#define PRODUCT_ID    0x0AAA
#define DEVICE_VER    0x0002
#define MANUFACTURER  Cgironalas
#define PRODUCT       CGA-vInspiration-Right
#define DESCRIPTION   Pro Micro powered split modular 60% (right side)

#define TAPPING_TERM 300

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 8

/* Keyboard Matrix Assignments
 * Cols: left to right.
 * Rows: top to bottom.
 */
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { B3, B2, B5, B4, E6, D7, C6, D4 }

// Encoder pins
#define ENCODERS_PAD_A { B7, F1 }
#define ENCODERS_PAD_B { D5, F0 }

// Backlight
/* #define BACKLIGHT_PIN B7 */
/* #define BACKLIGHT_LEVELS 3 */
/* #define BACKLIGHT_ON_STATE 1 */
/* #define BACKLIGHT_LIMIT_VAL 255 */

#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

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
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT
