#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void dfs(vector<int> &nums, int start, vector<int> &cur, vector<vector<int>> &res) {
    res.push_back(cur);
    for (int i = start; i < (int)nums.size(); i++) {
      if (i > start && nums[i] == nums[i - 1]) continue;
      cur.push_back(nums[i]);
      dfs(nums, i + 1, cur, res);
      cur.pop_back();
    }
  }

public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    vector<int> cur;
    dfs(nums, 0, cur, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 2, 2};
  cout << "Input:  [1, 2, 2]" << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.subsetsWithDup(input)) << endl;
  return EXIT_SUCCESS;
}
