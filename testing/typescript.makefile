DIRS = "questions/Algorithms/0001.\ Two\ Sum" "questions/Algorithms/0002.\ Add\ Two\ Numbers" "questions/Algorithms/0003.\ Longest\ Substring\ Without\ Repeating\ Characters" "questions/Algorithms/0004.\ Median\ of\ Two\ Sorted\ Arrays" "questions/Algorithms/0005.\ Longest\ Palindromic\ Substring" "questions/Algorithms/0006.\ ZigZag\ Conversion" "questions/Algorithms/0007.\ Reverse\ Integer" "questions/Algorithms/0008.\ String\ to\ Integer\ (atoi)" "questions/Algorithms/0009.\ Palindrome\ Number" "questions/Algorithms/0010.\ Regular\ Expression\ Matching" "questions/Algorithms/0258.\ Add\ Digits"
run: ${DIRS}
${DIRS}:
	make -C $@ typescript
