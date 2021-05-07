#include QMK_KEYBOARD_H

// Tap Dance Declarations
enum tap_dances {
  TAP_SIMPLE_MOVE1,
  TAP_SIMPLE_MOVE2,
  TAP_SIMPLE_MOVE3,
  TAP_SIMPLE_MOVE4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    TD(TAP_SIMPLE_MOVE1)
  ),
  [1] = LAYOUT(
    TD(TAP_SIMPLE_MOVE2)
  ),
  [2] = LAYOUT(
    TD(TAP_SIMPLE_MOVE3)
  ),
  [3] = LAYOUT(
    TD(TAP_SIMPLE_MOVE4)
  ),
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  // Tap once for 1, twice for 2
  [TAP_SIMPLE_MOVE1] = ACTION_TAP_DANCE_LAYER_MOVE (KC_1, 1),
  [TAP_SIMPLE_MOVE2] = ACTION_TAP_DANCE_LAYER_MOVE (KC_2, 2),
  [TAP_SIMPLE_MOVE3] = ACTION_TAP_DANCE_LAYER_MOVE (KC_3, 3),
  [TAP_SIMPLE_MOVE4] = ACTION_TAP_DANCE_LAYER_MOVE (KC_4, 0)
};
