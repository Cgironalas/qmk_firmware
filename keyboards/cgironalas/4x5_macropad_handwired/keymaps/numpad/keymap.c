#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Default layer is numpad.
   * ,-------------------------.
   * | NL/DF | /  | *  | -     |
   * |-------|----|----|-------|
   * | 7     | 8  | 9  | +     |
   * |-------|----|----|-------|
   * | 4     | 5  | 6  | +     |
   * |-------|----|----|-------|
   * | 1     | 2  | 3  | En    |
   * |-------|----|----|-------|
   * | 0     | 0  | .  | En    |
   * `-------------------------'
   */

  [0] = LAYOUT_4x5_macropad_handwired(
    LT(1, KC_NLCK), KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,          KC_P8,   KC_P9,   KC_PPLS,
    KC_P4,          KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,          KC_P2,   KC_P3,   KC_PENT,
    KC_P0,          KC_P0,   KC_PDOT, KC_PENT
  ),


  /* Change default layout layer.
   * ,-------------------------.
   * |       |    |    | Reset |
   * |-------|----|----|-------|
   * |       |    |    |       |
   * |-------|----|----|-------|
   * |       |    |    |       |
   * |-------|----|----|-------|
   * |       |    |    |       |
   * |-------|----|----|-------|
   * |       |    |    |       |
   * `-------------------------'
   */

  [1] = LAYOUT_4x5_macropad_handwired(
    KC_NO,   KC_NO,   KC_NO,   RESET,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
};
