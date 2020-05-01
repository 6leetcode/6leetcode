#include <iostream>

using namespace std;

class Solution {
public:
  static double fast_pow(double x, int32_t n) {
    if (n == 0) { return 1.0; }
    if (n == 1) { return x; }
    double t = fast_pow(x, n / 2);
    return n & 1 ? t * t * x : t * t;
  }
  double myPow(double x, int n) {
    return n < 0 ? 1 / fast_pow(x, -(int32_t)(n)) : fast_pow(x, (int32_t)n);
  }
};

int main(int argc, char const *argv[]) {
  Solution solution;
  double x = 2;
  int n    = -8;
  cout << "Input:  " << x << ", " << n << endl;
  cout << "Output: " << solution.myPow(2, -8) << endl;
  return EXIT_SUCCESS;
}
