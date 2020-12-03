#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * |-----|-----|-----|
   * | F19 | F20 | F21 |
   * |-----|-----|-----|
   * | F16 | F17 | F18 |
   * |-----|-----|-----|
   * | F13 | F14 | F15 |
   * |-----|-----|-----|
   */

  [0] = LAYOUT_3x3_macropad(
    KC_F19,  KC_F20,  KC_F21,
    KC_F16,  KC_F17,  KC_F18,
    KC_F13,  KC_F14,  KC_F15
  ),
};
