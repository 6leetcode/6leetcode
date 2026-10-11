#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maximum(int a, int b) {
    long long diff = (long long)a - b;
    int k = (int)(diff >> 63) & 1;
    return a * (1 - k) + b * k;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a = 1, b = 2;
  cout << "Input:  a = " << a << ", b = " << b << endl;
  Solution solution;
  cout << "Output: " << solution.maximum(a, b) << endl;
  return EXIT_SUCCESS;
}
