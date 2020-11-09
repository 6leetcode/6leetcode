CXXFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow -std=c++17
LDFLAGS   += -lm

CXX_SRCS = $(wildcard *.cc)
CXX_OUTS = $(patsubst %.cc, %.out, $(CXX_SRCS))

.PHONY: test
test: $(CXX_OUTS)

%.out : %.cc
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)
	@./$@

.PHONY: clean
clean:
	$(RM) -rf *.out *.dSYM
