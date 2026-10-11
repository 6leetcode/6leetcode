#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int multiply(int A, int B) {
    if (A < B) return multiply(B, A);
    if (B == 0) return 0;
    if (B == 1) return A;
    if (B & 1) return A + multiply(A, B - 1);
    return multiply(A << 1, B >> 1);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int A = 3, B = 4;
  cout << "Input:  A = " << A << ", B = " << B << endl;
  Solution solution;
  cout << "Output: " << solution.multiply(A, B) << endl;
  return EXIT_SUCCESS;
}
