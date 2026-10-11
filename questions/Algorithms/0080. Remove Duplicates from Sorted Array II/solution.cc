#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (nums.size() <= 2) return nums.size();
    int i = 2;
    for (int j = 2; j < (int)nums.size(); j++) {
      if (nums[j] != nums[i - 2]) {
        nums[i] = nums[j];
        i++;
      }
    }
    return i;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 1, 1, 2, 2, 3};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  int k = solution.removeDuplicates(input);
  vector<int> out(input.begin(), input.begin() + k);
  cout << "Output: " << k << ", " << array_show(out) << endl;
  return EXIT_SUCCESS;
}
