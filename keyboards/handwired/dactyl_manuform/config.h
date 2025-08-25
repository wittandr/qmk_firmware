/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
#define USE_SERIAL
#define EE_HANDS
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
#define SOFT_SERIAL_PIN D3
#define FORCED_SYNC_THROTTLE_MS 100
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_MODS_ENABLE
#define SELECT_SOFT_SERIAL_SPEED 1
//#define MATRIX_ROWS 14
//#define MATRIX_COLS 12
//#define MATRIX_COL_PINS_RIGHT {B5, B4, E6, D7, C6, D4}
//#define MATRIX_COL_PINS_LEFT {D4, C6, D7, E6, B4, B5}
//#define MATRIX_ROW_PINS_RIGHT {F4, F5, F6, F7, B1, B3, B2}
//#define MATRIX_ROW_PINS_LEFT {F4, F5, F6, F7, B1, B3, B2}
/* mouse config */
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD
//#define WS2812_RGBW


#define RGB_MATRIX_LED_COUNT 38

#define ENABLE_RGB_MATRIX_BREATHING