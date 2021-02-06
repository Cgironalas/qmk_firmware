#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * |------|------|------|
   * | Prev | Play | Next |
   * |------|------|------|
   * | Mute | Vol- | Vol+ |
   * |------|------|------|
   * | Pscr | dGUI | eGUI |
   * |------|------|------|
   */

  [0] = LAYOUT_3x3_macropad(
    KC_MPRV, KC_MPLY, KC_MNXT,
    KC_MUTE, KC_VOLD, KC_VOLU,
    KC_PSCR, GUI_OFF, GUI_ON
  ),
};
