C:
	@for file in *.c; do \
		$(CC) -o `echo $$file | cut -d. -f1`.test $$file; \
		./`echo $$file | cut -d. -f1`.test; \
		$(RM) `echo $$file | cut -d. -f1`.test; \
	done

C++:
	@for file in *.c; do \
		$(CXX) -o `echo $$file | cut -d. -f1`.test $$file; \
		./`echo $$file | cut -d. -f1`.test; \
		$(RM) `echo $$file | cut -d. -f1`.test; \
	done
