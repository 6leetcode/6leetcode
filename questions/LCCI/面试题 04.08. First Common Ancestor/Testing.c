#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
struct TreeNode *lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
  if (!root || root == p || root == q) return root;
  struct TreeNode *left = lowestCommonAncestor(root->left, p, q);
  struct TreeNode *right = lowestCommonAncestor(root->right, p, q);
  if (left && right) return root;
  return left ? left : right;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n3 = {3, NULL, NULL}, n5 = {5, NULL, NULL}, n1 = {1, NULL, NULL};
  n3.left = &n5;
  n3.right = &n1;
  printf("Input:  root = [3, 5, 1], p = 5, q = 1\n");
  struct TreeNode *res = lowestCommonAncestor(&n3, &n5, &n1);
  printf("Output: %d\n", res->val);
  return EXIT_SUCCESS;
}
