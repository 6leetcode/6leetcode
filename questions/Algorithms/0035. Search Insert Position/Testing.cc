#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
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
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {1, 3, 5, 6};
  int input2 = 5;
  cout << "Input:  " << array_show(input1) << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << solution.searchInsert(input1, input2) << endl;
  return EXIT_SUCCESS;
}
