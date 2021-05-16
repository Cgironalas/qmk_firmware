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
  [_DVORAK] = LAYOUT_left(
    KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,              KC_5,  KC_6,  KC_NO,
    KC_TAB,           KC_QUOT, KC_COMM, KC_DOT,  KC_P,              KC_Y,  KC_NO, KC_NO,
    KC_RCTL,          KC_A,    KC_O,    KC_E,    KC_U,              KC_I,  KC_NO, KC_NO,
    KC_LSFT,          KC_SCLN, KC_Q,    KC_J,    KC_K,              KC_X,  KC_NO, KC_NO,
    LT(_FN1, KC_ESC), KC_LGUI, KC_LALT, KC_SPC,  LT(_FN2, KC_BSPC), KC_NO, KC_NO, KC_NO
  ),

  /* QWERTY */
  [_QWERTY] = LAYOUT_left(
    KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,              KC_5,  KC_6,  KC_NO,
    KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,              KC_T,  KC_NO, KC_NO,
    KC_RCTL,          KC_A,    KC_S,    KC_D,    KC_F,              KC_G,  KC_NO, KC_NO,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,              KC_B,  KC_NO, KC_NO,
    LT(_FN1, KC_ESC), KC_LGUI, KC_LALT, KC_SPC,  LT(_FN2, KC_BSPC), KC_NO, KC_NO, KC_NO
  ),

  /* FN1 Function layer triggered from the left hand. */
  [_FN1] = LAYOUT_left(
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,             KC_F5, KC_F6, KC_NO,
    KC_TAB,           KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,             KC_NO, KC_NO, KC_NO,
    KC_LCTL,          KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,             KC_NO, KC_NO, KC_NO,
    KC_LSFT,          KC_NO,   KC_NO,   KC_NO,   KC_NO,             DF(1), KC_NO, KC_NO,
    KC_TRNS,          KC_LGUI, KC_LALT, KC_SPC,  KC_BSPC,           KC_NO, KC_NO, KC_NO
  ),

  /* FN2 Function layer triggered from the right hand. */
  [_FN2] = LAYOUT_left(
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5, KC_F6, KC_NO,
    KC_TAB,           KC_NO,   KC_MUTE, KC_VOLD, KC_VOLU,          KC_NO, KC_NO, KC_NO,
    KC_LCTL,          KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT,          KC_NO, KC_NO, KC_NO,
    KC_LSFT,          KC_NO,   RESET,   KC_NO,   KC_NO,            DF(0), KC_NO, KC_NO,
    KC_TRNS,          KC_LGUI, KC_LALT, KC_SPC,  KC_BSPC,          KC_NO, KC_NO, KC_NO
  ),
};
