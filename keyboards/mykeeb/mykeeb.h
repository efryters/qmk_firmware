/* Copyright 2021 efryters
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
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
    k00, k01, k02, k03, \
    k10, k12, k13, k14, \
    k20, k21, k22, k23, \
    k30, k31, k32,      \
    k40, k41, k42,      \
    k50, k51, k52      \
) { \
    {k00, k01, k02, k03},   \
    {k10, k12, k13, k14},   \
    {k20, k21, k22, k23},   \
    {k30, k31, k32, KC_NO}, \
    {k40, k41, k42, KC_NO}, \
    {k50, k51, k52, KC_NO} \
}


/*
rc    c0   c1   c2   c3
    -----------------
r0    [] - [] - [] - []
r1    [] - [] - [] - []
r2    [] - [] - [] - []
r3    [] - [] - [] - xx
r4    [] - [] - [] - xx
r5    [] - [] - [] - xx
*/

/*

rc    c0   c1   c2   c3
    -----------------
r0    [] - [] - [] - []
r1    [] - [] - [] - []
r2    [] - [] - [] - []
r3    [4] - [5] - [1]
r4    [6] - [5] - [3]
r5    [] - [] - []
*/
/*
rc    c0   c1   c2   c3
    -----------------
r0    [] - [] - [] - []
r1    [] - [] - [] - []
r2    [] - [] - [] - []
r3    [SW113] - [SW114] - [SW115]
r4    [SW116] - [SW117] - [SW118]
r5    [SW119] - [SW120] - [SW121]
*/