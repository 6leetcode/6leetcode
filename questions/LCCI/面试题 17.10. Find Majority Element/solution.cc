#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int candidate = nums[0], count = 0;
    for (int x : nums) {
      if (count == 0) candidate = x;
      count += (x == candidate) ? 1 : -1;
    }
    int c = 0;
    for (int x : nums) if (x == candidate) c++;
    return c > (int)nums.size() / 2 ? candidate : -1;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 2, 5, 9, 5, 9, 5, 5, 5};
  cout << "Input:  " << array_show(nums) << endl;
  Solution solution;
  cout << "Output: " << solution.majorityElement(nums) << endl;
  return EXIT_SUCCESS;
}
