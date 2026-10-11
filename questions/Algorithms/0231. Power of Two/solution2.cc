#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isPowerOfTwo(int n) {
    return n <= 0 ? false : (n & (n - 1)) == 0;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 16;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.isPowerOfTwo(input) << endl;
  return EXIT_SUCCESS;
}
