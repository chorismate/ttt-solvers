/*
 * algor.c: algorithmic tic-tac-toe weak solver
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
 *
 *
 */

#include<assert.h>
#include<inttypes.h>
#include<stdio.h>

/* Board
 * 0 1 2
 * 3 4 5
 * 6 7 8
 */

/* For each:
 * -4: The opponent has a win on that line.
 * -3: The opponent has 2 on that line.
 * -2: The opponent has 1 on that line.
 * -1: The line is empty.
 * 1: The line is blocked (has at least 1 of each color).
 * 2: The current player has 1 on that line.
 * 3: The current player has 2 on that line.
 * 4: The current player has a win on that line.
 */
int8_t linevalue(int8_t a, int8_t b, int8_t c) {
	assert(-1<=a && a<=1 && -1<=b && b<=1 && -1<=c && c<=1);

	switch(a + b + c) {
		case  3:
			return 4;
			break;
		case -3:
			return -4;
			break;
		case  2:
			return 3;
			break;
		case -2:
			return -3;
			break;
		case  1:
			if(!a || !b || !c) return 2;
			else               return 1;
			break;
		case -1:
			if(!a || !b || !c) return -2;
			else               return 1;
			break;
		case  0:
			if(!a && !b && !c) return -1;
			else               return 1;
			break;
	}
}

/* Returns an pointer to an array of 8 int8_t:
 * 0: 0-1-2
 * 1: 3-4-5
 * 2: 6-7-8
 * 3: 0-3-6
 * 4: 1-4-7
 * 5: 2-5-8
 * 6: 0-4-8
 * 7: 2-4-6
 */
int8_t *get_aligns(int8_t *state) {
	int8_t *arrayptr = malloc(8*sizeof(int8_t));
	
	for(int8_t i=0; i<=2; i++)
		arrayptr[i] = linevalue(state[i*3], state[(i*3)+1], state[(i*3)+2]);
	for(int8_t i=0; i<=2;i++)
		arrayptr[i+3] = linevalue(state[i], state[i+3], state[i+6]);
	arrayptr[6] = linevalue(state[0], state[4], state[8]);
	arrayptr[7] = linevalue(state[2], state[4], state[6]);
	
	return arrayptr;
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
