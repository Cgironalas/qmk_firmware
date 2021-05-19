/* Copyright 2021 Cgironalas
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

#include "vInspiration.h"

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * k00: KC_GRV,           k11: KC_1,    k02: KC_2,    k12: KC_3,    k03: KC_4,              k13: KC_5,    k04: KC_6,    k14: KC_7,    k05: KC_8,  k15: KC_9,   k16: KC_0,    k27: KC_MINS, k17: KC_EQL,  k06: KC_GRV,  k07: KC_BSLS
 * k21: KC_TAB,           k31: KC_Q,    k22: KC_W,    k32: KC_E,    k23: KC_R,              k33: KC_T,    k24: KC_Y,    k34: KC_U,    k25: KC_I,   k35: KC_O,    k26: KC_P,    k36: KC_LBRC, k37: KC_RBRC, k47: KC_BSPC
 * k41: KC_RCTL,          k51: KC_A,    k42: KC_S,    k52: KC_D,    k43: KC_F,              k53: KC_G,    k44: KC_H,    k54: KC_J,    k45: KC_K,   k55: KC_L,    k46: KC_SCLN, k56: KC_QUOT,        k57: KC_ENT
 * k61: KC_LSFT,          k71: KC_Z,    k62: KC_X,    k72: KC_C,    k63: KC_V,              k73: KC_B,    k64: KC_B,    k74: KC_N,    k65: KC_M,   k75: KC_COMM, k66: KC_DOT,  k76: KC_SLSH, k67: KC_RSFT, k77: MO(3)
 * k30: LT(_FN1, KC_ESC), k40: KC_LGUI, k50: KC_LALT, k60: KC_SPC,  k70: LT(_FN2, KC_BSPC), k80: KC_NO,   k85: KC_RALT, k87: KC_LCTL
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 *
 * k00: KC_PSCR,  k01: KC_ESC,  k02: KC_2,    k03: KC_4,    k04: KC_6,    k05: KC_8,    k06: KC_GRV,  k07: KC_BSLS,
 * k10: KC_HOME,  k11: KC_1,    k12: KC_3,    k13: KC_5,    k14: KC_7,    k15: KC_9,    k16: KC_0,    k17: KC_EQL,
 * k20: KC_END,   k21: KC_TAB,  k22: KC_W,    k23: KC_R,    k24: KC_Y,    k25: KC_I,    k26: KC_P,    k27: KC_MINS,
 * k30: MO(2),    k31: KC_Q,    k32: KC_E,    k33: KC_T,    k34: KC_U,    k35: KC_O,    k36: KC_LBRC, k37: KC_RBRC,
 * k40: KC_LGUI,  k41: KC_RCTL, k42: KC_S,    k43: KC_F,    k44: KC_H,    k45: KC_K,    k46: KC_SCLN, k47: KC_BSPC,
 * k50: KC_LALT,  k51: KC_A,    k52: KC_D,    k53: KC_G,    k54: KC_J,    k55: KC_L,    k56: KC_QUOT, k57: KC_ENT,
 * k60: KC_BSPC,  k61: KC_LSFT, k62: KC_X,    k63: KC_V,    k64: KC_B,    k65: KC_M,    k66: KC_DOT,  k67: KC_RSFT,
 * k70: KC_DEL,   k71: KC_Z,    k72: KC_C,    k73: KC_B,    k74: KC_N,    k75: KC_COMM, k76: KC_SLSH, k77: MO(3),
 * k80: KC_SPC,   k81: KC_NO,   k82: KC_NO,   k83: KC_NO,   k84: KC_NO,   k85: KC_RALT, k86: KC_NO,   k87: KC_LCTL
 */

/*left                                ||  right */
#define LAYOUT_split( \
  L00, L01, L02, L03, L04, L05, L06,           R01, R02, R03, R04, R05, R06, R07, \
  L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, R16, R17, \
  L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, R26,      \
  L30, L31, L32, L33, L34, L35,           R30, R31, R32, R33, R34, R35,           \
  L40, L41, L42, L43, L44,                R40, R41, R42, R43, R44, R45            \
) \
{ \
  { L00,   L01,   L02,   L03,   L04,   L05,   L06,   KC_NO }, \
  { L10,   L11,   L12,   L13,   L14,   L15,   KC_NO, KC_NO }, \
  { L20,   L21,   L22,   L23,   L24,   L25,   KC_NO, KC_NO }, \
  { L30,   L31,   L32,   L33,   L34,   L35,   KC_NO, KC_NO }, \
  { L40,   L41,   L42,   L43,   L44,   KC_NO, KC_NO, KC_NO }, \
  { KC_NO, R01,   R02,   R03,   R04,   R05,   R06,   R07   }, \
  { R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17   }, \
  { R20,   R21,   R22,   R23,   R24,   R25,   R26,   KC_NO }, \
  { R30,   R31,   R32,   R33,   R34,   R35,   KC_NO, KC_NO }, \
  { R40,   R41,   R42,   R43,   R44,   R45,   KC_NO, KC_NO }  \
}
