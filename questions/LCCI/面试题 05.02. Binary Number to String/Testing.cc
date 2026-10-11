#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string printBin(double num) {
    string res = "0.";
    while (num > 0 && res.size() < 32) {
      num *= 2;
      if (num >= 1) {
        res += '1';
        num -= 1;
      } else {
        res += '0';
      }
    }
    return num > 0 ? "ERROR" : res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  double input = 0.625;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.printBin(input) << endl;
  return EXIT_SUCCESS;
}
