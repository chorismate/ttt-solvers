/*
 * algor.c: algorithmic tic-tac-toe solver
 *            (as a reference for the negamax-based solvers)
 * Written in 2023 by Chorismate <me@chorismate.dev>
 *
 * To the extent possible under law, the author(s) have dedicated all copyright
 * and related and neighboring rights to this software to the public domain
 * worldwide. This software is distributed without any warranty.
 *
 * You should have received a copy of the CC0 Public Domain Dedication along
 * with this software. If not, see
 * <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

#include<inttypes.h>
#include<stdio.h>

/* Board
 * 0 1 2
 * 3 4 5
 * 6 7 8
 */

/* Returns an pointer to an array of 8 uint8_t:
 * 0: 0-1-2
 * 1: 3-4-5
 * 2: 6-7-8
 * 3: 0-3-6
 * 4: 1-4-7
 * 5: 2-5-8
 * 6: 0-4-8
 * 7: 2-4-6
 * For each:
 * 0: The line is empty.
 * 1: The line is blocked (has at least 1 of each color).
 * 2: The current player has 1 on that line.
 * 3: The current player has 2 on that line.
 * 4: The current player has a win on that line.
 * 5: The opponent has 1 on that line.
 * 6: The opponent has 2 on that line.
 * 7: The opponent has a win on that line.
 */
uint8_t* get_aligns(uint8_t *state) {
}

/* Takes an pointer to an array of 9 uint8_t,
 * returns best move in grid as a uint8_t
 */
uint8_t algor(uint8_t *state) {
}

/* Main */
int main(void) {
	return 0;
}
