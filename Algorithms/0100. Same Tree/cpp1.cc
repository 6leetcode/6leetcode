#include <cstdlib>
#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

class Solution {
public:
  bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL && q == NULL) {
      return true;
    }

    if (p == NULL || q == NULL) {
      return false;
    }

    if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q->val) {
      return true;
    }

    return false;
  }
};

int main(int argc, char const *argv[]) {
  struct TreeNode node1, node2, node3;
  node1.val   = 1;
  node2.val   = 2;
  node3.val   = 3;
  node1.left  = &node2;
  node1.right = &node3;
  node2.left  = NULL;
  node2.right = NULL;
  node3.left  = NULL;
  node3.right = NULL;
  cout << "Input:  [" << node1.val << ", " << node2.val << ", " << node3.val << "]" << endl;
  Solution solution;
  string output = solution.isSameTree(&node1, &node1) ? "true" : "false";
  cout << "Output: " << output << endl;
  return EXIT_SUCCESS;
}
