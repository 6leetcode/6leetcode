DIRS = "questions/Algorithms/0001.\ Two\ Sum" "questions/Algorithms/0007.\ Reverse\ Integer" "questions/Algorithms/0012.\ Integer\ to\ Roman" "questions/Algorithms/0037.\ Sudoku\ Solver" "questions/Algorithms/0066.\ Plus\ One" "questions/Algorithms/0070.\ Climbing\ Stairs" "questions/Algorithms/0169.\ Majority\ Element" "questions/Algorithms/0292.\ Nim\ Game" "questions/Algorithms/0319.\ Bulb\ Switcher" "questions/Algorithms/0344.\ Reverse\ String" "questions/Algorithms/0458.\ Poor\ Pigs" "questions/Algorithms/0679.\ 24\ Game" "questions/Algorithms/0696.\ Count\ Binary\ Substrings" "questions/Algorithms/0877.\ Stone\ Game"
run: ${DIRS}
${DIRS}:
	make -C $@ rust
