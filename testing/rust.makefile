DIRS = "Algorithms/0344.\ Reverse\ String" "Algorithms/0169.\ Majority\ Element" "Algorithms/0037.\ Sudoku\ Solver" "Algorithms/0012.\ Integer\ to\ Roman" "Algorithms/0696.\ Count\ Binary\ Substrings" "Algorithms/0319.\ Bulb\ Switcher" "Algorithms/0679.\ 24\ Game" "Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ rust
