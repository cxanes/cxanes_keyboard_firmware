/* Copyright 2020 Play Keyboard
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include QMK_KEYBOARD_H

enum _layer {
    _BL,
    _FL,
    _AL,
    _ML
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // 0: Base Layer
    [_BL] = LAYOUT_tkl_ansi(
        KC_ESC,                         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,                KC_F12,    KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GESC,               KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,                F(2),      KC_INS,  KC_HOME, KC_PGUP,
        MT(MOD_LCTL, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, MT(MOD_RALT, KC_RBRC), KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN,
        F(0),                  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                        KC_ENT,
        KC_LSFT,                        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                        KC_RSFT,             KC_UP,
        MO(_ML),               KC_LCTL, KC_LALT,                            KC_SPC,                             F(0),    KC_RCTL, KC_RALT,               KC_RGUI,   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // 1: Function Layer
    [_FL] = LAYOUT_tkl_ansi(
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_CAPS, KC_PGUP, KC_UP,   KC_PGDN, KC_TRNS, KC_TRNS,      KC_TRNS, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUSE,KC_INS,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_HOME, KC_INS,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC, KC_DEL,           KC_TRNS,
        KC_TRNS,          KC_APP,  KC_TRNS, KC_END,  LSFT(KC_INS), KC_TRNS, KC_END,  KC_HOME, KC_PGUP, KC_PGDN, KC_END,           KC_PGUP,            KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                                 KC_TRNS,                            KC_TRNS, KC_HOME, KC_PGDN, KC_END,    KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // 2: Arrow Layer
    [_AL] = LAYOUT_tkl_ansi(
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_UP,              KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // 3: Mouse & RGB Layer
    [_ML] = LAYOUT_tkl_ansi(
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, RESET,
        KC_TRNS, BL_TOGG, BL_STEP, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, KC_TRNS,          F(1),
        KC_TRNS,          KC_TRNS, KC_BTN3, KC_WH_D, KC_TRNS, KC_TRNS, KC_WH_D, KC_BTN3, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,            KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

};

enum function_id {
    ACTION_FN,
    ARROW_LAYER_TOGGLE,
    CTRL_ALT_DEL,
};

// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_FUNCTION(ACTION_FN),
    [1] = ACTION_FUNCTION(ARROW_LAYER_TOGGLE),
    [2] = ACTION_FUNCTION(CTRL_ALT_DEL),
};

// Macros
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) { register_code(KC_RSFT); }
      else { unregister_code(KC_RSFT); }
      break;
  }

  return MACRO_NONE;
};

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_ALT_MASK  (MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT))
#define AL_MASK (1UL << _AL)

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t ctrl_alt_del_ctrl_alt_mask;
  switch (id) {
   case ACTION_FN:
      if ((layer_state ^ AL_MASK) & AL_MASK) {
          layer_on(_AL);
      } else {
          layer_off(_AL);
      }

      if (record->event.pressed) {
          layer_on(_FL);
      } else {
          layer_off(_FL);
      }
      break;

   case ARROW_LAYER_TOGGLE:
      if (record->event.pressed) {
          if (layer_state & AL_MASK)
              layer_off(_AL);
          else
              layer_on(_AL);
      }
      break;

    case CTRL_ALT_DEL:
      ctrl_alt_del_ctrl_alt_mask = get_mods()&MODS_CTRL_ALT_MASK;
      if (record->event.pressed) {
        if (ctrl_alt_del_ctrl_alt_mask == MODS_CTRL_ALT_MASK) {
          add_key(KC_DEL);
          send_keyboard_report();
        } else {
          add_key(KC_BSPACE);
          send_keyboard_report();
        }
      } else {
        if (ctrl_alt_del_ctrl_alt_mask == MODS_CTRL_ALT_MASK) {
          del_key(KC_DEL);
          send_keyboard_report();
        } else {
          del_key(KC_BSPACE);
          send_keyboard_report();
        }
      }
      break;
  }
}
