CFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow
LDFLAGS += -lm

C_SRCS = $(wildcard *.c)
C_OUTS = $(patsubst %.c, %.out, $(C_SRCS))
# CXX_SRCS = $(wildcard src/*.cpp)
# CXX_OUTS = $(patsubst %.cpp, %, $(CXX_SRCS))

.PHONY: test
test: $(C_OUTS)

%.out : %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)
	@./$@

.PHONY: clean
clean:
	$(RM) -rf *.out *.dSYM
