DIRS = "Algorithms/0003.\ Longest\ Substring\ Without\ Repeating\ Characters" "Algorithms/0050.\ Pow(x,\ n)" "Algorithms/0001.\ Two\ Sum" "Algorithms/0002.\ Add\ Two\ Numbers" "Algorithms/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ java
