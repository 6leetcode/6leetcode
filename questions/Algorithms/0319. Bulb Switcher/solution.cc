#include <cmath>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int bulbSwitch(int n) {
    return (int)sqrt(n);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 16;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.bulbSwitch(input) << endl;
  return EXIT_SUCCESS;
}
