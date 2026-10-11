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
  void inorder(TreeNode *node, TreeNode *&prev) {
    if (!node) return;
    inorder(node->left, prev);
    node->left = nullptr;
    prev->right = node;
    prev = node;
    inorder(node->right, prev);
  }

public:
  TreeNode *convertBiNode(TreeNode *root) {
    TreeNode dummy(0);
    TreeNode *prev = &dummy;
    inorder(root, prev);
    prev->right = nullptr;
    return dummy.right;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n4(4), n2(2), n5(5), n1(1), n3(3), n6(6), n0(0);
  n4.left = &n2;
  n4.right = &n5;
  n2.left = &n1;
  n2.right = &n3;
  n5.right = &n6;
  n1.left = &n0;
  cout << "Input:  [4,2,5,1,3,null,6,0]" << endl;
  Solution solution;
  TreeNode *head = solution.convertBiNode(&n4);
  cout << "Output: [";
  bool first = true;
  for (TreeNode *p = head; p; p = p->right) {
    cout << (first ? "" : ", ") << p->val << ", null";
    first = false;
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
