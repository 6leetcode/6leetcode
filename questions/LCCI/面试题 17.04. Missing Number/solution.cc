#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int missingNumber(vector<int> &nums) {
    int res = nums.size();
    for (int i = 0; i < (int)nums.size(); i++) res ^= i ^ nums[i];
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  cout << "Input:  " << array_show(nums) << endl;
  Solution solution;
  cout << "Output: " << solution.missingNumber(nums) << endl;
  return EXIT_SUCCESS;
}
