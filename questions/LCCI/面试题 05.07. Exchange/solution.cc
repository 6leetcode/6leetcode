#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int exchangeBits(int num) {
    unsigned int n = (unsigned int)num;
    return (int)(((n & 0xaaaaaaaau) >> 1) | ((n & 0x55555555u) << 1));
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 2;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.exchangeBits(input) << endl;
  return EXIT_SUCCESS;
}
