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
  _QWERTY,
  _DVORAK,
  _FN1,
  _FN2,
  _RS
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  MACRO0 = SAFE_RANGE,
  MACRO1
};

// Layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY */
  [_QWERTY] = LAYOUT_split(
                                                                                                                                                       KC_NO,   LT(_RS, KC_PSCR), KC_NO,   KC_NO,
             KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_BSLS,    KC_PGUP, KC_UP,            KC_PGDN, KC_NO,
             KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,    KC_LEFT, KC_DOWN,          KC_RGHT, KC_NO,
    KC_PSCR, KC_RCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,      KC_ENT,         KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_HOME, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FN2),   KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_END,  MO(_FN1),KC_LGUI, KC_LALT,      KC_SPC,      KC_BSPC,                   KC_SPC,           KC_RALT,                        KC_LCTL,        KC_NO,   KC_NO,            KC_NO,   KC_NO
  ),

  /* DVORAK */
  [_DVORAK] = LAYOUT_split(
                                                                                                                                                       KC_NO,   LT(_RS, KC_PSCR), KC_NO,   KC_NO,
             KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_GRV,  KC_BSLS,    KC_PGUP, KC_UP,            KC_PGDN, KC_NO,
             KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,             KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSPC,    KC_LEFT, KC_DOWN,          KC_RGHT, KC_NO,
    KC_PSCR, KC_RCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,             KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,      KC_ENT,         KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_HOME, KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,             KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT, MO(_FN2),   KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_END,  MO(_FN1),KC_LGUI, KC_LALT,      KC_SPC,      KC_BSPC,                   KC_SPC,           KC_RALT,                        KC_LCTL,        KC_NO,   KC_NO,            KC_NO,   KC_NO
  ),

  /* FN1 Function layer triggered from the left hand. */
  [_FN1] = LAYOUT_split(
                                                                                                                                                       KC_NO,   LT(_RS, KC_PSCR), KC_NO,   KC_NO,
             KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,      KC_MUTE, KC_VOLD,          KC_VOLU, KC_NO,
             KC_TAB,  KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,   KC_NO,            KC_HOME, KC_PGUP, KC_NO,   KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2, KC_DEL,     KC_MPRV, KC_MPLY,          KC_MNXT, KC_NO,
    KC_PSCR, KC_LCTL, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_NO,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MS_L, KC_MS_D,      KC_MS_R,        KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_PGUP, KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   DF(_QWERTY),  DF(_DVORAK), KC_END,  KC_PGDN, KC_NO,   KC_NO,   KC_NO,   KC_RSFT, MO(_RS),    KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_PGDN, KC_TRNS, KC_LGUI, KC_LALT,      KC_SPC,      KC_BSPC,                   KC_SPC,           KC_RALT,                        KC_LCTL,        KC_NO,   KC_NO,            KC_NO,   KC_NO
  ),

  /* FN2 Function layer triggered from the right hand. */
  [_FN2] = LAYOUT_split(
                                                                                                                                                       KC_NO,   LT(_RS, BL_TOGG), KC_NO,   KC_NO,
             KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,      BL_ON,   BL_BRTG,          BL_INC,  KC_NO,
             KC_TAB,  KC_NO,   KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_HOME, KC_UP,   KC_PGUP, KC_DEL,     BL_OFF,  BL_STEP,          BL_DEC,  KC_NO,
    KC_PSCR, KC_LCTL, KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN,      KC_RGHT,        KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_PGUP, KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   DF(_QWERTY),  DF(_DVORAK), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_END,  KC_PGDN, KC_TRNS,    KC_NO,   KC_NO,            KC_NO,   KC_NO,
    KC_PGDN, MO(_RS), KC_LGUI, KC_LALT,      KC_SPC,      KC_BSPC,                   KC_SPC,           KC_RALT,                        KC_LCTL,        KC_NO,   KC_NO,            KC_NO,   KC_NO
  ),

  /* RESET / Layers */
  [_RS] = LAYOUT_split(
                                                                                                                                                       KC_NO,        KC_TRNS,     KC_NO,   KC_NO,
             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,      DF(_QWERTY),  DF(_DVORAK), KC_NO,   KC_NO,
             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      DF(_FN1),     DF(_FN2),    RESET,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,          KC_NO,        KC_NO,       KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   DF(_QWERTY),  DF(_DVORAK), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,        KC_NO,       KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,       KC_NO,                     KC_NO,            KC_NO,                          KC_NO,          KC_NO,        KC_NO,       KC_NO,   KC_NO
  ),
};

// Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MACRO0:
            if (record->event.pressed) {
                // when keycode MACRO0 is pressed
                SEND_STRING("Macro 0");
            } else {
                // when keycode MACRO0 is released
            }
            break;
        case MACRO1:
            if (record->event.pressed) {
                // when keycode MACRO1 is pressed
                SEND_STRING("Macro 1");
            } else {
                // when keycode MACRO1 is released
            }
            break;
    }
    return true;
}

// Encoders
void encoder_update_user(uint8_t index, bool clockwise){
    // Encoder functionality for main layers
    if(IS_LAYER_ON(_DVORAK) || IS_LAYER_ON(_QWERTY)){
        if (index == 0){        // First encoder in main keyboard
            if (clockwise) {} else {}
        } else if(index == 1){  // Second encoder in main keyboard
            if (clockwise) {} else {}
        } else if(index == 2){  // First encoder in minipad
            if (clockwise) {
                tap_code(KC_VOLD);
            } else {
                tap_code(KC_VOLU);
            }
        } else if(index == 3){  // Second encoder in minipad
            if (clockwise) {
                tap_code(KC_MS_WH_DOWN);
            } else {
                tap_code(KC_MS_WH_UP);
            }
        }
    // Encoder functionality for FN layers
    } else if (IS_LAYER_ON(_FN1) || IS_LAYER_ON(_FN2)) {
        if (index == 0){        // First encoder in main keyboard
            if (clockwise) {} else {}
        } else if(index == 1){  // Second encoder in main keyboard
            if (clockwise) {} else {}
        } else if(index == 2){  // First encoder in minipad
            if (clockwise) {
                tap_code(KC_LEFT);
            } else {
                tap_code(KC_RGHT);
            }
        } else if(index == 3){  // Second encoder in minipad
            if (clockwise) {
                tap_code(KC_DOWN);
            } else {
                tap_code(KC_UP);
            }
        }
    // Encoder functionality for DFs/Reset layer
    } else if(IS_LAYER_ON(_RS)) {
        if (index == 0){        // First encoder in main keyboard
            if (clockwise) {} else {}
        } else if(index == 1){  // Second encoder in main keyboard
            if (clockwise) {} else {}
        } else if(index == 2){  // First encoder in minipad
            if (clockwise) {
                tap_code(KC_NO);
            } else {
                tap_code(KC_NO);
            }
        } else if(index == 3){  // Second encoder in minipad
            if (clockwise) {
                tap_code(KC_NO);
            } else {
                tap_code(KC_NO);
            }
        }
    }
}
