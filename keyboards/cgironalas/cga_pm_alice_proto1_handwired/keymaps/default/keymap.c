#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* QWERTY. */
  [0] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_2,    KC_4,    KC_6,    KC_8,    KC_GRV,  KC_BSLS,
    KC_HOME,  KC_1,    KC_3,    KC_5,    KC_7,    KC_9,    KC_0,    KC_EQL,
    KC_END,   KC_TAB,  KC_W,    KC_R,    KC_Y,    KC_I,    KC_P,    KC_MINS,
    MO(2),    KC_Q,    KC_E,    KC_T,    KC_U,    KC_O,    KC_LBRC, KC_RBRC,
    KC_LGUI,  KC_RCTL, KC_S,    KC_F,    KC_H,    KC_K,    KC_SCLN, KC_BSPC,
    KC_LALT,  KC_A,    KC_D,    KC_G,    KC_J,    KC_L,    KC_QUOT, KC_ENT,
    KC_BSPC,  KC_LSFT, KC_X,    KC_V,    KC_B,    KC_M,    KC_DOT,  KC_RSFT,
    KC_DEL,   KC_Z,    KC_C,    KC_B,    KC_N,    KC_COMM, KC_SLSH, MO(3),
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),

  /* DVORAK. */
  [1] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_2,    KC_4,    KC_6,    KC_8,    KC_GRV,  KC_BSLS,
    KC_HOME,  KC_1,    KC_3,    KC_5,    KC_7,    KC_9,    KC_0,    KC_RBRC,
    KC_END,   KC_TAB,  KC_COMM, KC_P,    KC_F,    KC_C,    KC_L,    KC_LBRC,
    MO(2),    KC_QUOT, KC_DOT,  KC_Y,    KC_G,    KC_R,    KC_SLSH, KC_EQL,
    KC_LGUI,  KC_RCTL, KC_O,    KC_U,    KC_D,    KC_T,    KC_S,    KC_BSPC,
    KC_LALT,  KC_A,    KC_E,    KC_I,    KC_H,    KC_N,    KC_MINS, KC_ENT,
    KC_BSPC,  KC_LSFT, KC_Q,    KC_K,    KC_X,    KC_M,    KC_V,    KC_RSFT,
    KC_DEL,   KC_SCLN, KC_J,    KC_X,    KC_B,    KC_W,    KC_Z,    MO(3),
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),

  /* FN 1. */
  [2] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_F2,   KC_F4,   KC_F6,   KC_F8,   KC_NO,   KC_NO,
    KC_PGUP,  KC_F1,   KC_F3,   KC_F5,   KC_F7,   KC_F9,   KC_F10,  KC_F12,
    KC_PGDN,  KC_TAB,  KC_VOLD, KC_NO,   KC_HOME, KC_NO,   KC_BTN1, KC_F11,
    KC_TRNS,  KC_MUTE, KC_VOLU, KC_NO,   KC_PGUP, KC_NO,   KC_MS_U, KC_BTN2,
    KC_LGUI,  KC_LCTL, KC_MPLY, KC_NO,   KC_LEFT, KC_UP,   KC_MS_L, KC_DEL,
    KC_LALT,  KC_MPRV, KC_MNXT, KC_NO,   KC_DOWN, KC_RGHT, KC_MS_D, KC_MS_R,
    KC_BSPC,  KC_LSFT, KC_NO,   KC_NO,   KC_END,  KC_NO,   KC_NO,   KC_WH_D,
    KC_DEL,   KC_NO,   KC_NO,   KC_NO,   KC_PGDN, KC_NO,   KC_WH_U, MO(4),
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),

  /* FN 2. */
  [3] = LAYOUT_cga_pm_alice_proto1_handwired(
    KC_PSCR,  KC_ESC,  KC_F2,   KC_F4,   KC_F6,   KC_F8,   KC_NO,   KC_NO,
    KC_PGUP,  KC_F1,   KC_F3,   KC_F5,   KC_F7,   KC_F9,   KC_F10,  KC_F12,
    KC_PGDN,  KC_TAB,  KC_MUTE, KC_VOLU, KC_NO,   KC_NO,   KC_HOME, KC_F11,
    MO(4),    KC_NO,   KC_VOLD, KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_PGUP,
    KC_LGUI,  KC_LCTL, KC_MPRV, KC_MNXT, KC_NO,   KC_NO,   KC_LEFT, KC_DEL,
    KC_LALT,  KC_NO,   KC_MPLY, KC_NO,   KC_NO,   KC_NO,   KC_DOWN, KC_RGHT,
    KC_BSPC,  KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGDN,
    KC_DEL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_END,  KC_TRNS,
    KC_SPC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,   KC_LCTL
  ),

  /* LAYERS / RESET. */
  [4] = LAYOUT_cga_pm_alice_proto1_handwired(
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
