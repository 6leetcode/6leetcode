DIRS = "Algorithm/0003.\ Longest\ Substring\ Without\ Repeating\ Characters" "Algorithm/0050.\ Pow(x,\ n)" "Algorithm/0001.\ Two\ Sum" "Algorithm/0002.\ Add\ Two\ Numbers" "Algorithm/0458.\ Poor\ Pigs"
run: ${DIRS}
${DIRS}:
	make -C $@ java
