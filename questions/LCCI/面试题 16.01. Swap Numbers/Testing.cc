#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void swapNumbers(vector<int> &numbers) {
    numbers[0] ^= numbers[1];
    numbers[1] ^= numbers[0];
    numbers[0] ^= numbers[1];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 2};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  solution.swapNumbers(input);
  cout << "Output: " << array_show(input) << endl;
  return EXIT_SUCCESS;
}
