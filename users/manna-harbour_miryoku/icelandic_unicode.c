#include QMK_KEYBOARD_H

#include "icelandic_unicode.h"

#if defined(KEYBOARD_beekeeb_piantor) && defined(UNICODEMAP_ENABLE)

const uint32_t unicode_map[] PROGMEM = {
    [ISU_THORN_LOWER]    = 0x00FE, // þ
    [ISU_THORN_UPPER]    = 0x00DE, // Þ
    [ISU_ETH_LOWER]      = 0x00F0, // ð
    [ISU_ETH_UPPER]      = 0x00D0, // Ð
    [ISU_AE_LOWER]       = 0x00E6, // æ
    [ISU_AE_UPPER]       = 0x00C6, // Æ
    [ISU_A_ACUTE_LOWER]  = 0x00E1, // á
    [ISU_A_ACUTE_UPPER]  = 0x00C1, // Á
    [ISU_E_ACUTE_LOWER]  = 0x00E9, // é
    [ISU_E_ACUTE_UPPER]  = 0x00C9, // É
    [ISU_I_ACUTE_LOWER]  = 0x00ED, // í
    [ISU_I_ACUTE_UPPER]  = 0x00CD, // Í
    [ISU_O_ACUTE_LOWER]  = 0x00F3, // ó
    [ISU_O_ACUTE_UPPER]  = 0x00D3, // Ó
    [ISU_U_ACUTE_LOWER]  = 0x00FA, // ú
    [ISU_U_ACUTE_UPPER]  = 0x00DA, // Ú
    [ISU_Y_ACUTE_LOWER]  = 0x00FD, // ý
    [ISU_Y_ACUTE_UPPER]  = 0x00DD, // Ý
    [ISU_O_UMLAUT_LOWER] = 0x00F6, // ö
    [ISU_O_UMLAUT_UPPER] = 0x00D6, // Ö
};

#endif
