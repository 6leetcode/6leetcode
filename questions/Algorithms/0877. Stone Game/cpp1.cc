#include <iostream>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool stoneGame(vector<int> &piles) {
    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 2, 3, 4};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << (solution.stoneGame(input) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
