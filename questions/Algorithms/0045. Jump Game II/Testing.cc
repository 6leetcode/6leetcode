#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int jump(vector<int> &nums) {
    int jumps = 0, curEnd = 0, farthest = 0;
    for (int i = 0; i < (int)nums.size() - 1; i++) {
      farthest = max(farthest, i + nums[i]);
      if (i == curEnd) {
        jumps++;
        curEnd = farthest;
      }
    }
    return jumps;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {2, 3, 1, 1, 4};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.jump(input) << endl;
  return EXIT_SUCCESS;
}
