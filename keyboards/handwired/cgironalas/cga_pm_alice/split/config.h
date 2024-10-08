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
#define PRODUCT_ID    0x0A1E
#define DEVICE_VER    0x0001
#define MANUFACTURER  Cgironalas
#define PRODUCT       CGA-PM-Alice-Split
#define DESCRIPTION   Pro Micro powered Alice like handwired board

#define TAPPING_TERM 300

/* Key matrix size */
#define MATRIX_ROWS 18
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

/* Enable SOFT_SERIAL_PIN to allow usage of macropads for extended usability. */
#define SOFT_SERIAL_PIN D1

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
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT
