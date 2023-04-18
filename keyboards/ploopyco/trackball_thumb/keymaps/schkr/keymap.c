/* Copyright 2021 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_REDO LGUI(LSFT(KC_Z))
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_REDO LCTL(KC_Y)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
        |________________________ _____________ _____________________
        |            BTN1        |    BTN 3    |        BTN 2        |
        |________________        |             |       ______________|
        |    BTN 4      |        |             |       |    BTN 5    |
        |_______________|        |_____________|       |             |
        |    BTN AUX    |                              |             |
        |_______________|                              |_____________|
        |____________________________________________________________|

        Default Setup
        | BTN 4 | BTN 1 | BTN 3 | BTN 2 | BTN 5 |
        | DPI_CONFIG |
*/

    [0] = LAYOUT( /* Base */
        KC_BTN5,    KC_BTN1,        DRAG_SCROLL,     KC_BTN2,   OSL(1),
        KC_BTN4
    ),
    [1] = LAYOUT( /* Aux */
        KC_MAC_REDO, KC_MAC_COPY,  _______,    KC_MAC_PASTE,    KC_MAC_UNDO,
        DPI_CONFIG
    ),
    // [2] = LAYOUT( /* OS */
    //     _______,    _______,        _______,    _______,        _______,
    //     _______
    // )
};
