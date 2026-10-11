#include <iostream>

#include <cc/TreeNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int height(TreeNode *node) {
    if (node == nullptr) return 0;
    int left = height(node->left);
    if (left == -1) return -1;
    int right = height(node->right);
    if (right == -1) return -1;
    if (left - right > 1 || right - left > 1) return -1;
    return (left > right ? left : right) + 1;
  }

public:
  bool isBalanced(TreeNode *root) {
    return height(root) != -1;
  }
};
// ------------------------------- solution end ---------------------------------

static TreeNode *buildBalanced() {
  TreeNode *root = new TreeNode(3);
  root->left = new TreeNode(9);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);
  return root;
}

static TreeNode *buildUnbalanced() {
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(2);
  root->left->left = new TreeNode(3);
  root->left->right = new TreeNode(3);
  root->left->left->left = new TreeNode(4);
  root->left->left->right = new TreeNode(4);
  return root;
}

int main(int argc, char const *argv[]) {
  Solution solution;

  TreeNode *t1 = buildBalanced();
  cout << "Input:  [3, 9, 20, null, null, 15, 7]" << endl;
  cout << "Output: " << (solution.isBalanced(t1) ? "true" : "false") << endl;
  TreeNode_destory(t1);

  TreeNode *t2 = buildUnbalanced();
  cout << "Input:  [1, 2, 2, 3, 3, null, null, 4, 4]" << endl;
  cout << "Output: " << (solution.isBalanced(t2) ? "true" : "false") << endl;
  TreeNode_destory(t2);

  cout << "Input:  []" << endl;
  cout << "Output: " << (solution.isBalanced(nullptr) ? "true" : "false") << endl;

  return EXIT_SUCCESS;
}
