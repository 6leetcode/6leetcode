#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static int height(struct TreeNode *node) {
  if (!node) return 0;
  int l = height(node->left);
  if (l == -1) return -1;
  int r = height(node->right);
  if (r == -1) return -1;
  if (abs(l - r) > 1) return -1;
  return 1 + (l > r ? l : r);
}

bool isBalanced(struct TreeNode *root) {
  return height(root) != -1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n3 = {3, NULL, NULL}, n9 = {9, NULL, NULL}, n20 = {20, NULL, NULL};
  struct TreeNode n15 = {15, NULL, NULL}, n7 = {7, NULL, NULL};
  n3.left = &n9;
  n3.right = &n20;
  n20.left = &n15;
  n20.right = &n7;
  printf("Input:  [3, 9, 20, null, null, 15, 7]\n");
  printf("Output: %s\n", isBalanced(&n3) ? "true" : "false");
  return EXIT_SUCCESS;
}
