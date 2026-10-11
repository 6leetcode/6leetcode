#include <climits>
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
  bool validate(TreeNode *node, long long min, long long max) {
    if (!node) return true;
    if (node->val <= min || node->val >= max) return false;
    return validate(node->left, min, node->val) && validate(node->right, node->val, max);
  }

public:
  bool isValidBST(TreeNode *root) {
    return validate(root, LONG_LONG_MIN, LONG_LONG_MAX);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n1 = {2};
  TreeNode n2 = {1};
  TreeNode n3 = {3};
  n1.left = &n2;
  n1.right = &n3;
  cout << "Input:  [2, 1, 3]" << endl;
  Solution solution;
  cout << "Output: " << (solution.isValidBST(&n1) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
