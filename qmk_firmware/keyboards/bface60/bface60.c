/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "bface60.h"
#ifdef BACKLIGHT_ENABLE
#include "backlight.h"
#endif
#ifdef RGBLIGHT_ENABLE
#include "rgblight.h"
#endif

#include <avr/pgmspace.h>

#include "action_layer.h"
#include "i2c.h"
#include "quantum.h"

#define CAPSLOCK_LED (1 << 1)

#ifdef RGBLIGHT_ENABLE
extern rgblight_config_t rgblight_config;

void rgblight_set(void) {
    if (!rgblight_config.enable) {
        for (uint8_t i = 0; i < RGBLED_NUM; i++) {
            led[i].r = 0;
            led[i].g = 0;
            led[i].b = 0;
        }
    }

    i2c_init();
    i2c_send(0xb0, (uint8_t*)led, 3 * RGBLED_NUM);
}
#endif

static inline void capslock_led_off(void) {
    PORTD |= CAPSLOCK_LED;
}

static inline void capslock_led_on(void) {
    PORTD &= ~CAPSLOCK_LED;
}

static inline void capslock_led_init(void) {
    DDRD |= CAPSLOCK_LED;
    capslock_led_off();
}

void matrix_init_kb(void) {
    capslock_led_init();

    matrix_init_user();
}

// turn LEDs on and off depending on USB caps/num/scroll lock states.
void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        PORTD |= CAPSLOCK_LED;
    } else {
        PORTD &= ~CAPSLOCK_LED;
    }

    led_set_user(usb_led);
}
