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
  bool same(TreeNode *a, TreeNode *b) {
    if (!a && !b) return true;
    if (!a || !b) return false;
    return a->val == b->val && same(a->left, b->left) && same(a->right, b->right);
  }

public:
  bool checkSubTree(TreeNode *t1, TreeNode *t2) {
    if (!t2) return true;
    if (!t1) return false;
    return same(t1, t2) || checkSubTree(t1->left, t2) || checkSubTree(t1->right, t2);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode a3(3), a4(4), a5(5), a1(1), a2(2);
  a3.left = &a4;
  a3.right = &a5;
  a4.left = &a1;
  a4.right = &a2;
  TreeNode b4(4), b1(1), b2(2);
  b4.left = &b1;
  b4.right = &b2;
  cout << "Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]" << endl;
  Solution solution;
  cout << "Output: " << (solution.checkSubTree(&a3, &b4) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
