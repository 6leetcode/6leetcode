#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int n = nums.size(), left = 0, right = 0;
    while (right < n) {
      if (nums[right]) {
        swap(nums[left], nums[right]);
        left++;
      }
      right++;
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {0, 1, 0, 3, 12};
  cout << "Output: " << array_show(input) << endl;
  Solution solution;
  solution.moveZeroes(input);
  cout << "Output: " << array_show(input) << endl;
  return EXIT_SUCCESS;
}
