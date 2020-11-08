CXXFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow -std=c++11
LDFLAGS += -lm

test: vector ListNode

vector:
	$(CXX) $(CXXFLAGS) -o $@.test $@.cc $(LDFLAGS)
	@./$@.test

ListNode:
	$(CXX) $(CXXFLAGS) -o $@.test $@.cc $(LDFLAGS)
	@./$@.test

clean:
	$(RM) *.test *.out
