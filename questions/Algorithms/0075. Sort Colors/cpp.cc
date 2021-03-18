#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int n = nums.size();
    int ptr = 0;
    for (int i = 0; i < n; ++i) {
      if (nums[i] == 0) {
        swap(nums[i], nums[ptr]);
        ++ptr;
      }
    }
    for (int i = ptr; i < n; ++i) {
      if (nums[i] == 1) {
        swap(nums[i], nums[ptr]);
        ++ptr;
      }
    }
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {2, 0, 2, 1, 1, 0};
  cout << "Input:  " << vector_show(input) << endl;
  Solution solution;
  solution.sortColors(input);
  cout << "Output: " << vector_show(input) << endl;
  return 0;
}
