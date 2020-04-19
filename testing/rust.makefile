DIRS = "Algorithm/0344.\ Reverse\ String" "Algorithm/0169.\ Majority\ Element" "Algorithm/0012.\ Integer\ to\ Roman" "Algorithm/0696.\ Count\ Binary\ Substrings" "Algorithm/0319.\ Bulb\ Switcher" "Algorithm/0679.\ 24\ Game" "Algorithm/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ rust
