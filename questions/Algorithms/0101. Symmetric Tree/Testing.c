#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
bool isMirror(struct TreeNode *root2, struct TreeNode *root1) {
  if (root1 == NULL && root2 == NULL) return true;
  if (root1 == NULL || root2 == NULL) return false;
  return (root2->val == root1->val) && isMirror(root1->right, root2->left) && isMirror(root1->left, root2->right);
}

bool isSymmetric(struct TreeNode *root) {
  return isMirror(root, root);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode node1 = {1};
  struct TreeNode node2 = {2};
  struct TreeNode node3 = {2};

  node1.left = &node2;
  node1.right = &node3;

  node2.right = NULL;
  node2.left = NULL;

  node3.left = NULL;
  node3.right = NULL;

  printf("Input:  [%d, %d, %d]\n", node1.val, node2.val, node3.val);

  printf("Output: %s\n", isSymmetric(&node1) ? "true" : "false");

  return EXIT_SUCCESS;
}
