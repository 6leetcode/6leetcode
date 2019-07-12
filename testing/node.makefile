DIRS = "questions/Algorithms/0012.\ Integer\ to\ Roman" "questions/Algorithms/0319.\ Bulb\ Switcher" "questions/Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ node
