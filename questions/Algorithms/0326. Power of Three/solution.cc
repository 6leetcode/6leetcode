#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 27;
  cout << "Input:  " << input << endl;
  Solution solution;
  string output = solution.isPowerOfThree(input) ? "true" : "false";
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
