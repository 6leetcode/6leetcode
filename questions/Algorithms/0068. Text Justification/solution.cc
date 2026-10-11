#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> fullJustify(vector<string> &words, int maxWidth) {
    vector<string> res;
    int i = 0, n = words.size();
    while (i < n) {
      int j = i, len = 0;
      while (j < n && len + (int)words[j].size() + (j - i) <= maxWidth) {
        len += words[j].size();
        j++;
      }
      int count = j - i;
      string line;
      if (j == n || count == 1) {
        for (int k = i; k < j; k++) {
          if (k > i) line += ' ';
          line += words[k];
        }
        line += string(maxWidth - line.size(), ' ');
      } else {
        int totalChars = 0;
        for (int k = i; k < j; k++) totalChars += words[k].size();
        int gaps = count - 1;
        int spaces = maxWidth - totalChars;
        int base = spaces / gaps, extra = spaces % gaps;
        for (int k = i; k < j; k++) {
          line += words[k];
          if (k != j - 1) {
            int sp = base + (k - i < extra ? 1 : 0);
            line += string(sp, ' ');
          }
        }
      }
      res.push_back(line);
      i = j;
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> input = {"This", "is", "an", "example", "of", "text", "justification."};
  int maxWidth = 16;
  cout << "Input:  [This, is, an, example, of, text, justification.] " << maxWidth << endl;
  Solution solution;
  vector<string> res = solution.fullJustify(input, maxWidth);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
