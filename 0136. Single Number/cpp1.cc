#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (i != 0) {
        result ^= nums[i];
      } else {
        result = nums[0];
      }
    }
    return result;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> input = {4, 1, 2, 1, 2};
  cout << "Input: [";
  for (int i = 0; i < input.size(); i++) {
    cout << input[i];
    if (i < input.size() - 1) {
      cout << " ";
    }
  }
  cout << "]" << endl;
  Solution solution;
  cout << "Output: " << solution.singleNumber(input) << endl;
  return EXIT_SUCCESS;
}
