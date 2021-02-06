#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY. */

  [0] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_2,    KC_4,    KC_6,    KC_8,    KC_GRV,  KC_BSLS,
    KC_HOME,  KC_1,    KC_3,    KC_5,    KC_7,    KC_9,    KC_0,    KC_EQL,
    KC_END,   KC_TAB,  KC_W,    KC_R,    KC_Y,    KC_I,    KC_P,    KC_MINS,
    KC_LCTL,  KC_Q,    KC_E,    KC_T,    KC_U,    KC_O,    KC_LBRC, KC_RBRC,
    KC_LGUI,  KC_RCTL, KC_S,    KC_F,    KC_H,    KC_K,    KC_SCLN, KC_BSPC,
    KC_LALT,  KC_A,    KC_D,    KC_G,    KC_J,    KC_L,    KC_QUOT, KC_ENT,
    KC_SPC,   KC_LSFT, KC_X,    KC_V,    KC_B,    KC_M,    KC_DOT,  KC_RSFT,
    MO(2),    KC_Z,    KC_C,    KC_B,    KC_N,    KC_COMM, KC_SLSH, MO(2),
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),
  /* DVORAK. */

  [1] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_2,    KC_4,    KC_6,    KC_8,    KC_GRV,  KC_BSLS,
    KC_HOME,  KC_1,    KC_3,    KC_5,    KC_7,    KC_9,    KC_0,    KC_EQL,
    KC_END,   KC_TAB,  KC_W,    KC_R,    KC_Y,    KC_I,    KC_P,    KC_MINS,
    KC_LCTL,  KC_Q,    KC_E,    KC_T,    KC_U,    KC_O,    KC_LBRC, KC_RBRC,
    KC_LGUI,  KC_RCTL, KC_S,    KC_F,    KC_H,    KC_K,    KC_SCLN, KC_BSPC,
    KC_LALT,  KC_A,    KC_D,    KC_G,    KC_J,    KC_L,    KC_QUOT, KC_ENT,
    KC_SPC,   KC_LSFT, KC_X,    KC_V,    KC_B,    KC_M,    KC_DOT,  KC_RSFT,
    MO(2),    KC_Z,    KC_C,    KC_B,    KC_N,    KC_COMM, KC_SLSH, MO(2),
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),
  /* FN. */

  [2] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_2,    KC_4,    KC_6,    KC_8,    KC_GRV,  KC_BSLS,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_PGDN,  KC_TAB,  KC_W,    KC_R,    KC_Y,    KC_I,    KC_P,    KC_MINS,
    KC_LCTL,  KC_Q,    KC_E,    KC_T,    KC_U,    KC_O,    KC_LBRC, KC_RBRC,
    KC_LGUI,  KC_RCTL, KC_S,    KC_F,    KC_LEFT, KC_UP,   KC_SCLN, KC_BSPC,
    KC_LALT,  KC_A,    KC_D,    KC_G,    KC_DOWN, KC_RGHT, KC_QUOT, KC_ENT,
    KC_SPC,   KC_LSFT, KC_X,    KC_V,    KC_B,    KC_M,    KC_DOT,  KC_RSFT,
    MO(3),    KC_Z,    KC_C,    KC_B,    KC_N,    KC_COMM, KC_SLSH, MO(3),
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),
  /* LAYERS / RESET. */

  [3] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   DF(1),   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   DF(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
};
