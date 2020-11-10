CXXFLAGS += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow -std=c++17
LDFLAGS  += -lm

CXX_SRCS = $(wildcard *.cc)
CXX_OUTS = $(patsubst %.cc, %, $(CXX_SRCS))

.PHONY: test
test: $(CXX_OUTS)

.PHONY: clean
clean:
	$(RM) -rf $(CXX_OUTS) *.dSYM
