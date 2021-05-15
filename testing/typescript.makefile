DIRS = "questions/Algorithms/0001.\ Two\ Sum" "questions/Algorithms/0258.\ Add\ Digits"
run: ${DIRS}
${DIRS}:
	make -C $@ typescript
