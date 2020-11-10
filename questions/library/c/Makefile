CFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow
LDFLAGS += -lm

C_SRCS = $(wildcard *.c)
C_OUTS = $(patsubst %.c, %, $(C_SRCS))

.PHONY: test
test: $(C_OUTS)
	$(foreach out, $?, ./$(out);)
	@$(MAKE) clean

.PHONY: clean
clean:
	$(RM) -rf $(C_OUTS) *.dSYM
