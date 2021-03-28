#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * |------|------|------|
   * |      | Prsc |      |
   * |------|------|------|
   * | Home | Up   | End  |
   * |------|------|------|
   * | Left | Down | Rght |
   * |------|------|------|
   */

  [0] = LAYOUT_minipad(
    KC_NO,   KC_PSCR, KC_NO,
    KC_HOME, KC_UP,   KC_END,
    KC_LEFT, KC_DOWN, KC_RGHT
  ),
};
