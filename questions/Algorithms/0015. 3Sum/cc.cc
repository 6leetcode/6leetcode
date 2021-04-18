#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>
#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        return ans;
      }
      if (i > 0 and nums[i] == nums[i - 1]) {
        continue;
      }
      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right) {
        int temp = nums[i] + nums[left] + nums[right];
        if (temp < 0) {
          left++;
        } else if (temp > 0) {
          right--;
        } else {
          ans.push_back({nums[i], nums[left], nums[right]});
          while (left < right && nums[left] == nums[left + 1])
            left++;
          while (left < right && nums[right] == nums[right - 1])
            right--;
          left++;
          right--;
        }
      }
    }
    return ans;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {4, -10, -11, -12, -8, -12, -14, -11, -6, 2, -4, 2, 3, 12, -3, -12, -14, -12, -8, -9, -6, -3, 10, 2, 14, 10, 7, -7, -9, 0, -9, 10, -2, -5, 14, 5, -9, 7, 9, 0, -14, 12, 10, 4, 9, -8, 8, 11, -5, -15, -13, -3, -11, 4, 14, 11, -1, -2, -11, 5, 14, -4, -8, -3, 6, -9, 9, 12, 6, 3, -10, 7, 0, -15, -3, -13, -8, 12, 13, -5, 12, -15, 7, 8, -4, -2, 4, 2, 3, 9, -8, 2, -10, -1, 6, 3, -2, 0, -7, 11, -12, -2, 3, -4, -2, 7, -2, -3, 4, -12, -1, 1, 10, 13, -5, -9, -12, 6, 8, 7, 0, 7, -6, 5, 13, 8, -14, -12};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.threeSum(input)) << endl;
  return EXIT_SUCCESS;
}
