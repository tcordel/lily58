#include QMK_KEYBOARD_H
#include "keymap_french.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
         KC_ESC,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   FR_ASTR,
         KC_TAB,    FR_A,   FR_Z,   FR_E,   FR_R,   FR_T,                   FR_Y,   FR_U,   FR_I,   FR_O,   FR_P,    FR_CIRC,
        KC_LSFT,    FR_Q,   FR_S,   FR_D,   FR_F,   FR_G,                   FR_H,   FR_J,   FR_K,   FR_L,   FR_M,   KC_QUOT,
        KC_LCTL,    FR_W,   FR_X,   FR_C,   FR_V,   FR_B,FR_UNDS,   FR_DLR, FR_N,   FR_COMM,FR_SCLN,FR_COLN,FR_EXLM,  KC_RSFT,
                                KC_LALT, KC_LGUI,   MO(1),KC_SPC,   KC_ENT, MO(2), KC_BSPC, KC_ENT),


    [1] = LAYOUT(
        KC_TRNS, KC_NO,    KC_NO,   KC_NO,     KC_NO,   KC_NO,                     KC_NO,   KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_TRNS, KC_NO,    KC_NO, FR_DQUO,   FR_QUOT,  FR_GRV,                     KC_NO,   KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
        KC_TRNS, KC_NO, FR_MINS, FR_PLUS,     FR_EQL, FR_ASTR,                   KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,KC_HOME, KC_PGUP,
        KC_TRNS, KC_NO,   FR_DEG, FR_TILD,     FR_AT, FR_PIPE,  FR_SLSH, FR_BSLS,  FR_HASH,   KC_NO, KC_NO, KC_NO,  KC_END, KC_PGDN,
                                  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  MO(3),  KC_DEL, KC_TRNS),


    [2] = LAYOUT(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, FR_LABK, FR_LPRN, FR_LBRC,             FR_RBRC, FR_RPRN, FR_RABK, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   FR_LCBR, FR_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                   KC_TRNS, KC_TRNS,   MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


    [3] = LAYOUT(
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                 KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,KC_NO,
        KC_TRNS, KC_F11,  KC_F12, KC_NO, KC_VOLU, KC_NO,               KC_NO, KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




