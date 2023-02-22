/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ º │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ¡ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ` │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ñ │ ´ │ Ç │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_MORD (GRAV ) // º
#define ES_1    (N1   ) // 1
#define ES_2    (N2   ) // 2
#define ES_3    (N3   ) // 3
#define ES_4    (N4   ) // 4
#define ES_5    (N5   ) // 5
#define ES_6    (N6   ) // 6
#define ES_7    (N7   ) // 7
#define ES_8    (N8   ) // 8
#define ES_9    (N9   ) // 9
#define ES_0    (N0   ) // 0
#define ES_QUOT (MINUS) // '
#define ES_IEXL (EQL ) // ¡
// Row 2
#define ES_Q    (Q   ) // Q
#define ES_W    (W   ) // W
#define ES_E    (E   ) // E
#define ES_R    (R   ) // R
#define ES_T    (T   ) // T
#define ES_Y    (Y   ) // Y
#define ES_U    (U   ) // U
#define ES_I    (I   ) // I
#define ES_O    (O   ) // O
#define ES_P    (P   ) // P
#define ES_GRAV (LBKT) // ` (dead)
#define ES_PLUS (RBKT) // +>*-%
// Row 3
#define ES_A    (A   ) // A
#define ES_S    (S   ) // S
#define ES_D    (D   ) // D
#define ES_F    (F   ) // F
#define ES_G    (G   ) // G
#define ES_H    (H   ) // H
#define ES_J    (J   ) // J
#define ES_K    (K   ) // K
#define ES_L    (L   ) // L
#define ES_NTIL (SCLN) // Ñ
#define ES_ACUT (QUOT) // ´ (dead)
#define ES_CCED (NUHS) // Ç
// Row 4
#define ES_LT    (NUBS) // <
#define ES_Z     (Z   ) // Z
#define ES_X     (X   ) // X
#define ES_C     (C   ) // C
#define ES_V     (V   ) // V
#define ES_B     (B   ) // B
#define ES_N     (N   ) // N
#define ES_M     (M   ) // M
#define ES_CMMA  (CMMA) // ,
#define ES_DOT   (DOT ) // .
#define ES_MINUS (FSLH) // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ª │ ! │ " │ · │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ¿ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ^ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ¨ │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_FORD  (LS(ES_MORD)) // ª
#define ES_EXCL  (LS(ES_1)   ) // !
#define ES_DQT   (LS(ES_2)   ) // "
#define ES_BULT  (LS(ES_3)   ) // ·
#define ES_DLLR  (LS(ES_4)   ) // $
#define ES_PRCNT (LS(ES_5)   ) // %
#define ES_AMPS  (LS(ES_6)   ) // &
#define ES_FSLH  (LS(ES_7)   ) // /
#define ES_LPRN  (LS(ES_8)   ) // (
#define ES_RPRN  (LS(ES_9)   ) // )
#define ES_EQL   (LS(ES_0)   ) // =
#define ES_QMARK (LS(ES_QUOT)) // ?
#define ES_IQMRK (LS(ES_IEXL)) // ¿
// Row 2
#define ES_CIRC  (LS(ES_GRAV))  // ^ (dead)
#define ES_ASTRK (LS(ES_PLUS)) // *
// Row 3
#define ES_DIAE  (LS(ES_ACUT)) // ¨ (dead)
// Row 4
#define ES_GT   (LS(ES_LT)) // >
#define ES_SCLN (LS(CMMA) ) // ;
#define ES_COLN (LS(DOT)  ) // :
#define ES_UNDS (LS(ES_MINUS)) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │ | │ @ │ # │ ~ │ € │ ¬ │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ { │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_BSLS  (RA(ES_MORD)) // (backslash)
#define ES_PIPE  (RA(ES_1)   ) // |
#define ES_AT    (RA(ES_2)   ) // @
#define ES_HASH  (RA(ES_3)   ) // #
#define ES_TILDE (RA(ES_4)   ) // ~
#define ES_EURO  (RA(ES_5)   ) // €
#define ES_NOT   (RA(ES_6)   ) // ¬
// Row 2 
#define ES_LBRC  (RA(ES_GRAV)) // [
#define ES_RBRC  (RA(ES_PLUS)) // ]
// Row 3 
#define ES_LCBR  (RA(ES_ACUT)) // {
#define ES_RCBR  (RA(ES_CCED)) // }
