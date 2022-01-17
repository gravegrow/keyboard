/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4D44 // "MD"
#define PRODUCT_ID      0x5244 // "RD"
#define DEVICE_VER      0x0100
#define MANUFACTURER    Gravegrow 
#define PRODUCT         The Redox RGB

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { F4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define SERIAL_USE_MULTI_TRANSACTION
#define MASTER_LEFT

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#define RGBLED_NUM 70    // Number of LEDs
#define RGBLED_SPLIT {35, 55} // sync LEDs between RIGHT and LEFT hand

#define RGBLIGHT_LIMIT_VAL 160  // Power draw may exceed 0.6A at max brightness with white colour.
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_SLEEP

#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_SPLIT RGBLED_SPLIT

#define RGB_MATRIX_KEYPRESSES  // reacts to keypresses
#define RGB_DISABLE_WHEN_USB_SUSPENDED  // turn off effects when suspended
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150  // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS

// #define RGB_MATRIX_STARTUP_MODE       RGB_MATRIX_ALPHAS_MODS

#define RGB_MATRIX_HUE_STEP           8
#define RGB_MATRIX_SAT_STEP           8
#define RGB_MATRIX_VAL_STEP           8
#define RGB_MATRIX_SPD_STEP           10
