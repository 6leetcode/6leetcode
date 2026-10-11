#include <iostream>

using namespace std;

class Solution {
public:
  bool isPowerOfTwo(int n) {
    int cnt = 0; //num of bits 1
    for (; n > 0; n >>= 1) {
      if (n & 1) {
        cnt++;
        if (cnt > 1) return false;
      }
    }
    return cnt == 1;
  }
};

int main(int argc, char const *argv[]) {
  int input = 16;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.isPowerOfTwo(input) << endl;
  return EXIT_SUCCESS;
}
