DIRS = "Algorithms/0012.\ Integer\ to\ Roman" "Algorithms/0319.\ Bulb\ Switcher" "Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ node
