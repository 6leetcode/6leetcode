DIRS = "questions/Shell/0192.\ Word\ Frequency" "questions/Shell/0193.\ Valid\ Phone\ Numbers" "questions/Shell/0194.\ Transpose\ File" "questions/Shell/0195.\ Tenth\ Line"
run: ${DIRS}
${DIRS}:
	make -C $@ bash
