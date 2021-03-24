DIRS = "questions/Algorithms/0001.\ Two\ Sum" "questions/Algorithms/0002.\ Add\ Two\ Numbers" "questions/Algorithms/0003.\ Longest\ Substring\ Without\ Repeating\ Characters" "questions/Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "questions/Algorithms/0005.\ Longest\ Palindromic\ Substring" "questions/Algorithms/0006.\ ZigZag\ Conversion" "questions/Algorithms/0007.\ Reverse\ Integer" "questions/Algorithms/0008.\ String\ to\ Integer\ (atoi)" "questions/Algorithms/0009.\ Palindrome\ Number" "questions/Algorithms/0010.\ Regular\ Expression\ Matching" "questions/Algorithms/0011.\ Container\ With\ Most\ Water" "questions/Algorithms/0012.\ Integer\ to\ Roman" "questions/Algorithms/0013.\ Roman\ to\ Integer" "questions/Algorithms/0014.\ Longest\ Common\ Prefix" "questions/Algorithms/0015.\ 3Sum" "questions/Algorithms/0016.\ 3Sum\ Closest" "questions/Algorithms/0021.\ Merge\ Two\ Sorted\ Lists" "questions/Algorithms/0031.\ Next\ Permutation" "questions/Algorithms/0036.\ Valid\ Sudoku" "questions/Algorithms/0037.\ Sudoku\ Solver" "questions/Algorithms/0046.\ Permutations" "questions/Algorithms/0048.\ Rotate\ Image" "questions/Algorithms/0050.\ Pow(x,\ n)" "questions/Algorithms/0061.\ Rotate\ List" "questions/Algorithms/0066.\ Plus\ One" "questions/Algorithms/0067.\ Add\ Binary" "questions/Algorithms/0069.\ Sqrt(x)" "questions/Algorithms/0070.\ Climbing\ Stairs" "questions/Algorithms/0089.\ Gray\ Code" "questions/Algorithms/0100.\ Same\ Tree" "questions/Algorithms/0101.\ Symmetric\ Tree" "questions/Algorithms/0136.\ Single\ Number" "questions/Algorithms/0169.\ Majority\ Element" "questions/Algorithms/0204.\ Count\ Primes" "questions/Algorithms/0205.\ Isomorphic\ Strings" "questions/Algorithms/0226.\ Invert\ Binary\ Tree" "questions/Algorithms/0231.\ Power\ of\ Two" "questions/Algorithms/0263.\ Ugly\ Number" "questions/Algorithms/0283.\ Move\ Zeroes" "questions/Algorithms/0292.\ Nim\ Game" "questions/Algorithms/0319.\ Bulb\ Switcher" "questions/Algorithms/0326.\ Power\ of\ Three" "questions/Algorithms/0344.\ Reverse\ String" "questions/Algorithms/0458.\ Poor\ Pigs" "questions/Algorithms/0493.\ Reverse\ Pairs" "questions/Algorithms/0498.\ Diagonal\ Traverse" "questions/Algorithms/0514.\ Freedom\ Trail" "questions/Algorithms/0679.\ 24\ Game" "questions/Algorithms/0696.\ Count\ Binary\ Substrings" "questions/Algorithms/0877.\ Stone\ Game" "questions/Algorithms/0922.\ Sort\ Array\ By\ Parity\ II" "questions/Algorithms/0976.\ Largest\ Perimeter\ Triangle"
run: ${DIRS}
${DIRS}:
	make -C $@ c
