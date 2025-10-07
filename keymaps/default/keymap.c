#include QMK_KEYBOARD_H
#include "elpekenin/ledmap.h"
#include "elpekenin/colors.h"


enum layers {
    _BASE = 0,
    _GAME,
    _TAP,
    _BUTTON,
    _NAV,
    _MOUSE,
    _MEDIA,
    _NUM,
    _SYM,
    _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * QWERTY
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------| MUTE  |    |RGBTOG |------+------+------+------+------+------|
     * | LCTL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

    [_BASE] = LAYOUT(
        KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,   KC_MUTE,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LGUI, KC_LALT, KC_LCTL, MO(_GAME), KC_ENT,    KC_SPC,   MO(_TAP),   KC_RCTL, KC_RALT, KC_RGUI
    ),

    /*
     * LOWER
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
     * |------+------+------+------+------+------| MUTE  |    |RGBTOG |------+------+------+------+------+------|
     * |      |   =  |   -  |   +  |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */
    [_GAME] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        _______, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,  _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
                          _______, _______, _______, _______, _______,  _______,  _______, _______, _______, _______
    ),

    /*
     * RAISE
     * ,-----------------------------------------.                    ,-----------------------------------------.
     * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |   `  | Ins  |Pscr  |Menu  |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
     * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
     * |      | LAlt | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
     * |------+------+------+------+------+------| MUTE  |    |RGBTOG |------+------+------+------+------+------|
     * |      | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      |      |
     * `-----------------------------------------/       /     \      \-----------------------------------------'
     *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
     *            |      |      |      |      |/       /         \      \ |      |      |      |      |
     *            `----------------------------------'           '------''---------------------------'
     */

    [_TAP] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
        KC_GRV,  KC_INS,  KC_PSCR, KC_APP,  XXXXXXX, XXXXXXX,                    XXXXXXX, KC_PGUP, KC_UP,   KC_PGDN, KC_DEL,  KC_BSPC,
        _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,                    KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_BSPC,
        _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, XXXXXXX,  _______, _______, XXXXXXX, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, _______,
                          _______, _______, _______, _______,  _______, _______,  _______, _______, _______, _______
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [1] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
};
#endif

#define BLACK RGB_COLOR(RGB_BLACK)
#define CYAN HSV_COLOR(HSV_CYAN)
#define MANGENTA HSV_COLOR(HSV_MAGENTA)
#define RED HSV_COLOR(HSV_RED)
#define YELLOW HSV_COLOR(HSV_YELLOW)
#define TRNS TRNS_COLOR
#define WHITE WHITE_COLOR
// short aliases
// #define RED HUE_COLOR(HUE_RED)
#define PURPLE HSV_COLOR(HSV_PURPLE)
#define TRNS TRNS_COLOR
#define WHITE WHITE_COLOR

// make LAYOUT work
#undef XXX
#define XXX NONE_COLOR

const color_t PROGMEM ledmap[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        YELLOW,  RED,     RED,     RED,     RED,     RED,       RED,  RED,  RED,  RED,  RED,  YELLOW,
        YELLOW,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,    PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  YELLOW,
        YELLOW,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,    PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE, YELLOW,
        YELLOW,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,XXX,XXX,    PURPLE,  PURPLE,  PURPLE,  PURPLE,  PURPLE,  YELLOW,
             WHITE, WHITE,  WHITE, WHITE,  WHITE,                         WHITE, WHITE,  WHITE, WHITE,  WHITE
    ),
    [_GAME] = LAYOUT(
        TRNS,  TRNS,    TRNS,    TRNS,    TRNS,    TRNS,      TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
        TRNS,  CYAN,    CYAN,    CYAN,    CYAN,    CYAN,      CYAN,  CYAN,  CYAN,  CYAN,  CYAN,  TRNS,
        TRNS,  CYAN,    CYAN,    CYAN,    CYAN,    CYAN,      CYAN,  CYAN,  CYAN,  CYAN,  CYAN, TRNS,
        TRNS,  CYAN,    CYAN,    CYAN,    CYAN,    CYAN, XXX,XXX,    CYAN,  CYAN,  CYAN,  CYAN,  CYAN,  TRNS,
             WHITE, WHITE,  WHITE, WHITE,  WHITE,                       WHITE, WHITE,  WHITE, WHITE,  WHITE
    ),
    [_TAP] = LAYOUT(
        TRNS,  TRNS,    TRNS,    TRNS,    TRNS,    TRNS,      TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
        TRNS,  MANGENTA,    MANGENTA,    MANGENTA,    MANGENTA,    MANGENTA,      MANGENTA,  MANGENTA,  MANGENTA,  MANGENTA,  MANGENTA,  TRNS,
        TRNS,  MANGENTA,    MANGENTA,    MANGENTA,    MANGENTA,    MANGENTA,      MANGENTA,  MANGENTA,  MANGENTA,  MANGENTA,  MANGENTA, TRNS,
        TRNS,  MANGENTA,    MANGENTA,    MANGENTA,    MANGENTA,    MANGENTA, XXX,XXX,    MANGENTA,  MANGENTA,  MANGENTA,  MANGENTA,  MANGENTA,  TRNS,
             WHITE, WHITE,  WHITE, WHITE,  WHITE,                       WHITE, WHITE,  WHITE, WHITE,  WHITE
    )
 };


void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
}
