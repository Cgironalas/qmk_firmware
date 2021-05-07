#include QMK_KEYBOARD_H

// Tap Dance Declarations
enum tap_dances {
  TAP_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Set layer to run tap function
  [0] = LAYOUT(
    TD(TAP_FN)
  ),
};

void dance_example(qk_tap_dance_state_t *state, void *user_data) {
    // When tapped once input a "1"
    if (state->count == 1) {
        tap_code(KC_1);
        reset_tap_dance(state);
    } else {
        // When tapped twice input a "2"
        if (state->count == 2) {
            SEND_STRING("2");
            reset_tap_dance(state);
        // In any other case input the string "This can be text!"
        } else {
            SEND_STRING("This can be text!");
            reset_tap_dance(state);
        }
    }
}

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TAP_FN] = ACTION_TAP_DANCE_FN(dance_example),
};
