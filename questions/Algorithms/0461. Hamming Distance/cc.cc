#include <iostream>

using namespace std;

// -------------------------------solution begin-------------------------------
class Solution {
public:
  int hammingDistance(int x, int y) {
    return __builtin_popcount(x ^ y);
  }
};
// -------------------------------solution end---------------------------------

int main(int argc, char const *argv[]) {
  int input1 = 1, input2 = 4;
  cout << "Input:  " << input1 << ", " << input2 << endl;
  Solution solution;
  cout << "Output: " << solution.hammingDistance(input1, input2) << endl;
  return EXIT_SUCCESS;
}
