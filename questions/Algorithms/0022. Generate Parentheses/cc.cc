#include <iostream>
#include <vector>

#include <vector.hpp>

using namespace std;

class Solution {
  void backtrack(vector<string> &ans, string &cur, int open, int close, int n) {
    if (cur.size() == n * 2) {
      ans.push_back(cur);
      return;
    }
    if (open < n) {
      cur.push_back('(');
      backtrack(ans, cur, open + 1, close, n);
      cur.pop_back();
    }
    if (close < open) {
      cur.push_back(')');
      backtrack(ans, cur, open, close + 1, n);
      cur.pop_back();
    }
  }

public:
  vector<string> generateParenthesis(int n) {
    vector<string> result;
    string current;
    backtrack(result, current, 0, 0, n);
    return result;
  }
};

int main(int argc, char const *argv[]) {
  int input = 3;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << vector_show(solution.generateParenthesis(input)) << endl;
  return EXIT_SUCCESS;
}
