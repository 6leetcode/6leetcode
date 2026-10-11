#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>
#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  vector<int> vis;

public:
  void backtrack(vector<int> &nums, vector<vector<int>> &ans, int idx, vector<int> &perm) {
    if (idx == nums.size()) {
      ans.emplace_back(perm);
      return;
    }
    for (int i = 0; i < (int)nums.size(); ++i) {
      if (vis[i] || (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1])) {
        continue;
      }
      perm.emplace_back(nums[i]);
      vis[i] = 1;
      backtrack(nums, ans, idx + 1, perm);
      vis[i] = 0;
      perm.pop_back();
    }
  }

  vector<vector<int>> permuteUnique(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> perm;
    vis.resize(nums.size());
    sort(nums.begin(), nums.end());
    backtrack(nums, ans, 0, perm);
    return ans;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 2, 3, 4, 5};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.permuteUnique(input)) << endl;
  return EXIT_SUCCESS;
}
