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
  bool isMirror(struct TreeNode *root2, struct TreeNode *root1) {
    if (root1 == NULL && root2 == NULL) return true;
    if (root1 == NULL || root2 == NULL) return false;
    return (root2->val == root1->val) && isMirror(root1->right, root2->left) && isMirror(root1->left, root2->right);
  }
  bool isSymmetric(TreeNode *root) {
    return isMirror(root, root);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode node1 = {1};
  TreeNode node2 = {2};
  TreeNode node3 = {2};

  node1.left = &node2;
  node1.right = &node3;

  node2.right = NULL;
  node2.left = NULL;

  node3.left = NULL;
  node3.right = NULL;

  cout << "Input:  [" << node1.val << ", " << node2.val << ", " << node3.val << "]" << endl;
  Solution solution;
  string output = solution.isSymmetric(&node1) ? "true" : "false";
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
