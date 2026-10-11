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
  TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p) {
    if (p->right) {
      TreeNode *node = p->right;
      while (node->left) node = node->left;
      return node;
    }
    TreeNode *succ = nullptr, *node = root;
    while (node) {
      if (p->val < node->val) {
        succ = node;
        node = node->left;
      } else if (p->val > node->val) {
        node = node->right;
      } else {
        break;
      }
    }
    return succ;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n2(2), n1(1), n3(3);
  n2.left = &n1;
  n2.right = &n3;
  cout << "Input:  root = [2, 1, 3], p = 1" << endl;
  Solution solution;
  TreeNode *res = solution.inorderSuccessor(&n2, &n1);
  if (res) {
    cout << "Output: " << res->val << endl;
  } else {
    cout << "Output: null" << endl;
  }
  return EXIT_SUCCESS;
}
