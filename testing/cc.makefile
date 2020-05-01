DIRS = "Algorithms/0101.\ Symmetric\ Tree" "Algorithms/0326.\ Power\ of\ Three" "Algorithms/0344.\ Reverse\ String" "Algorithms/0169.\ Majority\ Element" "Algorithms/0231.\ Power\ of\ Two" "Algorithms/0037.\ Sudoku\ Solver" "Algorithms/0067.\ Add\ Binary" "Algorithms/0136.\ Single\ Number" "Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithms/0069.\ Sqrt(x)" "Algorithms/0050.\ Pow(x,\ n)" "Algorithms/0012.\ Integer\ to\ Roman" "Algorithms/0070.\ Climbing\ Stairs" "Algorithms/0013.\ Roman\ to\ Integer" "Algorithms/0100.\ Same\ Tree" "Algorithms/0696.\ Count\ Binary\ Substrings" "Algorithms/0001.\ Two\ Sum" "Algorithms/0319.\ Bulb\ Switcher" "Algorithms/0679.\ 24\ Game" "Algorithms/0458.\ Poor\ Pigs" "Algorithms/0007.\ Reverse\ Integer"
run: ${DIRS}
${DIRS}:
	make -C $@ cc
