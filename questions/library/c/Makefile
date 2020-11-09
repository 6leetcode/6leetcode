CFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow
LDFLAGS += -lm

test: ListNode matrix

ListNode:
	$(CC) $(CFLAGS) -o $@.test $@.c $(LDFLAGS)
	@./$@.test

matrix:
	$(CC) $(CFLAGS) -o $@.test $@.c $(LDFLAGS)
	@./$@.test

clean:
	$(RM) -rf *.test *.out *.dSYM
