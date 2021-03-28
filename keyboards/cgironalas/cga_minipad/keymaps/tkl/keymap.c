#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * |------|------|------|
   * | Home | Del  | PgUp |
   * |------|------|------|
   * | End  | Up   | PgDn |
   * |------|------|------|
   * | Left | Down | Rght |
   * |------|------|------|
   */

  [0] = LAYOUT_minipad(
    KC_HOME, KC_DEL,  KC_PGUP,
    KC_END,  KC_UP,   KC_PGDN,
    KC_LEFT, KC_DOWN, KC_RGHT
  ),
};
