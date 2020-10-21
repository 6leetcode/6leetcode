CFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow
LDFLAGS += -lm

test: ListNode

ListNode:
	$(CC) $(CFLAGS) -o $@.test $@.c $(LDFLAGS)
	@./$@.test

clean:
	$(RM) *.test *.out