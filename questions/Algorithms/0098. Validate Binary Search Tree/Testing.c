#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static bool validate(struct TreeNode *node, long long min, long long max) {
  if (!node) return true;
  if (node->val <= min || node->val >= max) return false;
  return validate(node->left, min, node->val) && validate(node->right, node->val, max);
}

bool isValidBST(struct TreeNode *root) {
  return validate(root, LLONG_MIN, LLONG_MAX);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n1 = {2, NULL, NULL};
  struct TreeNode n2 = {1, NULL, NULL};
  struct TreeNode n3 = {3, NULL, NULL};
  n1.left = &n2;
  n1.right = &n3;
  printf("Input:  [2, 1, 3]\n");
  printf("Output: %s\n", isValidBST(&n1) ? "true" : "false");
  return 0;
}
