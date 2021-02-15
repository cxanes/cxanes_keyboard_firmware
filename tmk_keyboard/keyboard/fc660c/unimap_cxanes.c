#include "action.h"
#include "actionmap.h"
#include "hook.h"
#include "fc660c.h"
#include "action_util.h"

#define AC_CTAB      ACTION_MODS_TAP_KEY(MOD_LCTL, KC_TAB)
#define AC_L2        ACTION_LAYER_MOMENTARY(2)
#define AC_LS_1      ACTION_LAYER_MODS(1, MOD_LSFT)
#define AC_RS_1      ACTION_LAYER_MODS(1, MOD_RSFT)
#define AC_L3        ACTION_LAYER_MOMENTARY(3)
#define AC_ABRC      ACTION_MODS_TAP_KEY(MOD_RALT, KC_RBRC)
// Shift + Insert
#define AC_SINS      ACTION_MODS_KEY(MOD_LSFT, KC_INS)

/* id for user defined functions */
enum function_id {
    FUNC_ARROW,
};

#define AC_UP_       ACTION_FUNCTION_OPT(FUNC_ARROW, 0)
#define AC_DOW_      ACTION_FUNCTION_OPT(FUNC_ARROW, 1)
#define AC_LEF_      ACTION_FUNCTION_OPT(FUNC_ARROW, 2)
#define AC_RGH_      ACTION_FUNCTION_OPT(FUNC_ARROW, 3)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    [0] = KMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     GRV,
        CTAB,Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,ABRC,BSLS,     DEL,
        L2,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,
        LS_1,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RS_1,UP_,
        L3,  LCTL,LALT,          SPC,                     L2,  RCTL,RGUI,LEF_,DOW_,RGH_
    ),
    [1] = KMAP(
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
    [2] = KMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      TRNS,
        CAPS,PGUP,UP,  PGDN,TRNS,TRNS,CALC,PGUP,HOME,PGDN,PSCR,SLCK,PAUS,INS,      TRNS,
        TRNS,LEFT,DOWN,RGHT,HOME,INS, LEFT,DOWN,UP,  RGHT,BSPC,DEL,      TRNS,
        TRNS,APP, TRNS,END, SINS,TRNS,END, HOME,PGUP,PGDN,END,           TRNS,TRNS,
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
    [3] = KMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
        TRNS,BTN1,MS_U,BTN2,TRNS,NO,  NO,  BTN1,WH_U,BTN2,NO,  NO,  NO,  TRNS,     TRNS,
        TRNS,MS_L,MS_D,MS_R,WH_U,NO,  MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,     TRNS,
        TRNS,NO,  BTN3,WH_D,NO,  NO,  WH_D,BTN3,TRNS,TRNS,TRNS,          TRNS,TRNS,
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS
    ),
};


void hook_layer_change(uint32_t layer_state)
{
#if 0
    // lights LED on Insert when layer 1 is enabled
    if (layer_state & (1L<<1)) {
        PORTB &= ~(1<<5);
    } else {
        PORTB |=  (1<<5);
    }
#endif
}

// reference: https://www.puritys.me/docs-blog/article-400-gh60-%E5%88%B7%E9%8D%B5%E4%BD%8D---tmk-%E5%A6%82%E4%BD%95%E8%A8%AD%E5%AE%9A%E4%B8%89%E7%B5%84%E5%90%88%E9%8D%B5-Remap.html

#define MODS_GUI_MASK   (MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI))

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    static uint8_t mod = 0;
    static uint8_t key;
    switch (id) {
        case FUNC_ARROW:
            mod = get_mods();
            if (record->event.pressed) {
                switch (opt) {
                    case 0:
                        key = (mod & MODS_GUI_MASK) ? KC_PGUP : KC_UP;
                        break;
                    case 1:
                        key = (mod & MODS_GUI_MASK) ? KC_PGDN : KC_DOWN;
                        break;
                    case 2:
                        key = (mod & MODS_GUI_MASK) ? KC_HOME : KC_LEFT;
                        break;
                    case 3:
                        key = (mod & MODS_GUI_MASK) ? KC_END : KC_RIGHT;
                        break;
                }

                if (mod & MODS_GUI_MASK)  {
                    del_mods(mod);
                    add_key(key);
                    send_keyboard_report();
                    add_mods(mod);   // return Gui but not sent
                }  else {
                    add_key(key);
                    send_keyboard_report();
                }
            } else {
                del_key(key);
                send_keyboard_report();
            }
            break;
    }
}
