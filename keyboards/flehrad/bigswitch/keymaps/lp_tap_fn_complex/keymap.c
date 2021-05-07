#include QMK_KEYBOARD_H

// Tap Dance Declarations
enum tap_dances {
  TAP_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    TD(TAP_FN)
  ),
};

/* Available commands that can be used inside SEND_STRING
 * SS_TAP(key)     - presses and releases a key
 * SS_DOWN(key)    - presses button, does not release
 * SS_UP(key)      - releases a key
 *
 * SS_DELAY(ms)    - adds a delay by a given int in the function milliseconds
 *
 * For the following command they are the equivalent of holding the modifier
 * while the string is input:
 * SS_RGUI(string) - hold right OS key while input of string
 * SS_LCTL(string) or SS_RCTL(string) - hold CTRL while input of string
 * SS_LSFT(string) or SS_RSFT(string) - hold Shift while input of string
 * SS_LALT(string) or SS_LOPT(string) - hold left alt while input of string
 * SS_LGUI(string), SS_LCMD(string) or SS_LWIN(string) - hold left OS key while input of string
 * SS_RALT(string), SS_ROPT(string) or SS_ALGR(string) - hold right alt while input of string
 */

void dance_example(qk_tap_dance_state_t *state, void *user_data) {
    switch(state->count) {
        case 1:
            SEND_STRING("Normal String");
            break;
        case 2:
            SEND_STRING(SS_LCTL("ac"));
            break;
        case 3:
            tap_code16(LCTL(KC_TAB));
            break;
        default:
            tap_code(KC_A);
        reset_tap_dance(state);
    }
}

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TAP_FN] = ACTION_TAP_DANCE_FN(dance_example),
};
