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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 *               k01: KC_ESC,  k11: KC_1,    k02: KC_2,    k12: KC_3,  k03: KC_4,    k13: KC_5,    k04: KC_6,  k14: KC_7,  k05: KC_8,  k15: KC_9,   k16: KC_0,    k27: KC_MINS, k17: KC_EQL,  k06: KC_GRV,  k07: KC_BSLS
 *               k21: KC_TAB,  k31: KC_Q,    k22: KC_W,    k32: KC_E,  k23: KC_R,    k33: KC_T,                k24: KC_Y,  k34: KC_U,  k25: KC_I,   k35: KC_O,    k26: KC_P,    k36: KC_LBRC, k37: KC_RBRC, k47: KC_BSPC
 * k00: KC_PSCR, k41: KC_RCTL, k51: KC_A,    k42: KC_S,    k52: KC_D,  k43: KC_F,    k53: KC_G,                k44: KC_H,  k54: KC_J,  k45: KC_K,   k55: KC_L,    k46: KC_SCLN, k56: KC_QUOT,        k57: KC_ENT
 * k10: KC_HOME, k61: KC_LSFT, k71: KC_Z,    k62: KC_X,    k72: KC_C,  k63: KC_V,    k73: KC_B,                k64: KC_B,  k74: KC_N,  k65: KC_M,   k75: KC_COMM, k66: KC_DOT,  k76: KC_SLSH, k67: KC_RSFT, k77: MO(3)
 * k20: KC_END,  k30: MO(2),   k40: KC_LGUI, k50: KC_LALT,      k60: KC_SPC,         k70: KC_BSPC,                         k80: KC_SPC,             k85: KC_RALT,                                    k87: KC_LCTL
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

#define LAYOUT( \
       k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, k16, k27, k17, k06, k07, \
       k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, k26, k36, k37,   k47,    \
  k00, k41, k51, k42, k52, k43, k53, k44, k54, k45, k55, k46, k56,        k57,    \
  k10, k61, k71, k62, k72, k63, k73,      k64, k74, k65, k75, k66, k76, k67, k77, \
  k20, k30, k40, k50,    k60,   k70,      k80,      k85,                  k87     \
) \
{ \
  { k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07   }, \
  { k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17   }, \
  { k20,   k21,   k22,   k23,   k24,   k25,   k26,   k27   }, \
  { k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37   }, \
  { k40,   k41,   k42,   k43,   k44,   k45,   k46,   k47   }, \
  { k50,   k51,   k52,   k53,   k54,   k55,   k56,   k57   }, \
  { k60,   k61,   k62,   k63,   k64,   k65,   k66,   k67   }, \
  { k70,   k71,   k72,   k73,   k74,   k75,   k76,   k77   }, \
  { k80,   KC_NO, KC_NO, KC_NO, KC_NO, k85,   KC_NO, k87   }  \
}
