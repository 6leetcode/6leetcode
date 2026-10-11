#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string countAndSay(int n) {
    string prev = "1";
    for (int i = 2; i <= n; ++i) {
      string curr = "";
      int start = 0;
      int pos = 0;

      while (pos < prev.size()) {
        while (pos < prev.size() && prev[pos] == prev[start]) {
          pos++;
        }
        curr += to_string(pos - start) + prev[start];
        start = pos;
      }
      prev = curr;
    }

    return prev;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  int input = 4;
  cout << "Input: " << input << endl;
  string output = solution.countAndSay(input);
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
