#include <iostream>
#include <string>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string convert(string s, int numRows) {
    if (numRows == 1) return s;
    int n = s.size();
    int cycle = 2 * numRows - 2;
    string ret;
    for (int i = 0; i < numRows; i++) {
      for (int j = 0; i + j < n; j += cycle) {
        ret += s[i + j];
        if (i != 0 && i != numRows - 1 && j + cycle - i < n) {
          ret += s[j + cycle - i];
        }
      }
    }
    return ret;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "PAYPALISHIRING";
  int rows = 3;
  cout << "Input:  " << input << " " << rows << endl;
  Solution solution;
  cout << "Output: " << solution.convert(input, rows) << endl;
  return EXIT_SUCCESS;
}
