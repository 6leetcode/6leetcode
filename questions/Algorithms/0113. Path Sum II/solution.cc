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
  void dfs(TreeNode *node, int remain, vector<int> &path, vector<vector<int>> &res) {
    if (!node) return;
    path.push_back(node->val);
    remain -= node->val;
    if (!node->left && !node->right) {
      if (remain == 0) res.push_back(path);
    } else {
      dfs(node->left, remain, path, res);
      dfs(node->right, remain, path, res);
    }
    path.pop_back();
  }

public:
  vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
    vector<vector<int>> res;
    vector<int> path;
    dfs(root, targetSum, path, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n7(7), n2(2), n11(11), n13(13), n5r(5), n1(1), n4b(4), n4a(4), n8(8), root1(5);
  n11.left = &n7;
  n11.right = &n2;
  n4b.left = &n5r;
  n4b.right = &n1;
  n4a.left = &n11;
  n8.left = &n13;
  n8.right = &n4b;
  root1.left = &n4a;
  root1.right = &n8;

  TreeNode a2(2), a3(3), root2(1);
  root2.left = &a2;
  root2.right = &a3;

  TreeNode b2(2), root3(1);
  root3.left = &b2;

  Solution solution;

  cout << "Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22" << endl;
  cout << "Output: " << matrix_show(solution.pathSum(&root1, 22)) << endl;

  cout << "Input:  [1, 2, 3], targetSum = 5" << endl;
  cout << "Output: " << matrix_show(solution.pathSum(&root2, 5)) << endl;

  cout << "Input:  [1, 2], targetSum = 0" << endl;
  cout << "Output: " << matrix_show(solution.pathSum(&root3, 0)) << endl;

  cout << "Input:  [1, 2, 3], targetSum = 3" << endl;
  cout << "Output: " << matrix_show(solution.pathSum(&root2, 3)) << endl;

  return EXIT_SUCCESS;
}
