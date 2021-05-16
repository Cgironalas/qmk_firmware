/* Copyright 2021 Cgironalas
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _DVORAK,
  _QWERTY,
  _FN1,
  _FN2
};

// Layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* DVORAK */
  [_DVORAK] = LAYOUT_right(
    KC_NO,    KC_7,              KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_F,     KC_G,              KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSLS,
    KC_D,     KC_H,              KC_T,    KC_N,    KC_S,    KC_MINS, KC_ENT,  KC_NO,
    KC_B,     KC_M,              KC_W,    KC_V,    KC_Z,    KC_RSFT, KC_NO,   KC_NO,
    KC_SPC,   LT(_FN1, KC_BSLS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO
  ),

  /* QWERTY */
  [_QWERTY] = LAYOUT_right(
    KC_NO,    KC_7,              KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_Y,     KC_U,              KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_H,     KC_J,              KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_NO,
    KC_N,     KC_M,              KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_NO,   KC_NO,
    KC_SPC,   LT(_FN1, KC_BSLS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO
  ),

  /* FN1 Function layer triggered from the right hand. */
  [_FN1] = LAYOUT_right(
    KC_NO,    KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,
    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
    //        RALT(N) here
    DF(0),    KC_NO,    KC_NO,   KC_NO,   DF(1),   KC_NO,    KC_NO,   KC_NO,
    MO(_FN2), KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
  ),

  /* FN2 Function layer triggered from the right hand. */
  [_FN2] = LAYOUT_right(
    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,
    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_TRNS,  KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
};
