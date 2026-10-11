#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> drawLine(int length, int w, int x1, int x2, int y) {
    vector<int> res(length, 0);
    int perRow = w / 32;
    for (int x = x1; x <= x2; x++) {
      int group = y * perRow + x / 32;
      int bit = 31 - (x % 32);
      res[group] |= (1 << bit);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int length = 1, w = 32, x1 = 30, x2 = 31, y = 0;
  cout << "Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0" << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.drawLine(length, w, x1, x2, y)) << endl;
  return EXIT_SUCCESS;
}
