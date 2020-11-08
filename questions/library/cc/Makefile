CXXFLAGS  += -I. -Os -g3 -Wall -fsanitize=address,signed-integer-overflow -std=c++11
LDFLAGS += -lm

test: vector

vector:
	$(CXX) $(CXXFLAGS) -o $@.test $@.cc $(LDFLAGS)
	@./$@.test

clean:
	$(RM) *.test *.out