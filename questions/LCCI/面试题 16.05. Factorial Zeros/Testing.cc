#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int trailingZeroes(int n) {
    int count = 0;
    while (n >= 5) {
      n /= 5;
      count += n;
    }
    return count;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.trailingZeroes(input) << endl;
  return EXIT_SUCCESS;
}
