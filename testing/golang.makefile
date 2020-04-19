DIRS = "Algorithm/0066.\ Plus\ One" "Algorithm/0006.\ ZigZag\ Conversion" "Algorithm/0011.\ Container\ With\ Most\ Water" "Algorithm/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithm/0012.\ Integer\ to\ Roman" "Algorithm/0001.\ Two\ Sum" "Algorithm/0319.\ Bulb\ Switcher" "Algorithm/0458.\ Poor\ Pigs" "Algorithm/0007.\ Reverse\ Integer"
run: ${DIRS}
${DIRS}:
	make -C $@ golang
