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

#include "iVi.h"

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * Left KLE
 *
 * ["m1",{x:0.25},"m2",{x:0.25},"Esc",{x:0.75},"~\n`",{x:1},"!\n1",{x:0.5},"@\n2",{x:0.5},"#\n3",{x:0.5},"$\n4",{x:0.25},"%\n5"],
 * ["m3",{x:1.5},"m4",{x:0.75,w:1.5},"Tab",{x:0.5},"Q",{x:0.5},"W",{x:0.5},"E",{x:0.5},"R",{x:0.25},"T"],
 * [{x:2.5,w:1.5},"m5",{x:0.25,w:1.75},"Caps Lock",{x:0.25},"A",{x:0.5},"S",{x:0.5},"D",{x:0.5},"F",{x:0.25},"G"],
 * [{x:2.5},"fn",{x:0.75,w:1.75},"Shift",{x:0.25},"Z",{x:0.5},"X",{x:0.5},"C",{x:0.5},"V",{x:0.25},"B"],
 * [{x:4.25,a:7,w:1.5},"",{x:0.5,a:4,w:1.25},"lCtrl",{x:0.25,w:1.25},"lWin",{x:0.25,w:1.25},"lAlt",{x:0.25},"lShift",{x:0.25,w:2},"lSpace"]
 *
 * Right KLE
 *
 * [{x:1.25},"^\n6",{x:0.25},"&\n7",{x:0.25},"*\n8",{x:0.5},"(\n9",{x:0.25},")\n0",{x:0.25},"_\n-",{x:2},"+\n=",{x:1.5,w:2},"|\n\\"],
 * [{x:1.25},"Y",{x:0.25},"U",{x:0.25},"I",{x:0.5},"O",{x:0.25},"P",{x:0.25},"{\n[",{x:2},"}\n]",{x:1.5,w:1.5},"Backspace"],
 * [{x:1.25},"H",{x:0.25},"J",{x:0.25},"K",{x:0.5},"L",{x:0.25},":\n;",{x:0.25},"\"\n'",{x:2,w:2.25},"Enter"],
 * [{x:1.25},"N",{x:0.25},"M",{x:0.25},"<\n,",{x:0.5},">\n.",{x:0.25},"?\n/",{x:0.25,w:2.75},"Shift"],
 * [{x:0.25,a:7,w:2},"",{x:0.25,a:4},"Shift",{x:0.25,w:1.25},"Alt",{x:0.25},"Left",{x:0.25},"Down",{x:0.25},"Up",{x:2},"Right"]
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 *
 * k00: m1,       k01: m2,      k02: KC_ESC,  k03: KC_GRV,  k04: KC_1,    k05: KC_2,    k06: KC_3,    k07: KC_4,    k08: KC_5,
 * k10: m3,       k11: KC_NO,   k12: m4,      k13: KC_TAB,  k14: KC_Q,    k15: KC_W,    k16: KC_E,    k17: KC_R,    k08: KC_T,
 * k20: KC_NO,    k21: KC_NO,   k22: m5,      k23: KC_RCTL, k24: KC_A,    k25: KC_S,    k26: KC_D,    k27: KC_F,    k08: KC_G,
 * k30: KC_NO,    k31: KC_NO,   k32: MO(2),   k33: KC_lSFT, k34: KC_Z,    k35: KC_X,    k36: KC_C,    k37: KC_V,    k08: KC_B,
 * k40: KC_NO,    k41: KC_NO,   k42: KC_NO,   k43: KC_DEL,  k44: KC_LCTL, k45: KC_LGUI, k46: KC_LALT, k47: KC_lSFT, k08: KC_SPC,
 *
 * k50: KC_6,     k51: KC_7,    k52: KC_8,    k53: KC_9,    k54: KC_0,    k55: KC_MINS, k56: KC_EQL,  k57: KC_BSLS, k58: KC_NO,
 * k60: KC_Y,     k61: KC_U,    k62: KC_I,    k63: KC_O,    k64: KC_P,    k65: KC_LBRC, k66: KC_RBRC, k67: KC_BSPC, k68: KC_NO,
 * k70: KC_H,     k71: KC_J,    k72: KC_K,    k73: KC_L,    k74: KC_SCLN, k75: KC_QUOT, k76: KC_ENT,  k77: KC_NO,   k78: KC_NO,
 * k80: KC_N,     k81: KC_M,    k82: KC_COMM, k83: KC_DOT,  k84: KC_SLSH, k85: KC_RSFT, k86: KC_NO,   k87: KC_NO,   k88: KC_NO,
 * k90: KC_SPC,   k91: KC_RSFT, k92: KC_RALT, k93: KC_LEFT, k94: KC_DOWN, k95: KC_UP,   k96: KC_RGHT, k97: KC_NO,   k98: KC_NO
 */

/*left                                          ||  right */
#define LAYOUT_split( \
  L00, L01, L02, L03, L04, L05, L06, L07, L08,      R00, R01, R02, R03, R04, R05, R06, R07,      \
  L10, L11,      L13, L14, L15, L16, L17, L18,      R10, R11, R12, R13, R14, R15, R16, R17,      \
       L21,      L23, L24, L25, L26, L27, L28,      R20, R21, R22, R23, R24, R25, R26,           \
       L31,      L33, L34, L35, L36, L37, L38,      R30, R31, R32, R33, R34, R35,                \
       L41,      L43, L44,      L46, L47, L48,      R40, R41, R42, R43, R44, R45, R46            \
) \
{ \
  { L00,   L01,   L02,   L03,   L04,   L05,   L06,   L07,   L08 }, \
  { L10,   L11,   KC_NO, L13,   L14,   L15,   L16,   L17,   L18 }, \
  { KC_NO, L21,   KC_NO, L23,   L24,   L25,   L26,   L27,   L28 }, \
  { KC_NO, L31,   KC_NO, L33,   L34,   L35,   L36,   L37,   L38 }, \
  { KC_NO, L41,   KC_NO, L43,   L44,   KC_NO, L46,   L47,   L48 }, \
                                                              \
  { R00,   R01,   R02,   R03,   R04,   R05,   R06,   R07,   KC_NO }, \
  { R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17,   KC_NO }, \
  { R20,   R21,   R22,   R23,   R24,   R25,   R26,   KC_NO, KC_NO }, \
  { R30,   R31,   R32,   R33,   R34,   R35,   KC_NO, KC_NO, KC_NO }, \
  { R40,   R41,   R42,   R43,   R44,   R45,   R46,   KC_NO, KC_NO }  \
}
