#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int lowerBound(vector<int> &nums, int target) {
    int lo = 0, hi = nums.size();
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      if (nums[mid] < target) {
        lo = mid + 1;
      } else {
        hi = mid;
      }
    }
    return lo;
  }

public:
  vector<int> searchRange(vector<int> &nums, int target) {
    int lo = lowerBound(nums, target);
    int hi = lowerBound(nums, target + 1) - 1;
    if (lo < (int)nums.size() && nums[lo] == target) {
      return {lo, hi};
    }
    return {-1, -1};
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {5, 7, 7, 8, 8, 10};
  int input2 = 8;
  cout << "Input:  " << array_show(input1) << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.searchRange(input1, input2)) << endl;
  return EXIT_SUCCESS;
}
