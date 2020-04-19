DIRS = "Algorithm/0012.\ Integer\ to\ Roman" "Algorithm/0319.\ Bulb\ Switcher" "Algorithm/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ node
