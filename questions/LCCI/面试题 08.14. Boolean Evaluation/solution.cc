#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  unordered_map<string, long long> memo;

  long long solve(const string &s, int i, int j, int want) {
    if (i == j) return (s[i] - '0') == want ? 1 : 0;
    string key = to_string(i) + "," + to_string(j) + "," + to_string(want);
    if (memo.count(key)) return memo[key];
    long long total = 0;
    for (int k = i + 1; k < j; k += 2) {
      char op = s[k];
      long long l0 = solve(s, i, k - 1, 0), l1 = solve(s, i, k - 1, 1);
      long long r0 = solve(s, k + 1, j, 0), r1 = solve(s, k + 1, j, 1);
      long long t, f;
      if (op == '&') {
        t = l1 * r1;
        f = (l0 + l1) * (r0 + r1) - t;
      } else if (op == '|') {
        f = l0 * r0;
        t = (l0 + l1) * (r0 + r1) - f;
      } else {
        t = l0 * r1 + l1 * r0;
        f = l0 * r0 + l1 * r1;
      }
      total += want ? t : f;
    }
    return memo[key] = total;
  }

public:
  int countEval(string s, int result) {
    memo.clear();
    return (int)solve(s, 0, s.size() - 1, result);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string s = "1^0|0|1";
  int result = 0;
  cout << "Input:  s = " << s << ", result = " << result << endl;
  Solution solution;
  cout << "Output: " << solution.countEval(s, result) << endl;
  return EXIT_SUCCESS;
}
