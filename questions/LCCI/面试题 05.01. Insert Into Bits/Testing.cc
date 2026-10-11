#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int insertBits(int N, int M, int i, int j) {
    unsigned int mask = ((1u << (j - i + 1)) - 1) << i;
    N = (int)((unsigned int)N & ~mask);
    N |= (M << i);
    return N;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int N = 1024, M = 19, i = 2, j = 6;
  cout << "Input:  N = 10000000000, M = 10011, i = 2, j = 6" << endl;
  Solution solution;
  cout << "Output: " << solution.insertBits(N, M, i, j) << endl;
  return EXIT_SUCCESS;
}
