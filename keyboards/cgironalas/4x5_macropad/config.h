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
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Cgironalas
#define PRODUCT         CGA-4x5-Macropad
#define DESCRIPTION     QMK keyboard firmware for a 4x5 macropad

#define TAPPING_TERM 400

/* key matrix size */
#define MATRIX_COLS 4
#define MATRIX_ROWS 5

// COLS: Left to right, ROWS: Top to bottom

// For 4x5
#define MATRIX_COL_PINS { D1, D0, C6, D4 }
#define MATRIX_ROW_PINS { F4, B1, F7, F6, F5 }


#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
