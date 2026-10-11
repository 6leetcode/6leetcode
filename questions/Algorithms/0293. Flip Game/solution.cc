#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> generatePossibleNextMoves(string s) {
    int n = s.size();
    vector<string> res;
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == '+' && s[i + 1] == '+') {
        string tmp = s;
        tmp[i] = '-';
        tmp[i + 1] = '-';
        res.push_back(tmp);
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "++++";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.generatePossibleNextMoves(input)) << endl;
  return EXIT_SUCCESS;
}
