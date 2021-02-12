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
#define VENDOR_ID       0xCAAA
#define PRODUCT_ID      0x1000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Cgironalas
#define PRODUCT         CGA-PM-Alice-Proto1-Handwired
#define DESCRIPTION     QMK keyboard firmware for a handwired pro micro powered alice like.

#define TAPPING_TERM 300

/* key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 8

// ROWS: Top to bottom, COLS: Left to right

// Using 8x9 matrix
#define MATRIX_ROW_PINS { C6, E6, B4, B5, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D7, D4, D0, D2, D3, F4, F5, F6 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
