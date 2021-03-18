#include <cstdlib>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int climbStairs(int n) {
    int prev = 0;
    int cur  = 1;
    for (int i = 1; i <= n; ++i) {
      int tmp = cur;
      cur += prev;
      prev = tmp;
    }
    return cur;
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
