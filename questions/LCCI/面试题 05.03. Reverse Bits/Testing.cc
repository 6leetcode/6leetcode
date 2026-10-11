#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int reverseBits(int num) {
    int best = 0, prev = 0, cur = 0;
    for (int i = 0; i < 32; i++) {
      if ((num >> i) & 1) {
        cur++;
      } else {
        best = max(best, prev + cur + 1);
        prev = cur;
        cur = 0;
      }
    }
    best = max(best, prev + cur + 1);
    return min(best, 32);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 1775;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.reverseBits(input) << endl;
  return EXIT_SUCCESS;
}
