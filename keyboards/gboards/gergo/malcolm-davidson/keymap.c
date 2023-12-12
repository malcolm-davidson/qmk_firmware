/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H

#define BASE 0 // default layer

enum customKeycodes {
	URL  = 1
};

enum {
  TD_Q_TAB = 0,
  TD_A_ESC = 1,
  TD_SCLN_ENT = 2,
  TD_W_2 = 3,
  TD_E_3 = 4,
  TD_R_4 = 5,
  TD_T_5 = 6,
  TD_Y_6 = 7,
  TD_U_7 = 8,
  TD_I_8 = 9,
  TD_O_9 = 10,
  TD_P_0 = 11,
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_Q_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_TAB),
  [TD_A_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_ESC),
  [TD_SCLN_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_ENT),
  [TD_W_2] = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_2),
  [TD_E_3] = ACTION_TAP_DANCE_DOUBLE(KC_E, KC_3),
  [TD_R_4] = ACTION_TAP_DANCE_DOUBLE(KC_R, KC_4),
  [TD_T_5] = ACTION_TAP_DANCE_DOUBLE(KC_T, KC_5),
  [TD_Y_6] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_6),
  [TD_U_7] = ACTION_TAP_DANCE_DOUBLE(KC_U, KC_7),
  [TD_I_8] = ACTION_TAP_DANCE_DOUBLE(KC_I, KC_8),
  [TD_O_9] = ACTION_TAP_DANCE_DOUBLE(KC_O, KC_9),
  [TD_P_0] = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_0),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-------------------------------------------.                         ,-------------------------------------------.
 * | L1/ESC |   Q  |   W  |   E  |   R  |   T  |                         |   Y  |   U  |   I  |   O  |   P  |  | \   |
 * |--------+------+------+------+------+------|------.           .------|------+------+------+------+------+--------|
 * |Ctrl/BS |   A  |   S  |  D   |   F  |   G  | RMB  |           |      |   H  |   J  |   K  |   L  | ;  : |  ' "   |
 * |--------+------+------+------+------+------|------|           |------|------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  | LMB  |           |      |   N  |   M  | ,  < | . >  | /  ? |  - _   |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *                    .----------.   .-------.                                 .------.   .-----.
 *                    | Super/Del|   |Ent/ALT|                                 | Tab  |   |BKSP |
 *                    '----------'   '-------'                                 `------.   '-----'
 *                                        ,-------.                      ,-------.
 *                                        | MMB   |                      | PgDn  |
 *                                 ,------|-------|                      |-------|------.
 *                                 | SYMB | NUMB  |                      | SYMB  | NUMB |
 *                                 | Space| Escape|                      | Mod   |Space |
 *                                 |      |       |                      |       |      |
 *                                 `--------------'                      `--------------'
 */

[BASE] = LAYOUT(
    KC_NO,  TD(TD_Q_TAB), TD(TD_W_2), TD(TD_E_3), TD(TD_R_4), TD(TD_T_5),                        TD(TD_Y_6), TD(TD_U_7), TD(TD_I_8), TD(TD_O_9), TD(TD_P_0), KC_NO,
    KC_NO,  TD(TD_A_ESC), KC_S, KC_D, KC_F, KC_G, KC_NO,                                         KC_NO, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), TD(TD_SCLN_ENT), KC_NO, 
    KC_NO, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_NO, LGUI(KC_SPC),                            KC_CAPS, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH), KC_NO, 
    KC_NO, KC_BSPC, KC_NO, KC_NO,                                                                KC_NO, KC_NO, KC_SPC, KC_NO
    ),
};