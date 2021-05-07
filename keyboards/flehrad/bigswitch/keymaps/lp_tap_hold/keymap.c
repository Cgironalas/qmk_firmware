#include QMK_KEYBOARD_H

enum {
  TD_KEY = 0
};

// Determine the current state, if counts of tap or hold
void dance_finished(qk_tap_dance_state_t *state, void* user_data) {
  switch (state->count) {
    case 1:
      if (state->interrupted || state->pressed == 0) {
        SEND_STRING("Single tap");
      } else {
        SEND_STRING("Single Hold");
      }
      break;

    case 2:
      SEND_STRING("Double tap");
      break;

    case 3:
      SEND_STRING("Triple tap");
      break;

    default:
      SEND_STRING("Quad tap");
      break;
  }
}

void dance_reset(qk_tap_dance_state_t *state, void* user_data) {
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_KEY] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_finished, dance_reset)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(TD(TD_KEY))
};
