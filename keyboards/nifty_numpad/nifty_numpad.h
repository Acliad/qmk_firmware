/* Copyright 2023 Acliad
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

#pragma once

#include "quantum.h"

// min/max macros
#define max(a,b)             \
({                           \
    __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a > _b ? _a : _b;       \
})

#define min(a,b)             \
({                           \
    __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a < _b ? _a : _b;       \
})

/*
* ┌───┬───┐  ┌───┬───┬───┬───┐
* │F13│F19│  │F1 │F2 │F3 │F4 │
* └───┴───┘  └───┴───┴───┴───┘
* ┌───┬───┐  ┌───┬───┬───┬───┐
* │F14│F20│  │Num│ / │ * │ - │
* ├───┼───┤  ├───┼───┼───┼───┤
* │F15│F21│  │ 7 │ 8 │ 9 │   │
* ├───┼───┤  ├───┼───┼───┤ + │
* │F16│F22│  │ 4 │ 5 │ 6 │   │
* ├───┼───┤  ├───┼───┼───┼───┤
* │F17│F23│  │ 1 │ 2 │ 3 │   │
* ├───┼───│  ├───┴───┼───┤Ent│
* │F18│F24│  │ 0     │ . │   │
* └───┴───┘  └───────┴───┴───┘
*/

#ifdef RGB_IDLE_ENABLE
#define _LAYER_RGB 15
// Custom keycode declarations
enum custom_keycodes {
    RGB_DEF = SAFE_RANGE,
    RGB_IEF
};

#define RGB_IDLE_TIMEOUT_MS (10*60*1000)

// Functions exposed by nifty_numpad.c
bool rgb_matrix_idle_mode(void);

#endif
