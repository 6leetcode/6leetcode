DIRS = "Algorithms/0066.\ Plus\ One" "Algorithms/0006.\ ZigZag\ Conversion" "Algorithms/0011.\ Container\ With\ Most\ Water" "Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithms/0012.\ Integer\ to\ Roman" "Algorithms/0001.\ Two\ Sum" "Algorithms/0319.\ Bulb\ Switcher" "Algorithms/0458.\ Poor\ Pigs" "Algorithms/0007.\ Reverse\ Integer"
run: ${DIRS}
${DIRS}:
	make -C $@ golang
