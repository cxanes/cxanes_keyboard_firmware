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
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Bac|Del|
     * |-----------------------------------------------------------|
     * |Fn4  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|Fn5|    \|
     * |-----------------------------------------------------------|
     * |Fn2   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Fn0     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn1   |Fn6|
     * `-----------------------------------------------------------'
     *       |Ctl|Alt  |         Space         |Fn2  |Ctl|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,DEL, \
           FN4, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
           FN2, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT, \
           FN0, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,SLSH, FN1, FN6, \
                LCTL,LALT,          SPC,                FN2, RCTL),

    /* Layer 1: Fn'd
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del|Ins|
     * |-----------------------------------------------------------|
     * |Caps |PgU|Up |Pgd|   |   |Cal|PgU|Hom|PgD|PrS|ScL|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|Hom|Ins|Lef|Dow|Up |Rig|Bsp|Del|        |
     * |-----------------------------------------------------------|
     * |        |App|   |End|Fn3|   |End|Hom|PgU|PgD|End|      |Fn8|
     * `-----------------------------------------------------------'
     *       |Fn7|     |                       |     |   |
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, INS, \
           CAPS,PGUP,UP,  PGDN,TRNS,TRNS,CALC,PGUP,HOME,PGDN,PSCR,SLCK,PAUS,INS,  \
           TRNS,LEFT,DOWN,RGHT,HOME,INS, LEFT,DOWN,UP,  RGHT,BSPC,DEL, TRNS, \
           TRNS,APP, TRNS,END, FN3, TRNS,END, HOME,PGUP,PGDN,END, TRNS,FN8,  \
                FN7, TRNS,          TRNS,               TRNS,TRNS),

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
     *       |Gui|Alt  |         Space         |Fn8  |Gui|
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           LCTL,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
                LGUI,LALT,          TRNS,               FN8, RGUI),

    /* Layer 3: overide layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |PgU|   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |Hom|End|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |PgD|      |   |
     * `-----------------------------------------------------------'
     *      |    |     |                       |     |   |
     *      `--------------------------------------------'
     */
    [3] = \
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,END, TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

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

    /* Layer 5: mouse layer
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
    [5] = ACTION_MODS_TAP_KEY(MOD_RGUI, KC_RBRC),
    [6] = ACTION_LAYER_MOMENTARY(2),
    [7] = ACTION_LAYER_MOMENTARY(5),
    [8] = ACTION_LAYER_MOMENTARY(3),
};
