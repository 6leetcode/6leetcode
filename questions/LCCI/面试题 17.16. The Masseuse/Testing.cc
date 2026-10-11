#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int massage(vector<int> &nums) {
    int prev = 0, cur = 0;
    for (int x : nums) {
      int tmp = cur;
      cur = max(cur, prev + x);
      prev = tmp;
    }
    return cur;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 2, 3, 1};
  cout << "Input:  " << array_show(nums) << endl;
  Solution solution;
  cout << "Output: " << solution.massage(nums) << endl;
  return EXIT_SUCCESS;
}
