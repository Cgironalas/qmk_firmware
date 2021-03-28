#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * |------|------|------|
   * |      | Pscr |      |
   * |------|------|------|
   * | Prev | Play | Next |
   * |------|------|------|
   * | Mute | Vol- | Vol+ |
   * |------|------|------|
   */

  [0] = LAYOUT_minipad(
    KC_NO,   KC_PSCR, KC_NO,
    KC_MPRV, KC_MPLY, KC_MNXT,
    KC_MUTE, KC_VOLD, KC_VOLU
  ),
};
