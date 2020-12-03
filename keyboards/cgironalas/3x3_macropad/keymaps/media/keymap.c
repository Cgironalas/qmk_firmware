#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * |------|------|------|
   * | Pscr | dGUI | eGUI |
   * |------|------|------|
   * | Prev | Play | Next |
   * |------|------|------|
   * | Mute | Vol- | Vol+ |
   * |------|------|------|
   */

  [0] = LAYOUT_3x3_macropad(
    KC_PSCR, GUI_OFF, GUI_ON,
    KC_MPRV, KC_MPLY, KC_MNXT,
    KC_MUTE, KC_VOLD, KC_VOLU
  ),
};
