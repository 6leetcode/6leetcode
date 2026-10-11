#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int search(vector<int> &nums, int lo, int hi) {
    if (lo > hi) return -1;
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] == mid) return mid;
    int res = search(nums, lo, min(mid - 1, nums[mid]));
    if (res != -1) return res;
    return search(nums, max(mid + 1, nums[mid]), hi);
  }

public:
  int findMagicIndex(vector<int> &nums) { return search(nums, 0, nums.size() - 1); }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 1, 1};
  cout << "Input:  [1, 1, 1]" << endl;
  Solution solution;
  cout << "Output: " << solution.findMagicIndex(nums) << endl;
  return EXIT_SUCCESS;
}
