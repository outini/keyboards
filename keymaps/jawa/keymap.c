#include "S60RGB.h"

#define _DEFAULT_KM 0
#define _SPACEFN_KM 1
#define _GAME_KM 2


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap _DEFAULT_KM: Default Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ TAB   │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │    \    │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴─────────┤
│ Fn1    │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │     ENTER    │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──────────────┤
│  LSHIFT  │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │       RSHIFT     │
├──────┬───┴──┬──┴───┬─┴─────┴─────┴─────┴─────┴─────┴─────┴──┬──┴───┬─┴────┬──────┬──────┤
│LCTRL │L_GUI │L_ALT │                 SPC/Fn0                │R_ALT │ Fn2  │ APP  │RCTRL │
└──────┴──────┴──────┴────────────────────────────────────────┴──────┴──────┴──────┴──────┘
  */
[_DEFAULT_KM] = KEYMAP(
  KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_NO, KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSLS,        \
  KC_FN2,  KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,         \
  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,                     KC_RSFT,        \
  KC_LCTL, KC_LGUI, KC_LALT,                       KC_FN0,                          KC_RALT,  KC_FN1,   KC_RGUI,  KC_RCTL
  ),

 /* Keymap _SPACEFN_KM: Function Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│ DEL │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ TAB   │ BL- │ BL+ │ BL  │     │     │PgUp │Home │  Up │ End │Pscrn│Slock│Pause│   INS   │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴─────────┤
│ RESET  │ Vol-│ Vol+│ Mute│     │     │PgDwn│Left │Down │Right│     │     │     ENTER    │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──────────────┤
│  LSHIFT  │R_TOG│R_MOD│R_HUI│R_HUD│R_SAI│R_SAD│R_VAI│R_VAD│     │     │       RSHIFT     │
├──────┬───┴──┬──┴───┬─┴─────┴─────┴─────┴─────┴─────┴─────┴──┬──┴───┬─┴────┬──────┬──────┤
│LCTRL │L_GUI │L_ALT │                                        │R_ALT │      │R_GUI │RCTRL │
└──────┴──────┴──────┴────────────────────────────────────────┴──────┴──────┴──────┴──────┘
  */
[_SPACEFN_KM] = KEYMAP(
  KC_GRV,  KC_F1,       KC_F2,     KC_F3,    KC_F4,   KC_F5,   KC_F6,     KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_DEL, \
  KC_TAB,  BL_DEC,      BL_INC,    BL_TOGG,  KC_TRNS, KC_TRNS, KC_PGUP,   KC_HOME, KC_UP,   KC_END,   KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,          \
  RESET,   KC__VOLDOWN, KC__VOLUP, KC__MUTE, KC_TRNS, KC_TRNS, KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS,          KC_ENT,          \
  KC_LSFT, RGB_TOG,     RGB_MOD,   RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD,   RGB_VAI, RGB_VAD, KC_TRNS,  KC_TRNS,                   KC_RSFT,         \
  KC_LCTL, KC_LGUI,     KC_LALT,                                          KC_TRNS,                    KC_RALT, KC_TRNS, KC_RGUI, KC_RCTL
  ),

 /* Keymap _GAME_KM: Gaming Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ TAB   │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │    \    │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴─────────┤
│ Fn1    │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │     ENTER    │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──────────────┤
│  LSHIFT  │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │       RSHIFT     │
├──────┬───┴──┬──┴───┬─┴─────┴─────┴─────┴─────┴─────┴─────┴──┬──┴───┬─┴────┬──────┬──────┤
│LCTRL │L_GUI │L_ALT │                   SPC                  │R_ALT │ Fn3  │ APP  │RCTRL │
└──────┴──────┴──────┴────────────────────────────────────────┴──────┴──────┴──────┴──────┘
  */
[_GAME_KM] = KEYMAP(
  KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_NO, KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSLS,        \
  KC_FN2,  KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,         \
  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,                     KC_RSFT,        \
  KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                           KC_RALT, KC_FN1,   KC_RGUI,  KC_RCTL
  )
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(_SPACEFN_KM, KC_SPACE),    // Holding down Fn0 switches to spacefn layer, tapping FN0 produces a "Space"
    [1] = ACTION_DEFAULT_LAYER_SET(_GAME_KM),             // Switch to gaming layout
    [2] = ACTION_LAYER_MOMENTARY(_SPACEFN_KM),            // Holding down Fn2 switches to spacefn layer
    [3] = ACTION_DEFAULT_LAYER_SET(_DEFAULT_KM)           // Switch to default layout
};
