#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string addBinary(string a, string b) {
    int len_a = a.size();
    int len_b = b.size();

    int len = len_a > len_b ? len_a : len_b;

    string res = "";

    int upper = 0;
    while (len_a > 0 || len_b > 0) {
      int an = len_a > 0 ? a[--len_a] - '0' : 0;
      int bn = len_b > 0 ? b[--len_b] - '0' : 0;
      if (an + bn + upper == 3) {
        res = "1" + res;
        upper = 1;
      } else if (an + bn + upper == 2) {
        res = "0" + res;
        upper = 1;
      } else if (an + bn + upper == 1) {
        res = "1" + res;
        upper = 0;
      } else if (an + bn + upper == 0) {
        res = "0" + res;
        upper = 0;
      }
      len--;
    }
    if (upper == 1) {
      res = "1" + res;
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input1 = "1011";
  string input2 = "111";
  cout << "Input:  " << input1 << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << solution.addBinary(input1, input2) << endl;
  return EXIT_SUCCESS;
}
