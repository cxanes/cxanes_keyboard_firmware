/*
 * Cxanes layout
 */
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Fn4  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|Fn5|    \|
     * |-----------------------------------------------------------|
     * |Fn2   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Fn0     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn1       |
     * |-----------------------------------------------------------|
     * |Fn6 |Ctrl|Alt |      Space             |Fn2 |Ctrl|Alt |Gui |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        FN4, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,FN5, BSLS, \
        FN2, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        FN0, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN1,  \
        FN6, LCTL,LALT,          SPC,                     FN2, RCTL,RALT,RGUI),

    /* 4: Fn'd
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |Caps |PgU|Up |PgD|   |   |Cal|PgU|Hom|PgD|PrS|ScL|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|Hom|Ins|Lef|Dow|Up |Rig|Bsp|Del|        |
     * |-----------------------------------------------------------|
     * |        |App|   |End|Fn3|   |End|Hom|PgU|PgD|End|Up        |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |Left|Dow |Rig |
     * `-----------------------------------------------------------'
     */
    [4] = KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        CAPS,PGUP,UP,  PGDN,TRNS,TRNS,CALC,PGUP,HOME,PGDN,PSCR,SLCK,PAUS,INS,  \
        TRNS,LEFT,DOWN,RGHT,HOME,INS, LEFT,DOWN,UP,  RGHT,BSPC,DEL,      TRNS, \
        TRNS,APP, TRNS,END, FN3, TRNS,END, HOME,PGUP,PGDN,END,           PGUP, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,HOME,PGDN,END),

    /* 5: Default with Arrow
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   | Up       |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |Lef |Dow |Rig |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          UP,   \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,LEFT,DOWN,RGHT),

    /* 6: Shift + ESC = Tilde
     *    [ref] https://github.com/tmk/tmk_keyboard/wiki/FAQ-Keymap#esc-and--on-a-key
     * ,-----------------------------------------------------------.
     * |~  |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |   |   |   |   |   |   |  ]|     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TAB, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 7: mouse layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |Mb1|McU|Mb2|   |   |   |Mb1|MwU|Mb2|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |McL|McD|McR|MwU|   |McL|McD|McU|McR|   |   |Fn7     |
     * |-----------------------------------------------------------|
     * |        |   |Mb3|MwD|   |   |MwD|Mb3|   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel8
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,BTN1,MS_U,BTN2,TRNS,NO,  NO,  BTN1,WH_U,BTN2,NO,  NO,  NO,  TRNS, \
        TRNS,MS_L,MS_D,MS_R,WH_U,NO,  MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,     FN7,  \
        TRNS,NO,  BTN3,WH_D,NO,  NO,  WH_D,BTN3,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MODS(6, MOD_LSFT),
    [1] = ACTION_LAYER_MODS(6, MOD_RSFT),
    [2] = ACTION_LAYER_BIT_XOR(1, 0b0011, ON_BOTH),
    [3] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),  // Shift + Insert
    [4] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_TAB),
    [5] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRC),
    [6] = ACTION_LAYER_MOMENTARY(7),
    [7] = ACTION_LAYER_TOGGLE(5),
};
