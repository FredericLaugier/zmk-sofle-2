/* Copyright 2015-2016 Jack Humbert
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

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_SQUARE           GRAVE              // ²
#define FR_AMPERSAND        N1                 // &
#define FR_E_ACUTE          N2                 // é
#define FR_DQUOT            N3                 // "
#define FR_SQUOT            N4                 // '
#define FR_LPAR             N5                 // (
#define FR_MINUS            N6                 // -
#define FR_E_GRAVE          N7                 // è
#define FR_UNDER            N8                 // _
#define FR_C_CEDILLA        N9                 // ç
#define FR_A_GRAVE          N0                 // à
#define FR_RPAR             MINUS              // )
#define FR_EQUAL            EQUAL              // =
// Row 2
#define FR_A                Q                  // A
#define FR_Z                W                  // Z
#define FR_E                E                  // E
#define FR_R                R                  // R
#define FR_T                T                  // T
#define FR_Y                Y                  // Y
#define FR_U                U                  // U
#define FR_I                I                  // I
#define FR_O                O                  // O
#define FR_P                P                  // P
#define FR_CIRC             LBKT               // ^ (dead)
#define FR_DOLLAR           RBKT               // $
// Row 3
#define FR_Q                A                  // Q
#define FR_S                S                  // S
#define FR_D                D                  // D
#define FR_F                F                  // F
#define FR_G                G                  // G
#define FR_H                H                  // H
#define FR_J                J                  // J
#define FR_K                K                  // K
#define FR_L                L                  // L
#define FR_M                SEMI               // M
#define FR_U_GRAVE          SQT                // ù
#define FR_ASTERISK         STAR               // *
// Row 4
#define FR_LT               STAR               // <
#define FR_W                Z                  // W
#define FR_X                X                  // X
#define FR_C                C                  // C
#define FR_V                V                  // V
#define FR_B                B                  // B
#define FR_N                N                  // N
#define FR_COMMA            M                  // ,
#define FR_SEMICOLON        COMMA              // ;
#define FR_COLON            DOT                // :
#define FR_EXCL             SLASH              // !

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_1                LS(FR_AMPERSAND)  // 1
#define FR_2                LS(FR_E_ACUTE)    // 2
#define FR_3                LS(FR_DQUOT)      // 3
#define FR_4                LS(FR_SQUOT)      // 4
#define FR_5                LS(FR_LPAR)       // 5
#define FR_6                LS(FR_MINUS)      // 6
#define FR_7                LS(FR_E_GRAVE)    // 7
#define FR_8                LS(FR_UNDER)      // 8
#define FR_9                LS(FR_C_CEDILLA)  // 9
#define FR_0                LS(FR_A_GRAVE)    // 0
#define FR_DEGREE           LS(FR_RPRN)       // °
#define FR_PLUS             LS(FR_EQUAL)      // +
// Row 2
#define FR_UMLAUT           LS(FR_CIRC)       // ¨ (dead)
#define FR_POUND_SIGN       LS(FR_DOLLAR)     // £
// Row 3
#define FR_PERCENT          LS(FR_U_GRAVE)    // %
#define FR_MICRO            LS(FR_ASTERISK)   // µ
// Row 4
#define FR_GT               LS(FR_LT)         // >
#define FR_QUESTION         LS(FR_COMM)       // ?
#define FR_DOT              LS(FR_SEMICOLON)  // .
#define FR_SLASH            LS(FR_COLON)      // /
#define FR_SECTION          LS(FR_EXCL)       // §

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │   │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_TILDE            RA(FR_E_ACUTE)    // ~ (dead)
#define FR_HASH             RA(FR_DQUOT)      // #
#define FR_LCBR             RA(FR_SQUOT)      // {
#define FR_LBKT             RA(FR_LPAR)       // [
#define FR_PIPE             RA(FR_MINUS)      // |
#define FR_GRAVE            RA(FR_E_GRAVE)    // ` (dead)
#define FR_BACKSLASH        RA(FR_UNDER)      // (backslash)
#define FR_AT               RA(FR_A_GRAVE)    // @
#define FR_RBKT             RA(FR_RPRN)       // ]
#define FR_RCBR             RA(FR_EQUAL)        // }
// Row 2
#define FR_EURO             RA(E)             // €
#define FR_CURR             RA(FR_DLR)        // ¤
