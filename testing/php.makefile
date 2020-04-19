DIRS = "Algorithm/0006.\ ZigZag\ Conversion" "Algorithm/0004.\ Median\ of\ Two\ Sorted\ Arrays" "Algorithm/0002.\ Add\ Two\ Numbers" "Algorithm/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ php
