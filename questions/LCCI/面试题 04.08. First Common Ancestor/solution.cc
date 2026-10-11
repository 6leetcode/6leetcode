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
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (!root || root == p || root == q) return root;
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);
    if (left && right) return root;
    return left ? left : right;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n3(3), n5(5), n1(1);
  n3.left = &n5;
  n3.right = &n1;
  cout << "Input:  root = [3, 5, 1], p = 5, q = 1" << endl;
  Solution solution;
  TreeNode *res = solution.lowestCommonAncestor(&n3, &n5, &n1);
  cout << "Output: " << res->val << endl;
  return EXIT_SUCCESS;
}
