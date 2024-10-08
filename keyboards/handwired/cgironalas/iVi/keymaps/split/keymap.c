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

// Layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY */
  [0] = LAYOUT_split(
    KC_F13,     KC_VOLU, KC_GRV,  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,
    KC_F14,     KC_VOLD,          KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
                KC_MUTE,          KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
                LT(2, KC_MPLY),   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_DEL,
                KC_F15,           KC_F16,  KC_LGUI,          KC_LALT, KC_LSFT, KC_SPC,    KC_SPC,  KC_RSFT, KC_RALT, KC_LEFT, KC_DOWN,                   KC_UP,   KC_RGHT
  ),

  /* DVORAK */
  [1] = LAYOUT_split(
    LALT(KC_A), KC_VOLU, KC_GRV,  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSLS,
    LALT(KC_V), KC_VOLD,          KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSPC,
                KC_MUTE,          KC_RCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,      KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,          KC_ENT,
                LT(2, KC_MPLY),   KC_ESC,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,      KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,                      KC_DEL,
                KC_MPRV,          KC_MNXT, KC_LGUI,          KC_LALT, KC_LSFT, KC_SPC,    KC_SPC,  KC_RSFT, KC_RALT, KC_LEFT, KC_DOWN,                   KC_UP,   KC_RGHT
  ),

  /* FN1 Function layer triggered from the left hand. */
  [2] = LAYOUT_split(
    KC_F1,      KC_F2,   KC_ESC,  KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_F3,      KC_F4,            KC_TAB,  KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,   KC_NO,     KC_HOME, KC_PGUP, KC_NO,   KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,
                KC_F5,            KC_LCTL, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_NO,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MS_L, KC_MS_D,          KC_MS_R,
                LT(2, KC_ESC),    KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_END,  KC_PGDN, KC_NO,   KC_NO,   KC_NO,                     KC_RSFT,
                LT(2, KC_ESC),    KC_TRNS, KC_LGUI,          KC_LALT, KC_BSPC, KC_SPC,    KC_SPC,  KC_DEL,  MO(3),   KC_LEFT, KC_DOWN,                   KC_UP,   KC_RGHT
  ),

  /* RESET / Layers */
  [3] = LAYOUT_split(
    KC_F1,      KC_F2,   KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,
    KC_F3,      KC_F4,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                KC_F5,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,
                LT(2, KC_ESC),    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   DF(0),     DF(1),   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,
                LT(2, KC_ESC),    KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO
  ),
};
