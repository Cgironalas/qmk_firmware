#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* TKL functionality layer.
   * |------|---------|-------|
   * |      | Pscr/DF |       |
   * |------|---------|-------|
   * | Home | Up      | End   |
   * |------|---------|-------|
   * | Left | Down    | Right |
   * |------|---------|-------|
   */

  [0] = LAYOUT_3x3_macropad_rev2(
    KC_NO,   LT(4, KC_PSCR), KC_NO,
    KC_HOME, KC_UP,          KC_END,
    KC_LEFT, KC_DOWN,        KC_RGHT
  ),
  /* Media/Gaming layer.
   * |------|---------|------|
   * |      | Pscr/DF |      |
   * |------|---------|------|
   * | Prev | Play    | Next |
   * |------|---------|------|
   * | Mute | Vol-    | Vol+ |
   * |------|---------|------|
   */

  [1] = LAYOUT_3x3_macropad_rev2(
    KC_NO,   LT(4, KC_PSCR), KC_NO,
    KC_MPRV, KC_MPLY,        KC_MNXT,
    KC_MUTE, KC_VOLD,        KC_VOLU
  ),
  /* Weird Fs for easy keybinds.
   * |------|---------|------|
   * |      | F19/DF  |      |
   * |------|---------|------|
   * | F16  | F17     | F18  |
   * |------|---------|------|
   * | F13  | F14     | F15  |
   * |------|---------|------|
   */

  [2] = LAYOUT_3x3_macropad_rev2(
    KC_NO,   LT(4, KC_F19),  KC_NO,
    KC_F16,  KC_F17,         KC_F18,
    KC_F13,  KC_F14,         KC_F15
  ),
  /* Backlight.
   * |--------|---------|--------|
   * |        | Brt/DF  |        |
   * |--------|---------|--------|
   * | BL_ON  | BL_TOGG | BL_INC |
   * |--------|---------|--------|
   * | BL_OFF | BL_STEP | BL_DEC |
   * |--------|---------|--------|
   */

  [3] = LAYOUT_3x3_macropad_rev2(
    KC_NO,   LT(4, BL_TOGG), KC_NO,
    BL_ON,   BL_BRTG,        BL_INC,
    BL_OFF,  BL_STEP,        BL_DEC
  ),
  /* Layer for switching default layer.
   * |-------|-------|-------|
   * |       |       |       |
   * |-------|-------|-------|
   * | DF(3) |       | RESET |
   * |-------|-------|-------|
   * | DF(0) | DF(1) | DF(2) |
   * |-------|-------|-------|
   */

  [4] = LAYOUT_3x3_macropad_rev2(
    KC_NO,   KC_NO, KC_NO,
    DF(3),   KC_NO, RESET,
    DF(0),   DF(1), DF(2)
  ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {           /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) {    /* Second encoder */
        if (clockwise) {
            tap_code(KC_MS_WH_UP);
        } else {
            tap_code(KC_MS_WH_DOWN);
        }
    }
}
