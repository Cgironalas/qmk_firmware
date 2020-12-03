#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Default layer is numpad.
   * ,-------------------------.
   * | NL/DF | /  | *  | -     |
   * |-------|----|----|-------|
   * | 7     | 8  | 9  | +     |
   * |-------|----|----|-------|
   * | 4     | 5  | 6  | Bksp  |
   * |-------|----|----|-------|
   * | 1     | 2  | 3  | Space |
   * |-------|----|----|-------|
   * | 0     | =  | .  | En/FN |
   * `-------------------------'
   */

  [0] = LAYOUT_numpad_5x4(
    LT(3, KC_NLCK), KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,          KC_P8,   KC_P9,   KC_PPLS,
    KC_P4,          KC_P5,   KC_P6,   KC_BSPC,
    KC_P1,          KC_P2,   KC_P3,   KC_SPC,
    KC_P0,          KC_PEQL, KC_PDOT, LT(1, KC_PENT)
  ),

  /* Enter layer is TKL.
   * ,-----------------------------.
   * | PS/DF | Mute | Vol-  | Vol+ |
   * |-------|------|-------|------|
   * | Home  | Del  | PgUp  | eGUI |
   * |-------|------|-------|------|
   * | End   | Up   | PgDn  | dGUI |
   * |-------|------|-------|------|
   * | Left  | Down | Right | Bspc |
   * |-------|------|-------|------|
   * | Prev  | Play | Next  |      |
   * `-----------------------------'
   */

  [1] = LAYOUT_numpad_5x4(
    LT(3, KC_PSCR), KC_MUTE, KC_VOLD, KC_VOLU,
    KC_HOME,        KC_DEL,  KC_PGUP, GUI_ON,
    KC_END,         KC_UP,   KC_PGDN, GUI_OFF,
    KC_LEFT,        KC_DOWN, KC_RGHT, KC_BSPC,
    KC_MPRV,        KC_MPLY, KC_MNXT, KC_NO
  ),

  /* NumLock layer is Fs.
   * ,-----------------------.
   * | DF  | F17 | F18 | F19 |
   * |-----|-----|-----|-----|
   * | F13 | F14 | F15 | F16 |
   * |-----|-----|-----|-----|
   * | F9  | F10 | F11 | F12 |
   * |-----|-----|-----|-----|
   * | F5  | F6  | F7  | F8  |
   * |-----|-----|-----|-----|
   * | F1  | F2  | F3  | F4  |
   * `-----------------------'
   */

  [2] = LAYOUT_numpad_5x4(
    MO(3),   KC_F17,  KC_F18,  KC_F19,
    KC_F13,  KC_F14,  KC_F15,  KC_F16,
    KC_F9,   KC_F10,  KC_F11,  KC_12,
    KC_F5,   KC_F6,   KC_F7,   KC_F8,
    KC_F1,   KC_F2,   KC_F3,   KC_F4
  ),

  /* Change default layout layer.
   * ,-------------------------------.
   * |       |       |       | RESET |
   * |-------|-------|-------|-------|
   * |       |       |       |       |
   * |-------|-------|-------|-------|
   * |       |       |       |       |
   * |-------|-------|-------|-------|
   * |       |       |       |       |
   * |-------|-------|-------|-------|
   * | DF(0) | DF(1) | DF(2) |       |
   * `-------------------------------'
   */

  [3] = LAYOUT_numpad_5x4(
    KC_TRNS, KC_NO,   KC_NO,   RESET,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    DF(0),   DF(1),   DF(2),   KC_NO
  ),
};
