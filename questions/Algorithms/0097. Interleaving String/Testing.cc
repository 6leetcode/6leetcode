#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isInterleave(string s1, string s2, string s3) {
    auto f = vector<vector<int>>(s1.size() + 1, vector<int>(s2.size() + 1, false));

    int n = s1.size(), m = s2.size(), t = s3.size();

    if (n + m != t) {
      return false;
    }

    f[0][0] = true;
    for (int i = 0; i <= n; ++i) {
      for (int j = 0; j <= m; ++j) {
        int p = i + j - 1;
        if (i > 0) {
          f[i][j] |= (f[i - 1][j] && s1[i - 1] == s3[p]);
        }
        if (j > 0) {
          f[i][j] |= (f[i][j - 1] && s2[j - 1] == s3[p]);
        }
      }
    }

    return f[n][m];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input1 = "aabcc";
  string input2 = "dbbca";
  string input3 = "aadbbbaccc";
  cout << "Input:  " << input1 << ", " << input2 << ", " << input3 << endl;
  Solution solution;
  cout << "Output: " << (solution.isInterleave(input1, input2, input3) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
