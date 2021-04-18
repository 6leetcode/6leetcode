#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool canJump(vector<int> &nums) {
    int n = nums.size();
    int rightmost = 0;
    for (int i = 0; i < n; ++i) {
      if (i <= rightmost) {
        rightmost = max(rightmost, i + nums[i]);
        if (rightmost >= n - 1) {
          return true;
        }
      }
    }
    return false;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {3, 2, 1, 0, 4};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << (solution.canJump(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
