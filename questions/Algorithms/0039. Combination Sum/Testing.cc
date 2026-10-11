#include <iostream>
#include <vector>

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
        continue;
      }
      cur.push_back(candidates[i]);
      dfs(candidates, target - candidates[i], i, cur, res);
      cur.pop_back();
    }
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    vector<vector<int>> res;
    vector<int> cur;
    dfs(candidates, target, 0, cur, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {2, 3, 6, 7};
  int input2 = 7;
  cout << "Input:  " << matrix_show(vector<vector<int>>{input1}) << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.combinationSum(input1, input2)) << endl;
  return EXIT_SUCCESS;
}
