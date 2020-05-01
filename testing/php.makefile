DIRS = "Algorithms/0006.\ ZigZag\ Conversion" "Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithms/0002.\ Add\ Two\ Numbers" "Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ php
