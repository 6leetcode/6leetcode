#include <cmath>
#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> grayCode(int n) {
    vector<int> res;
    for (int i = 0; i < pow(2, n); ++i) {
      res.push_back((i >> 1) ^ i);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 2;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.grayCode(input)) << endl;
  return EXIT_SUCCESS;
}
