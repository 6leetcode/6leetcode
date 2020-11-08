DIRS = "questions/Algorithms/0066.\ Plus\ One" "questions/Algorithms/0121.\ Best\ Time\ to\ Buy\ and\ Sell\ Stock" "questions/Algorithms/0344.\ Reverse\ String" "questions/Algorithms/0233.\ Number\ of\ Digit\ One" "questions/Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "questions/Algorithms/0001.\ Two\ Sum" "questions/Algorithms/0319.\ Bulb\ Switcher" "questions/Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ python
