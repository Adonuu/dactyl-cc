// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    NUMPAD,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_EQL,  KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                                         KC_6, KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,                                         KC_Y, KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,
        MT(MOD_LCTL, KC_ESC), KC_A,    KC_S,   KC_D,    KC_F,    KC_G,                            KC_H, KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,                             KC_N, KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                 KC_GRV, KC_BSLS, KC_LEFT, LT(NUMPAD, KC_RGHT),                                               KC_UP, KC_DOWN, KC_LBRC,  KC_RBRC,
        KC_SPC, KC_DEL, KC_END, KC_HOME, KC_LCTL,  KC_LALT,                                       KC_LEFT_GUI, KC_RCTL, KC_PGUP, KC_BSPC, KC_ENT, KC_PGDN
    ),
    [NUMPAD] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO, KC_NUM,   KC_PEQL,   KC_PSLS,   KC_PAST,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_NO,
                 KC_NO,   KC_NO,   KC_NO,   KC_NO,                                                  KC_NO, KC_P0, KC_PDOT,   KC_PENT,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                         KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
};

   