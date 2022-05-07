/* Copyright 2022 Victor Rivera
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

enum layers {
  BASE,
  MEDR,
  NAVR,
  MOUR,
  NSSL,
  NSL,
  FUNL,
  GAME,
  GSND,
  MISC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE Colemak Mod-DH
   * ,-----------------------------------------------------------------------------------.
   * |   Q  |   W  |   F  |   P  |   B  | Copy |Paste |   J  |   L  |   U  |   Y  |  '   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   A  |   R  |   S  |   T  |   G  |Prt Sc|AltGr |   M  |   N  |   E  |   I  |  O   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   Z  |   X  |   C  |   D  |   V  | Next | Prev |   K  |   H  |   ,  |   .  |  /   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | F13  | F14  | Esc  |  Spc | Tab  | Play/Pause  |Enter | Bksp | Del  | F15  | F16  |
   * `-----------------------------------------------------------------------------------'
   */
  [BASE] = LAYOUT_planck_mit(
    KC_Q,         KC_W,         KC_F,             KC_P,             KC_B,             KC_COPY,  KC_PSTE,  KC_J,             KC_L,             KC_U,             KC_Y,           KC_QUOT,
    GUI_T(KC_A),  ALT_T(KC_R),  CTL_T(KC_S),      SFT_T(KC_T),      KC_G,             KC_PSCR,  KC_ALGR,  KC_M,             SFT_T(KC_N),      CTL_T(KC_E),      ALT_T(KC_I),    GUI_T(KC_O),
    KC_Z,         ALGR_T(KC_X), KC_C,             KC_D,             KC_V,             KC_MNXT,  KC_MPRV,  KC_K,             KC_H,             KC_COMM,          ALGR_T(KC_DOT), KC_SLSH,
    KC_F13,       KC_F14,       LT(MEDR, KC_ESC), LT(NAVR, KC_SPC), LT(MOUR, KC_TAB),       KC_MPLY,      LT(NSSL, KC_ENT), LT(NSL, KC_BSPC), LT(FUNL, KC_DEL), KC_F15,         KC_F16
  ),

  /* NAVR Navigation
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      | Redo |Paste | Copy | Cut  | Undo |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      | Left | Down |  Up  |Right |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      | Home |Pg Dn |Pg Up | End  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |             |Enter | Bksp | Del  | F17  | F18  |
   * `-----------------------------------------------------------------------------------'
   */
  [NAVR] = LAYOUT_planck_mit(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C(S(KC_Z)), KC_PSTE,          KC_COPY, KC_CUT,  KC_UNDO,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_LEFT,          KC_DOWN, KC_UP,   KC_RGHT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_HOME,          KC_PGDN, KC_PGUP, KC_END,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     KC_ENT,     LT(NSL, KC_BSPC), KC_DEL,  KC_F17,  KC_F18
  ),

  /* MOUR Mouse
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |MC Lft|MC Dn |MC Up |MC Rgt|
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |MW Lft|MW Dn |MW Up |MW Rgt|
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |             |      |Btn 1 |Btn 3 |Btn 2 |      |
   * `-----------------------------------------------------------------------------------'
   */
  [MOUR] = LAYOUT_planck_mit(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     KC_BTN1, KC_BTN3, KC_BTN2, XXXXXXX, XXXXXXX
  ),

  /* MEDR Media
   * ,-----------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      | Prev | Vol- | Vol+ | Next |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |             | Stop | Play | Mute |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [MEDR] = LAYOUT_planck_mit(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     KC_MSTP, KC_MPLY, KC_MUTE, XXXXXXX, XXXXXXX
  ),

  /* NSL Numeral and Symbols
   * ,-----------------------------------------------------------------------------------.
   * |   [  |   7  |   8  |   9  |   ]  |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   ;  |   4  |  F2  |  F3  |   =  |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   `  |   1  |   2  |   3  |   \  |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F19 |  F20 |   .  |   0  |   -  |             |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [NSL] = LAYOUT_planck_mit(
    KC_LBRC, KC_7,    KC_8,   KC_9,           KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_SCLN, KC_4,    KC_5,   KC_6,           KC_EQL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_GRV,  KC_1,    KC_2,   KC_3,           KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F19,  KC_F20,  KC_DOT, LT(NAVR, KC_0), KC_MINS, XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  /* NSSL Shifted Numerals and Symbols
   * ,-----------------------------------------------------------------------------------.
   * |   {  |   &  |   *  |   (  |   }  |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   :  |   $  |   %  |   ^  |   +  |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |   ~  |   !  |   @  |   #  |   |  |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |   (  |   )  |   _  |             |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [NSSL] = LAYOUT_planck_mit(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_UNDS,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  /* FUNL Function and System
   * ,-----------------------------------------------------------------------------------.
   * |  F12 |  F7  |  F8  |  F9  |Prt Sc|      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F11 |  F4  |  F5  |  F6  |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F10 |  F1  |  F2  |  F3  |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      | Spc  | Tab  |             |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [FUNL] = LAYOUT_planck_mit(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,  KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, KC_TAB,      XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  /* GAME Game
   * ,-----------------------------------------------------------------------------------.
   * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |   /  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Ctrl | GUI  | Alt  |      | GSND |    Space    | GSND |      | Left | Down |Right |
   * `-----------------------------------------------------------------------------------'
   */
  [GAME] = LAYOUT_planck_mit(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
    KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, MO(GSND),     KC_SPC,       MO(GSND), XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  /* GSND Game Second
   * ,-----------------------------------------------------------------------------------.
   * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Exit |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      | Vol- | Vol+ |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |             |      |      | Play | Prev | Next |
   * `-----------------------------------------------------------------------------------'
   */
  [GSND] = LAYOUT_planck_mit(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TG(GAME),
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU ,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT
  ),

  /* MISC Misc
   * ,-----------------------------------------------------------------------------------.
   * |      | Reset| Debug| RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      | Game | Game | Game | Game |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |             |      |      |      |      |      |
   * `-----------------------------------------------------------------------------------'
   */
  [MISC] = LAYOUT_planck_mit(
    XXXXXXX, RESET,   DEBUG,   RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, TG(GAME), TG(GAME), TG(GAME), TG(GAME), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  )

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, NAVR, NSL, MISC);
}
