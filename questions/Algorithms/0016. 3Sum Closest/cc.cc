#include <algorithm>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int ans = nums[0] + nums[1] + nums[nums.size() - 1];
    for (int i = 0; i < nums.size(); i++) {
      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right) {
        int temp = nums[i] + nums[left] + nums[right];
        if (abs(target - ans) > abs(target - temp)) {
          ans = temp;
        }
        if (target - temp > 0) {
          left++;
        } else {
          right--;
        }
      }
    }
    return ans;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {-1, 2, 1, -4};
  int input2 = 1;
  cout << "Input:  " << array_show(input1) << endl;
  Solution solution;
  cout << "Output: " << solution.threeSumClosest(input1, input2) << endl;
  return EXIT_SUCCESS;
}
