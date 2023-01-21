# ttt-solvers
A collection of tic-tac-toe solvers in the public domain, intended as a reference for more complex programs.

***This is a work in progress.***

## Files
- `algor.c`: Algorithmic solver using [this algorithm](https://en.wikipedia.org/w/index.php?title=Tic-tac-toe&oldid=1130823137#Strategy). This is a sample and is practically useless for adapting to other games.
- `negamax.c`: Brute-force negamax solver.
- `bitboards.c`: Brute-force negamax solver with bitboards.
- `alphabeta.c`: Negamax solver with bitboards and alpha-beta pruning.

## Compiling
```sh
cc -O3 program.c -o program.out
```
where `program` is the name of the solver program you're compiling.

## Benchmarking
To be done once all the programs are completed.
