DIRS = "questions/Algorithms/0012.\ Integer\ to\ Roman" "questions/Algorithms/0292.\ Nim\ Game" "questions/Algorithms/0319.\ Bulb\ Switcher" "questions/Algorithms/0458.\ Poor\ Pigs" "questions/Algorithms/0514.\ Freedom\ Trail" "questions/Algorithms/0877.\ Stone\ Game" "questions/Algorithms/0976.\ Largest\ Perimeter\ Triangle"
run: ${DIRS}
${DIRS}:
	make -C $@ javascript
