#include <iostream>
#include <vector>

#include <cc/array.hpp>
#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void backtrack(vector<vector<int>> &res, vector<int> &output, int first, int len) {
    // 所有数都填完了
    if (first == len) {
      res.emplace_back(output);
      return;
    }
    for (int i = first; i < len; ++i) {
      // 动态维护数组
      swap(output[i], output[first]);
      // 继续递归填下一个数
      backtrack(res, output, first + 1, len);
      // 撤销操作
      swap(output[i], output[first]);
    }
  }
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> res;
    backtrack(res, nums, 0, (int)nums.size());
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 2, 3};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.permute(input)) << endl;
  return EXIT_SUCCESS;
}
