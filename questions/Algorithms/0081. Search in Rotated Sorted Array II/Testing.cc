#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool search(vector<int> &nums, int target) {
    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (nums[mid] == target) return true;
      if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
        lo++;
        hi--;
      } else if (nums[lo] <= nums[mid]) {
        if (nums[lo] <= target && target < nums[mid]) {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else {
        if (nums[mid] < target && target <= nums[hi]) {
          lo = mid + 1;
        } else {
          hi = mid - 1;
        }
      }
    }
    return false;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {2, 5, 6, 0, 0, 1, 2};
  int target = 0;
  cout << "Input:  " << array_show(input) << " " << target << endl;
  Solution solution;
  cout << "Output: " << (solution.search(input, target) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
