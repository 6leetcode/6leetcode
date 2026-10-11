#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static int count(struct TreeNode *node, long long target) {
  if (!node) return 0;
  int res = (node->val == target) ? 1 : 0;
  res += count(node->left, target - node->val);
  res += count(node->right, target - node->val);
  return res;
}

int pathSum(struct TreeNode *root, int sum) {
  if (!root) return 0;
  return count(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n1 = {1, NULL, NULL}, n2 = {2, NULL, NULL}, n3 = {3, NULL, NULL};
  n1.left = &n2;
  n1.right = &n3;
  int sum = 3;
  printf("Input:  [1, 2, 3], sum = %d\n", sum);
  printf("Output: %d\n", pathSum(&n1, sum));
  return EXIT_SUCCESS;
}
