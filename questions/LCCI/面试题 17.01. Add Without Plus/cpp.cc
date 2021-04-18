#include <iostream>

using namespace std;

class Solution {
public:
  int add(int a, int b) {
    if (a == 0) {
      return b;
    } else if (b == 0) {
      return a;
    }
    int sum = 0;
    unsigned int carry = 0;
    while (b != 0) {
      sum = (a ^ b);
      carry = (unsigned int)(a & b) << 1;
      a = sum;
      b = carry;
    }
    return a;
  }
};

int main(int argc, char const *argv[]) {
  int input1 = -1;
  int input2 = 2;
  cout << "Input:  " << input1 << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << solution.add(input1, input2) << endl;
  return EXIT_SUCCESS;
}
