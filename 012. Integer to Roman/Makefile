C:
	@for file in *.c; do \
		$(CC) -Os -g -fsanitize=address -o `echo $$file | cut -d. -f1`.test $$file; \
		./`echo $$file | cut -d. -f1`.test; \
		$(RM) -rf `echo $$file | cut -d. -f1`.test *.dSYM; \
	done

C++:
	@for file in *.cpp; do \
		$(CXX) -Os -g -fsanitize=address -o `echo $$file | cut -d. -f1`.test $$file; \
		./`echo $$file | cut -d. -f1`.test; \
		$(RM) -rf `echo $$file | cut -d. -f1`.test *.dSYM; \
	done
