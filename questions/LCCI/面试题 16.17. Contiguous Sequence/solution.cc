#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int pre = 0, maxAns = nums[0];
    for (int x : nums) {
      pre = max(pre + x, x);
      maxAns = max(maxAns, pre);
    }
    return maxAns;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << "Input:  " << array_show(nums) << endl;
  Solution solution;
  cout << "Output: " << solution.maxSubArray(nums) << endl;
  return EXIT_SUCCESS;
}
