#include <climits>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> getMaxMatrix(vector<vector<int>> &matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    long long best = LLONG_MIN;
    vector<int> res(4, 0);
    for (int top = 0; top < rows; top++) {
      vector<int> colSum(cols, 0);
      for (int bottom = top; bottom < rows; bottom++) {
        for (int j = 0; j < cols; j++) colSum[j] += matrix[bottom][j];
        long long cur = 0;
        int start = 0;
        for (int j = 0; j < cols; j++) {
          if (cur <= 0) {
            cur = colSum[j];
            start = j;
          } else {
            cur += colSum[j];
          }
          if (cur > best) {
            best = cur;
            res = {top, start, bottom, j};
          }
        }
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> matrix = {{-1, 0, 0}, {0, -1, 0}};
  cout << "Input:  [[-1,0,0],[0,-1,0]]" << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.getMaxMatrix(matrix)) << endl;
  return EXIT_SUCCESS;
}
