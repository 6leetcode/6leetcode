#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int convertInteger(int A, int B) {
    return __builtin_popcount((unsigned int)(A ^ B));
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int A = 29, B = 15;
  cout << "Input:  A = " << A << ", B = " << B << endl;
  Solution solution;
  cout << "Output: " << solution.convertInteger(A, B) << endl;
  return EXIT_SUCCESS;
}
