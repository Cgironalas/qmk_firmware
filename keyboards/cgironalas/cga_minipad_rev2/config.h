/*
Copyright 2020 Carlos Giron <cgironalas@gmail.com>

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

#include "config_common.h"
/* USB Device descriptor parameter */
#define VENDOR_ID       0xCF1A
#define PRODUCT_ID      0x0033
#define DEVICE_VER      0x0002
#define MANUFACTURER    Cgironalas
#define PRODUCT         CGA-Minipad-Rev2
#define DESCRIPTION     QMK keyboard firmware for a 3x3 macropad

#define TAPPING_TERM 300

/* key matrix size */
#define MATRIX_COLS 3
#define MATRIX_ROWS 3

// COLS: Left to right, ROWS: Top to bottom

#define MATRIX_COL_PINS { F4, B2, D3 }
#define MATRIX_ROW_PINS { F5, B3, B1 }

// Custom bootmagic lite switch cause issue
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

// Encoder pins
#define ENCODERS_PAD_A { F6, D4 }
#define ENCODERS_PAD_B { F7, C6 }

// Backlight
#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_ON_STATE 1
#define BACKLIGHT_LIMIT_VAL 255

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
