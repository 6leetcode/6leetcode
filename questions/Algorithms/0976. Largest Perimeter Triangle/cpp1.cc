#include <algorithm>
#include <iostream>

#include <vector.hpp>

using namespace std;

class Solution {
public:
  int largestPerimeter(vector<int> &A) {
    sort(A.begin(), A.end());
    for (int i = (int)A.size() - 1; i >= 2; --i) {
      if (A[i - 2] + A[i - 1] > A[i]) {
        return A[i - 2] + A[i - 1] + A[i];
      }
    }
    return 0;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> input = {3, 6, 2, 3};
  cout << "Input:  " << vector_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.largestPerimeter(input) << endl;
  return EXIT_SUCCESS;
}
