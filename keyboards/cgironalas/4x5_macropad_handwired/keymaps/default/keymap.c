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
   * | 1     | 2  | 3  | En/FN |
   * |-------|----|----|-------|
   * | 0     | 0  | .  | En/FN |
   * `-------------------------'
   */

  [0] = LAYOUT(
    LT(4, KC_NLCK), KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,          KC_P8,   KC_P9,   KC_PPLS,
    KC_P4,          KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,          KC_2,   KC_P3,   LT(1, KC_PENT),
    KC_P0,          KC_P0,   KC_PDOT, LT(1, KC_PENT)
  ),

  /* Enter layer is TKL.
   * ,-----------------------------.
   * | Prev  | Play | Next  | Pscr |
   * |-------|------|-------|------|
   * | Home  | Del  | PgUp  | eGUI |
   * |-------|------|-------|------|
   * | End   | Up   | PgDn  | dGUI |
   * |-------|------|-------|------|
   * | Left  | Down | Right | Bspc |
   * |-------|------|-------|------|
   * | Mute  | Vol- | Vol+  |      |
   * `-----------------------------'
   */

  [1] = LAYOUT(
    KC_MPRV, KC_MPLY, KC_MNXT, KC_PSCR,
    KC_HOME, KC_DEL,  KC_PGUP, GUI_ON,
    KC_END,  KC_UP,   KC_PGDN, GUI_OFF,
    KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,
    KC_MUTE, KC_VOLD, KC_VOLU, KC_NO
  ),

  /* NumLock layer is Fs.
   * ,---------------------------.
   * |       |     |     |       |
   * |-------|-----|-----|-------|
   * | F10   | F11 | F12 |       |
   * |-------|-----|-----|-------|
   * | F7    | F8  | F9  |       |
   * |-------|-----|-----|-------|
   * | F4    | F5  | F6  |       |
   * |-------|-----|-----|-------|
   * | F1    | F2  | F3  |       |
   * `---------------------------'
   */

  [2] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_F10,  KC_F11,  KC_F12,  KC_NO,
    KC_F7,   KC_F8,   KC_F9,   KC_NO,
    KC_F4,   KC_F5,   KC_F6,   KC_NO,
    KC_F1,   KC_F2,   KC_F3,   KC_NO
  ),

  /* Change default layout layer.
   * ,-------------------------.
   * |       |    |    |       |
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

  [4] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   RESET,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    DF(3),   KC_NO,   KC_NO,   KC_NO,
    DF(0),   DF(1),   DF(2),   KC_NO
  ),
};
