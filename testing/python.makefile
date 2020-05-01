DIRS = "Algorithms/0066.\ Plus\ One" "Algorithms/0344.\ Reverse\ String" "Algorithms/0233.\ Number\ of\ Digit\ One" "Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithms/0001.\ Two\ Sum" "Algorithms/0319.\ Bulb\ Switcher" "Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ python
