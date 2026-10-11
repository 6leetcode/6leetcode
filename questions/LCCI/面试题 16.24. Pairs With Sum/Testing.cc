#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> pairSums(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int i = 0, j = nums.size() - 1;
    while (i < j) {
      int sum = nums[i] + nums[j];
      if (sum < target) {
        i++;
      } else if (sum > target) {
        j--;
      } else {
        res.push_back({nums[i], nums[j]});
        i++;
        j--;
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {5, 6, 5, 6};
  int target = 11;
  cout << "Input:  nums = [5,6,5,6], target = 11" << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.pairSums(nums, target)) << endl;
  return EXIT_SUCCESS;
}
