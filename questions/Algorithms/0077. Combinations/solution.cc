#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  void dfs(int n, int k, int start, vector<int> &cur, vector<vector<int>> &res) {
    if ((int)cur.size() == k) {
      res.push_back(cur);
      return;
    }
    for (int i = start; i <= n; i++) {
      cur.push_back(i);
      dfs(n, k, i + 1, cur, res);
      cur.pop_back();
    }
  }

public:
  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> cur;
    dfs(n, k, 1, cur, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int n = 4, k = 2;
  cout << "Input:  " << n << " " << k << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.combine(n, k)) << endl;
  return EXIT_SUCCESS;
}
