#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    long long k = 0;
    int n = x;
    while (n > 0) {
      k = k * 10 + n % 10;
      n /= 10;
    }
    return k == x;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 121;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << (solution.isPalindrome(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
