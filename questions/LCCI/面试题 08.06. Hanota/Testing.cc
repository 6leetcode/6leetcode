#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void hanoi(vector<int> &src, vector<int> &aux, vector<int> &dst, int n) {
    if (n == 0) return;
    hanoi(src, dst, aux, n - 1);
    dst.push_back(src.back());
    src.pop_back();
    hanoi(aux, src, dst, n - 1);
  }

public:
  void hanota(vector<int> &A, vector<int> &B, vector<int> &C) {
    hanoi(A, B, C, A.size());
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> A = {2, 1, 0}, B, C;
  cout << "Input:  A = [2, 1, 0], B = [], C = []" << endl;
  Solution solution;
  solution.hanota(A, B, C);
  cout << "Output: C = [";
  for (size_t i = 0; i < C.size(); i++) cout << (i == 0 ? "" : ", ") << C[i];
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
