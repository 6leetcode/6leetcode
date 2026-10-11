#include <iostream>
#include <vector>

#include <cc/matrix.hpp>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
  void weave(vector<int> &l, int li, vector<int> &r, int ri, vector<int> &prefix, vector<vector<int>> &res) {
    if (li == (int)l.size() && ri == (int)r.size()) {
      res.push_back(prefix);
      return;
    }
    if (li < (int)l.size()) {
      prefix.push_back(l[li]);
      weave(l, li + 1, r, ri, prefix, res);
      prefix.pop_back();
    }
    if (ri < (int)r.size()) {
      prefix.push_back(r[ri]);
      weave(l, li, r, ri + 1, prefix, res);
      prefix.pop_back();
    }
  }

public:
  vector<vector<int>> BSTSequences(TreeNode *root) {
    if (!root) return {{}};
    vector<vector<int>> left = BSTSequences(root->left);
    vector<vector<int>> right = BSTSequences(root->right);
    vector<vector<int>> res;
    for (auto &l : left) {
      for (auto &r : right) {
        vector<int> prefix = {root->val};
        weave(l, 0, r, 0, prefix, res);
      }
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n2(2), n1(1), n3(3);
  n2.left = &n1;
  n2.right = &n3;
  cout << "Input:  [2, 1, 3]" << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.BSTSequences(&n2)) << endl;
  return EXIT_SUCCESS;
}
