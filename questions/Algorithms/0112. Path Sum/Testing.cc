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
  bool check(TreeNode *node, int targetSum, int current) {
    if (!node) return false;
    current += node->val;
    if (!node->left && !node->right) return current == targetSum;
    return check(node->left, targetSum, current) || check(node->right, targetSum, current);
  }

public:
  bool hasPathSum(TreeNode *root, int targetSum) {
    return check(root, targetSum, 0);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n7(7), n2(2), n11(11), n13(13), n1(1), n4r(4), n4l(4), n8(8), root1(5);
  n11.left = &n7;
  n11.right = &n2;
  n4r.right = &n1;
  n4l.left = &n11;
  n8.left = &n13;
  n8.right = &n4r;
  root1.left = &n4l;
  root1.right = &n8;

  TreeNode a2(2), a3(3), root2(1);
  root2.left = &a2;
  root2.right = &a3;

  TreeNode b2(2), root3(1);
  root3.left = &b2;

  Solution solution;
  cout << "Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22" << endl;
  cout << "Output: " << (solution.hasPathSum(&root1, 22) ? "true" : "false") << endl;

  cout << "Input:  [1, 2, 3], targetSum = 5" << endl;
  cout << "Output: " << (solution.hasPathSum(&root2, 5) ? "true" : "false") << endl;

  cout << "Input:  [], targetSum = 0" << endl;
  cout << "Output: " << (solution.hasPathSum(NULL, 0) ? "true" : "false") << endl;

  cout << "Input:  [1, 2], targetSum = 3" << endl;
  cout << "Output: " << (solution.hasPathSum(&root3, 3) ? "true" : "false") << endl;

  return EXIT_SUCCESS;
}
