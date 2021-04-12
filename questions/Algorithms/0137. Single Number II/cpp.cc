#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int ones = 0, twos = 0;
    for (int num : nums) {
      ones = ones ^ num & ~twos;
      twos = twos ^ num & ~ones;
    }
    return ones;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {0, 1, 0, 1, 0, 1, 99};
  cout << "Input: " << vector_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.singleNumber(input) << endl;
  return EXIT_SUCCESS;
}
