#include <algorithm>
#include <iostream>

#include <cc/TreeNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int minDepth(TreeNode *root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    if (root->left == nullptr) return minDepth(root->right) + 1;
    if (root->right == nullptr) return minDepth(root->left) + 1;
    return 1 + min(minDepth(root->left), minDepth(root->right));
  }
};
// ------------------------------- solution end ---------------------------------

static TreeNode *buildSkewed() {
  TreeNode *root = new TreeNode(2);
  root->right = new TreeNode(3);
  root->right->right = new TreeNode(4);
  root->right->right->right = new TreeNode(5);
  root->right->right->right->right = new TreeNode(6);
  return root;
}

int main(int argc, char const *argv[]) {
  Solution solution;

  TreeNode *t1 = new TreeNode(3);
  t1->left = new TreeNode(9);
  t1->right = new TreeNode(20);
  t1->right->left = new TreeNode(15);
  t1->right->right = new TreeNode(7);
  cout << "Input:  [3, 9, 20, null, null, 15, 7]" << endl;
  cout << "Output: " << solution.minDepth(t1) << endl;
  TreeNode_destory(t1);

  TreeNode *t2 = buildSkewed();
  cout << "Input:  [2, null, 3, null, 4, null, 5, null, 6]" << endl;
  cout << "Output: " << solution.minDepth(t2) << endl;
  TreeNode_destory(t2);

  return EXIT_SUCCESS;
}
