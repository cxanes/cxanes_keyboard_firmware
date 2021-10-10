#include "keymap_common.h"
#include "rgb_led.h"

#define KC_NO_8 \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO

#if 0
#define KEYMAP_XD84( \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, K0O, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N, K2O, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L,      K3N, K3O, \
    K4A,      K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O, \
    K5A, K5B, K5C,           K5F, K5G,      K5I,      K5K, K5L, K5M, K5N, K5O  \
) { \
    KC_NO_8, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N, KC_##K0O, KC_NO, \
    KC_NO_8, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O, KC_NO, \
    KC_NO_8, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_##K2O, KC_NO, \
    KC_NO_8, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_NO,    KC_##K3N, KC_##K3O, KC_NO, \
    KC_NO_8, KC_##K4A, KC_NO,    KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_##K4O, KC_NO, \
    KC_NO_8, KC_##K5A, KC_##K5B, KC_##K5C, KC_NO,    KC_NO,    KC_##K5F, KC_##K5G, KC_NO,    KC_##K5I, KC_NO,    KC_##K5K, KC_##K5L, KC_##K5M, KC_##K5N, KC_##K5O, KC_NO  \
}
#else
#define KEYMAP_XD84( \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, K0O, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N, K2O, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L,      K3N, K3O, \
    K4A,      K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O, \
    K5A, K5B, K5C,           K5F, K5G,      K5I,      K5K,      K5M, K5N, K5O  \
) { \
    KC_NO_8, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N, KC_##K0O, KC_NO, \
    KC_NO_8, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O, KC_NO, \
    KC_NO_8, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_##K2O, KC_NO, \
    KC_NO_8, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_NO,    KC_##K3N, KC_##K3O, KC_NO, \
    KC_NO_8, KC_##K4A, KC_NO,    KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_##K4O, KC_NO, \
    KC_NO_8, KC_##K5A, KC_##K5B, KC_##K5C, KC_NO,    KC_NO,    KC_##K5F, KC_##K5G, KC_NO,    KC_##K5I, KC_NO,    KC_##K5K, KC_NO   , KC_##K5M, KC_##K5N, KC_##K5O, KC_NO  \
}
#endif

#ifdef KEYMAP_SECTION_ENABLE

 const uint8_t keymaps[KEYMAPS_COUNT][MATRIX_SIZE] __attribute__ ((section (".keymap.keymaps"))) = {/media/data/frank/keyboard/keyboards/qmk_firmware/B
#else
const uint8_t keymaps[][MATRIX_SIZE] PROGMEM = {
#endif
    [0] = KEYMAP_XD84(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,HOME, \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,FN5, BSLS,PGDN, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT, END,  \
        FN0,      Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN1, UP,  RGUI, \
        LGUI,LCTL,FN2,           SPC, DEL,      RALT,     FN2,      LEFT,DOWN,RGHT),
    [1] = KEYMAP_XD84(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TAB, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,TRNS,     TRNS,     TRNS,     TRNS,TRNS,TRNS),
    [2] = KEYMAP_XD84(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTLD, \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, TRNS, \
        TRNS,TRNS,TRNS,END, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  PGUP,PGDN,TRNS,TRNS, \
        TRNS,TRNS,PSCR,DEL, TRNS,TRNS,HOME,TRNS,TRNS,LEFT,DOWN,RGHT,     TRNS,TRNS, \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,TRNS,     TRNS,     TRNS,     HOME,PGDN,END),
};

#ifndef NO_ACTION_FUNCTION
enum function_id {
    AF_RGB_LED = 0
};

enum rgb_led_id {
    AF_RGB_LED_TOGGLE = 0,
    AF_RGB_LED_DECREASE,
    AF_RGB_LED_INCREASE,
    AF_RGB_LED_STEP,
    AF_RGB_LED_DECREASE_BRIGHTNESS,
    AF_RGB_LED_INCREASE_BRIGHTNESS
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
#ifdef RGB_LED_ENABLE
#define RGB_LED_BRIGHTNESS_STEP ((RGB_LED_BRIGHTNESS_MAX - RGB_LED_BRIGHTNESS_MIN) / 8)
    if (record->event.pressed) {
        switch (id) {
            case AF_RGB_LED:
                switch (opt) {
                    case AF_RGB_LED_TOGGLE:
                        rgb_led_toggle();
                        break;
                    case AF_RGB_LED_DECREASE:
                        rgb_led_decrease();
                        break;
                    case AF_RGB_LED_INCREASE:
                        rgb_led_increase();
                        break;
                    case AF_RGB_LED_STEP:
                        rgb_led_step();
                        break;
                    case AF_RGB_LED_DECREASE_BRIGHTNESS:
                        rgb_led_decrease_brightness(RGB_LED_BRIGHTNESS_STEP, true);
                        break;
                    case AF_RGB_LED_INCREASE_BRIGHTNESS:
                        rgb_led_increase_brightness(RGB_LED_BRIGHTNESS_STEP, true);
                        break;
                }
                break;
        }
    }
#endif
}
#endif

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[FN_ACTIONS_COUNT] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MODS(1, MOD_LSFT),
    [1] = ACTION_LAYER_MODS(1, MOD_RSFT),
    [2] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_MODS_KEY(MOD_LSFT, KC_INSERT),
    [4] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_TAB),
    [5] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRACKET),
    [6] = ACTION_LAYER_MOMENTARY(3),
#ifndef NO_ACTION_FUNCTION
    [7] = ACTION_FUNCTION_OPT(AF_RGB_LED, AF_RGB_LED_TOGGLE),
    [8] = ACTION_FUNCTION_OPT(AF_RGB_LED, AF_RGB_LED_DECREASE),
    [9] = ACTION_FUNCTION_OPT(AF_RGB_LED, AF_RGB_LED_INCREASE),
    [10] = ACTION_FUNCTION_OPT(AF_RGB_LED, AF_RGB_LED_STEP),
    [11] = ACTION_FUNCTION_OPT(AF_RGB_LED, AF_RGB_LED_INCREASE_BRIGHTNESS),
    [12] = ACTION_FUNCTION_OPT(AF_RGB_LED, AF_RGB_LED_DECREASE_BRIGHTNESS),
#else
    [7] = ACTION_NO,
    [8] = ACTION_NO,
    [9] = ACTION_NO,
    [10] = ACTION_NO,
    [11] = ACTION_NO,
    [12] = ACTION_NO,
#endif
};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_SIZE;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
