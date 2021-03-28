#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* TKL functionality layer.
   * |---------|-------|-------|
   * | Home/DF | Del   | PgUp  |
   * |---------|-------|-------|
   * | End     | Up    | PgDn  |
   * |---------|-------|-------|
   * | Left    | Down  | Right |
   * |---------|-------|-------|
   */

  [0] = LAYOUT_minipad(
    LT(5, KC_HOME), KC_DEL,  KC_PGUP,
    KC_END,         KC_UP,   KC_PGDN,
    KC_LEFT,        KC_DOWN, KC_RGHT
  ),
  /* Media/Gaming layer.
   * |---------|------|------|
   * | Pscr/DF | dGUI | eGUI |
   * |---------|------|------|
   * | Prev    | Play | Next |
   * |---------|------|------|
   * | Mute    | Vol- | Vol+ |
   * |---------|------|------|
   */

  [1] = LAYOUT_minipad(
    LT(5, KC_PSCR), GUI_OFF, GUI_ON,
    KC_MPRV,        KC_MPLY, KC_MNXT,
    KC_MUTE,        KC_VOLD, KC_VOLU
  ),
  /* Weird Fs for easy keybinds.
   * |--------|-----|-----|
   * | F19/DF | F20 | F21 |
   * |--------|-----|-----|
   * | F16    | F17 | F18 |
   * |--------|-----|-----|
   * | F13    | F14 | F15 |
   * |--------|-----|-----|
   */

  [2] = LAYOUT_minipad(
    LT(5, KC_F19),  KC_F20,  KC_F21,
    KC_F16,         KC_F17,  KC_F18,
    KC_F13,         KC_F14,  KC_F15
  ),
  /* Tap based numpad 1/2.
   * |------|----|----|
   * | 7/DF | 8  | 9  |
   * |------|----|----|
   * | 4    | 5  | 6  |
   * |------|----|----|
   * | 1/FN | 2  | 3  |
   * |------|----|----|
   */

  [3] = LAYOUT_minipad(
    LT(5, KC_7), KC_8,    KC_9,
    KC_4,        KC_5,    KC_6,
    LT(4, KC_1), KC_2,    KC_3
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

  [4] = LAYOUT_minipad(
    KC_PSLS, KC_PAST, KC_BSPC,
    KC_PMNS, KC_PPLS, KC_ENT,
    KC_NO,   KC_0,    KC_DOT
  ),
  /* Layer for switching default layer.
   * |-------|-------|-------|
   * |       |       | Reset |
   * |-------|-------|-------|
   * | DF(3) |       |       |
   * |-------|-------|-------|
   * | DF(0) | DF(1) | DF(2) |
   * |-------|-------|-------|
   */

  [5] = LAYOUT_minipad(
    KC_NO, KC_NO, RESET,
    DF(3), KC_NO, KC_NO,
    DF(0), DF(1), DF(2)
  ),
};
