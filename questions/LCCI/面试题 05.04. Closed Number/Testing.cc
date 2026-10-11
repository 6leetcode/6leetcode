#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int nextBigger(int num) {
    int c = num, c0 = 0, c1 = 0;
    while (c && !(c & 1)) {
      c0++;
      c >>= 1;
    }
    while (c & 1) {
      c1++;
      c >>= 1;
    }
    if (c0 + c1 >= 31) return -1;
    int p = c0 + c1;
    num |= (1 << p);
    num &= ~((1 << p) - 1);
    num |= (1 << (c1 - 1)) - 1;
    return num;
  }

  int nextSmaller(int num) {
    int c = num, c0 = 0, c1 = 0;
    while (c & 1) {
      c1++;
      c >>= 1;
    }
    if (c == 0) return -1;
    while (c && !(c & 1)) {
      c0++;
      c >>= 1;
    }
    int p = c0 + c1;
    num &= ~((1 << (p + 1)) - 1);
    num |= ((1 << (c1 + 1)) - 1) << (c0 - 1);
    return num;
  }

public:
  vector<int> findClosedNumbers(int num) {
    return {nextBigger(num), nextSmaller(num)};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 2;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.findClosedNumbers(input)) << endl;
  return EXIT_SUCCESS;
}
