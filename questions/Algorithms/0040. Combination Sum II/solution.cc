#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>
#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void dfs(vector<int> &candidates, int target, int start, vector<int> &cur, vector<vector<int>> &res) {
    if (target == 0) {
      res.push_back(cur);
      return;
    }
    for (int i = start; i < (int)candidates.size(); i++) {
      if (candidates[i] > target) {
        break;
      }
      if (i > start && candidates[i] == candidates[i - 1]) {
        continue;
      }
      cur.push_back(candidates[i]);
      dfs(candidates, target - candidates[i], i + 1, cur, res);
      cur.pop_back();
    }
  }

public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> res;
    vector<int> cur;
    dfs(candidates, target, 0, cur, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {10, 1, 2, 7, 6, 1, 5};
  int input2 = 8;
  cout << "Input:  " << array_show(input1) << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.combinationSum2(input1, input2)) << endl;
  return EXIT_SUCCESS;
}
