#include <algorithm>
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
  int best;

  int gain(TreeNode *node) {
    if (!node) return 0;
    int left = max(0, gain(node->left));
    int right = max(0, gain(node->right));
    best = max(best, node->val + left + right);
    return node->val + max(left, right);
  }

public:
  int maxPathSum(TreeNode *root) {
    best = INT_MIN;
    gain(root);
    return best;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode a2(2), a3(3), root1(1);
  root1.left = &a2;
  root1.right = &a3;

  TreeNode n9(9), n15(15), n7(7), n20(20), root2(-10);
  n20.left = &n15;
  n20.right = &n7;
  root2.left = &n9;
  root2.right = &n20;

  TreeNode root3(-3);

  TreeNode c1(-1), c2(-2), root4(2);
  root4.left = &c1;
  root4.right = &c2;

  Solution solution;

  cout << "Input:  [1, 2, 3]" << endl;
  cout << "Output: " << solution.maxPathSum(&root1) << endl;

  cout << "Input:  [-10, 9, 20, null, null, 15, 7]" << endl;
  cout << "Output: " << solution.maxPathSum(&root2) << endl;

  cout << "Input:  [-3]" << endl;
  cout << "Output: " << solution.maxPathSum(&root3) << endl;

  cout << "Input:  [2, -1, -2]" << endl;
  cout << "Output: " << solution.maxPathSum(&root4) << endl;

  return EXIT_SUCCESS;
}
