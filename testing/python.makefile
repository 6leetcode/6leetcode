DIRS = "Algorithm/0066.\ Plus\ One" "Algorithm/0344.\ Reverse\ String" "Algorithm/0233.\ Number\ of\ Digit\ One" "Algorithm/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithm/0001.\ Two\ Sum" "Algorithm/0319.\ Bulb\ Switcher" "Algorithm/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ python
