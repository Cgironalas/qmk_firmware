#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Tap based numpad 1/2.
   * |------|----|----|
   * | 7    | 8  | 9  |
   * |------|----|----|
   * | 4    | 5  | 6  |
   * |------|----|----|
   * | 1/FN | 2  | 3  |
   * |------|----|----|
   */

  [0] = LAYOUT_3x3_macropad(
    KC_7,        KC_8,  KC_9,
    KC_4,        KC_5,  KC_6,
    LT(1, KC_1), KC_2,  KC_3
  ),
  /* Numpad 2/2.
   * |-----|-----|------|
   * |  /  |  *  | Bspc |
   * |-----|-----|------|
   * |  -  |  +  | En   |
   * |-----|-----|------|
   * |     |  0  |   .  |
   * |-----|-----|------|
   */

  [1] = LAYOUT_3x3_macropad(
    KC_PSLS, KC_PAST, KC_BSPC,
    KC_PMNS, KC_PPLS, KC_ENT,
    KC_NO,   KC_0,    KC_DOT
  ),
};
