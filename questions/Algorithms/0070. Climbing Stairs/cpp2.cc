#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int climbStairs(int n) {
    // with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
    const double s = sqrt(5);
    return floor((pow((1 + s) / 2, n + 1) + pow((1 - s) / 2, n + 1)) / s + 0.5);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 10;
  cout << "Input: " << input << endl;
  Solution solution;
  int output = solution.climbStairs(input);
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
