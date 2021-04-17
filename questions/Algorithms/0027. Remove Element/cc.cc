#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] != val) {
        nums[i] = nums[j];
        i++;
      }
    }
    return i;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {3, 2, 2, 3};
  int input2 = 3;
  cout << "Input:  " << vector_show(input1) << ", " << input2 << endl;
  Solution solution;
  cout << "Output: " << solution.removeElement(input1, input2) << endl;
  return EXIT_SUCCESS;
}
