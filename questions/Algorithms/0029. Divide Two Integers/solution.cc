#include <climits>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
      return INT_MAX;
    }
    long long a = llabs((long long)dividend);
    long long b = llabs((long long)divisor);
    int sign = ((dividend > 0) ^ (divisor > 0)) ? -1 : 1;
    long long res = 0;
    while (a >= b) {
      long long temp = b, multiple = 1;
      while (a >= (temp << 1)) {
        temp <<= 1;
        multiple <<= 1;
      }
      a -= temp;
      res += multiple;
    }
    return (int)(sign * res);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int dividend = 10, divisor = 3;
  cout << "Input:  " << dividend << " " << divisor << endl;
  Solution solution;
  cout << "Output: " << solution.divide(dividend, divisor) << endl;
  return EXIT_SUCCESS;
}
