DIRS = "Algorithm/0101.\ Symmetric\ Tree" "Algorithm/0326.\ Power\ of\ Three" "Algorithm/0344.\ Reverse\ String" "Algorithm/0169.\ Majority\ Element" "Algorithm/0231.\ Power\ of\ Two" "Algorithm/0037.\ Sudoku\ Solver" "Algorithm/0136.\ Single\ Number" "Algorithm/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithm/0050.\ Pow(x,\ n)" "Algorithm/0012.\ Integer\ to\ Roman" "Algorithm/0070.\ Climbing\ Stairs" "Algorithm/0013.\ Roman\ to\ Integer" "Algorithm/0100.\ Same\ Tree" "Algorithm/0696.\ Count\ Binary\ Substrings" "Algorithm/0001.\ Two\ Sum" "Algorithm/0319.\ Bulb\ Switcher" "Algorithm/0679.\ 24\ Game" "Algorithm/0458.\ Poor\ Pigs" "Algorithm/0007.\ Reverse\ Integer"
run: ${DIRS}
${DIRS}:
	make -C $@ cc
