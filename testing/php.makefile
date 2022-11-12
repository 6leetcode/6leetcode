DIRS = "questions/Algorithms/0001.\ Two\ Sum" "questions/Algorithms/0002.\ Add\ Two\ Numbers" "questions/Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "questions/Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ php
