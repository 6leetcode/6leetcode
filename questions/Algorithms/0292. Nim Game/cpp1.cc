#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool canWinNim(int n) {
    return n % 4 != 0;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 4;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.canWinNim(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
