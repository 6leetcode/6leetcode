#include <iostream>
#include <vector>

#include <matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans(numRows);
    if (numRows == 0)
      return ans;
    for (int i = 0; i < numRows; ++i) {
      ans[i].resize(i + 1);
      ans[i][0] = 1;
      ans[i][i] = 1;
      if (i > 1) {
        for (int j = 1; j <= i >> 1; ++j) {
          ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
          ans[i][i - j] = ans[i][j];
        }
      }
    }
    return ans;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 5;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << matrix_show(solution.generate(input)) << endl;
  return EXIT_SUCCESS;
}
