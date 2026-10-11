#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void merge(vector<int> &A, int m, vector<int> &B, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0) {
      if (i >= 0 && A[i] > B[j]) {
        A[k--] = A[i--];
      } else {
        A[k--] = B[j--];
      }
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> A = {1, 2, 3, 0, 0, 0};
  vector<int> B = {2, 5, 6};
  int m = 3, n = 3;
  cout << "Input:  A = " << array_show(A) << ", m = " << m << "; B = " << array_show(B) << ", n = " << n << endl;
  Solution solution;
  solution.merge(A, m, B, n);
  cout << "Output: " << array_show(A) << endl;
  return EXIT_SUCCESS;
}
