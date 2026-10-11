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
  int height(TreeNode *node) {
    if (!node) return 0;
    int l = height(node->left);
    if (l == -1) return -1;
    int r = height(node->right);
    if (r == -1) return -1;
    if (abs(l - r) > 1) return -1;
    return 1 + max(l, r);
  }

public:
  bool isBalanced(TreeNode *root) { return height(root) != -1; }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n3(3), n9(9), n20(20), n15(15), n7(7);
  n3.left = &n9;
  n3.right = &n20;
  n20.left = &n15;
  n20.right = &n7;
  cout << "Input:  [3, 9, 20, null, null, 15, 7]" << endl;
  Solution solution;
  cout << "Output: " << (solution.isBalanced(&n3) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
