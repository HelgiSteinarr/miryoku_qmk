// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#if defined(KEYBOARD_beekeeb_piantor) && defined(UNICODEMAP_ENABLE)

#ifndef UNICODE_SELECTED_MODES
  #define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS
#endif

#include "icelandic_unicode.h"

#define MIRYOKU_MAPPING_PIANTOR_ICELANDIC_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_NO,       K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  IS_ETH,   \
IS_O_UMLAUT, K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  IS_AE,    \
MO(U_ISV_BASE), K20, K21, K22, K23, K24,          K25,  K26,  K27,  K28,  K29,  IS_THORN, \
                           K32,  K33,  K34,       K35,  K36,  K37 \
)

#define MIRYOKU_MAPPING_PIANTOR_ICELANDIC_EXTRA( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_NO,        K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  IS_ETH,   \
IS_O_UMLAUT,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  IS_AE,    \
MO(U_ISV_EXTRA), K20, K21, K22, K23, K24,          K25,  K26,  K27,  K28,  K29,  IS_THORN, \
                            K32,  K33,  K34,       K35,  K36,  K37 \
)

#define MIRYOKU_PIANTOR_VOWELS_COLEMAKDH \
LAYOUT_split_3x6_3( \
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, IS_U_ACUTE, IS_Y_ACUTE, KC_TRNS, KC_TRNS, \
KC_TRNS, IS_A_ACUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, IS_E_ACUTE, IS_I_ACUTE, IS_O_ACUTE, KC_TRNS, \
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                           KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS \
)

#define MIRYOKU_PIANTOR_VOWELS_QWERTY \
LAYOUT_split_3x6_3( \
KC_TRNS, KC_TRNS, KC_TRNS, IS_E_ACUTE, KC_TRNS, KC_TRNS,      IS_Y_ACUTE, IS_U_ACUTE, IS_I_ACUTE, IS_O_ACUTE, KC_TRNS, KC_TRNS, \
KC_TRNS, IS_A_ACUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                           KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS \
)

#if defined(MIRYOKU_ALPHAS_QWERTY)
  #define MIRYOKU_PIANTOR_VOWELS_BASE MIRYOKU_PIANTOR_VOWELS_QWERTY
#else
  #define MIRYOKU_PIANTOR_VOWELS_BASE MIRYOKU_PIANTOR_VOWELS_COLEMAKDH
#endif

#if defined(MIRYOKU_EXTRA_COLEMAKDH)
  #define MIRYOKU_PIANTOR_VOWELS_EXTRA MIRYOKU_PIANTOR_VOWELS_COLEMAKDH
#else
  #define MIRYOKU_PIANTOR_VOWELS_EXTRA MIRYOKU_PIANTOR_VOWELS_QWERTY
#endif

// Apply the extra six Piantor keys only to the typing layers.
#define MIRYOKU_LAYERMAPPING_BASE  MIRYOKU_MAPPING_PIANTOR_ICELANDIC_BASE
#define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_MAPPING_PIANTOR_ICELANDIC_EXTRA

#endif
