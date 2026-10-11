#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
  long long dfs(TreeNode *node, long long current) {
    if (!node) return 0;
    current = current * 10 + node->val;
    if (!node->left && !node->right) return current;
    return dfs(node->left, current) + dfs(node->right, current);
  }

public:
  int sumNumbers(TreeNode *root) {
    return (int)dfs(root, 0);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode a2(2), a3(3), root1(1);
  root1.left = &a2;
  root1.right = &a3;

  TreeNode n5(5), n1(1), n9(9), n0(0), root2(4);
  n9.left = &n5;
  n9.right = &n1;
  root2.left = &n9;
  root2.right = &n0;

  TreeNode root3(0);

  TreeNode d5(5), root4(1);
  root4.left = &d5;

  Solution solution;

  cout << "Input:  [1, 2, 3]" << endl;
  cout << "Output: " << solution.sumNumbers(&root1) << endl;

  cout << "Input:  [4, 9, 0, 5, 1]" << endl;
  cout << "Output: " << solution.sumNumbers(&root2) << endl;

  cout << "Input:  [0]" << endl;
  cout << "Output: " << solution.sumNumbers(&root3) << endl;

  cout << "Input:  [1, 5]" << endl;
  cout << "Output: " << solution.sumNumbers(&root4) << endl;

  return EXIT_SUCCESS;
}
