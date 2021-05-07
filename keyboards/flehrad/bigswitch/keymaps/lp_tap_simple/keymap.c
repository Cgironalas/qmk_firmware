#include QMK_KEYBOARD_H

// Tap Dance Declarations
enum tap_dances {
  TAP_SIMPLE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    TD(TAP_SIMPLE)
  ),
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  // Tap once for 1, twice for 2
  [TAP_SIMPLE] = ACTION_TAP_DANCE_DOUBLE (KC_1, KC_2)
};
