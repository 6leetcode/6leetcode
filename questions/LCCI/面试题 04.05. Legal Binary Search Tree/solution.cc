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
  bool isValidBST(TreeNode *root) { return validate(root, LONG_LONG_MIN, LONG_LONG_MAX); }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n2(2), n1(1), n3(3);
  n2.left = &n1;
  n2.right = &n3;
  cout << "Input:  [2, 1, 3]" << endl;
  Solution solution;
  cout << "Output: " << (solution.isValidBST(&n2) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
