#include <algorithm>
#include <iostream>

#include <cc/TreeNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int maxDepth(TreeNode *root) {
    if (root == nullptr) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  TreeNode *t1 = new TreeNode(3);
  t1->left = new TreeNode(9);
  t1->right = new TreeNode(20);
  t1->right->left = new TreeNode(15);
  t1->right->right = new TreeNode(7);
  cout << "Input:  [3, 9, 20, null, null, 15, 7]" << endl;
  cout << "Output: " << solution.maxDepth(t1) << endl;
  TreeNode_destory(t1);

  TreeNode *t2 = new TreeNode(1);
  t2->right = new TreeNode(2);
  cout << "Input:  [1, null, 2]" << endl;
  cout << "Output: " << solution.maxDepth(t2) << endl;
  TreeNode_destory(t2);

  return EXIT_SUCCESS;
}
