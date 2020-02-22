/*
 * Cxanes layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Bsp|Bsp|
     * |-----------------------------------------------------------|
     * |Fn4  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|Fn5|    \|
     * |-----------------------------------------------------------|
     * |Fn2   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Fn0     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn1   |Gui|
     * `-----------------------------------------------------------'
     *       |Ctl|Alt  |         Space         |Fn2  |Ctl|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, FN9, FN9, \
           FN4, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,FN5, BSLS, \
           FN2, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT, \
           FN0, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,SLSH, FN1, RGUI, \
                LCTL,LALT,          SPC,                FN2, RCTL),

    /* Layer 1: Fn'd
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del|Del|
     * |-----------------------------------------------------------|
     * |Caps |PgU|Up |Pgd|   |   |Cal|PgU|Hom|PgD|PrS|ScL|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|Hom|Ins|Lef|Dow|Up |Rig|Bsp|Del|        |
     * |-----------------------------------------------------------|
     * |        |App|   |End|Fn3|   |End|Hom|PgU|PgD|End|      |Fn8|
     * `-----------------------------------------------------------'
     *       |   |Fn7  |                       |     |   |
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, DEL, \
           CAPS,PGUP,UP,  PGDN,TRNS,TRNS,CALC,PGUP,HOME,PGDN,PSCR,SLCK,PAUS,INS,  \
           TRNS,LEFT,DOWN,RGHT,HOME,INS, LEFT,DOWN,UP,  RGHT,BSPC,DEL, TRNS, \
           TRNS,APP, TRNS,END, FN3, TRNS,END, HOME,PGUP,PGDN,END, TRNS,FN8,  \
                TRNS,FN7,           TRNS,               TRNS,TRNS),

    /* Layer 2: HHKB mode[HHKB Fn]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |Fn8  |   |
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           LCTL,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
                TRNS,TRNS,          TRNS,               FN8, TRNS),

    /* Layer 3: Array layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |Mb1|McU|Mb2|   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|McL|McD|McR|MwU|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |Mb3|MwD|   |   |  +|  -|End|PgD|Dow|Shift |Gui|
     * `-----------------------------------------------------------'
     *       |   |     |                       |Fn8  |   |
     *       `-------------------------------------------'
     */
    [3] = \
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           NO,  BTN1,MS_U,BTN2,NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           LCTL,MS_L,MS_D,MS_R,WH_U,NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           LSFT,NO,  BTN3,WH_D,NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT,RGUI, \
                TRNS,TRNS,          TRNS,               FN8, RCTL),

    /* Layer 4: Shift + ESC = Tilde
     *    [ref] https://github.com/tmk/tmk_keyboard/wiki/FAQ-Keymap#esc-and--on-a-key
     * ,-----------------------------------------------------------.
     * |~  |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |   |   |   |   |   |   |  ]|     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *      |    |     |                       |     |   |
     *      `--------------------------------------------'
     */
    [4] = \
    KEYMAP(GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TAB, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 5: Mouse layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |Mb1|McU|Mb2|   |   |   |Mb1|MwU|Mb2|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |McL|McD|McR|MwU|   |McL|McD|McU|McR|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |Mb3|MwD|   |   |MwD|Mb3|   |   |   |      |   |
     * `-----------------------------------------------------------'
     *      |    |     |                       |     |   |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [5] = \
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,BTN1,MS_U,BTN2,TRNS,NO,  NO,  BTN1,WH_U,BTN2,NO,  NO,  NO,  TRNS, \
           TRNS,MS_L,MS_D,MS_R,WH_U,NO,  MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,TRNS, \
           TRNS,NO,  BTN3,WH_D,NO,  NO,  WH_D,BTN3,TRNS,TRNS,TRNS,TRNS,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

};

/*
 * user defined action function
 */
enum function_id {
    CTRL_ALT_DEL,       // Ctrl + Alt + Backspace -> Ctrl + Alt + Del
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
#define MODS_CTRL_ALT_MASK  (MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT))
    static uint8_t ctrl_alt_del_ctrl_alt_mask;

    switch (id) {
        // Ctrl + Alt + Backspace -> Ctrl + Alt + Del
        case CTRL_ALT_DEL:
            ctrl_alt_del_ctrl_alt_mask = get_mods()&(MODS_CTRL_ALT_MASK);
            if (record->event.pressed) {
                if (ctrl_alt_del_ctrl_alt_mask) {
                    add_key(KC_DEL);
                    send_keyboard_report();
                } else {
                    add_key(KC_BSPC);
                    send_keyboard_report();
                }
            } else {
                if (ctrl_alt_del_ctrl_alt_mask) {
                    del_key(KC_DEL);
                    send_keyboard_report();
                } else {
                    del_key(KC_BSPC);
                    send_keyboard_report();
                }
            }
            break;
    }
}

#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t PROGMEM fn_actions[] = {
#endif
    [0] = ACTION_LAYER_MODS(4, MOD_LSFT),
    [1] = ACTION_LAYER_MODS(4, MOD_RSFT),
    [2] = ACTION_LAYER_MOMENTARY(1),
    [3] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),  // Shift + Insert
    [4] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_TAB),
    [5] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRC),
    [6] = ACTION_LAYER_MOMENTARY(2),
    [7] = ACTION_LAYER_MOMENTARY(5),
    [8] = ACTION_LAYER_TOGGLE(3),
    [9] = ACTION_FUNCTION(CTRL_ALT_DEL),
};
