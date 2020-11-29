#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

class Solution {
public:
  int mySqrt(int x) {
    if (x < 2) return x;

    int left = (int)pow(M_E, 0.5 * log(x));
    int right = left + 1;
    return (long)right * right > x ? left : right;
  }
};

int main(int argc, char const *argv[]) {
  int input = 8;
  cout << "Input:  " << input << endl;
  Solution solution;
  int output = solution.mySqrt(input);
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
