#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (nums.size() == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
      if (nums[j] != nums[i]) {
        i++;
        nums[i] = nums[j];
      }
    }
    return i + 1;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  cout << "Input:  " << vector_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.removeDuplicates(input) << endl;
  return EXIT_SUCCESS;
}
