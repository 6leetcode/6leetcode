#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static int best;

static int gain(struct TreeNode *node) {
  if (node == NULL) return 0;
  int left = gain(node->left);
  if (left < 0) left = 0;
  int right = gain(node->right);
  if (right < 0) right = 0;
  int through = node->val + left + right;
  if (through > best) best = through;
  return node->val + (left > right ? left : right);
}

int maxPathSum(struct TreeNode *root) {
  best = INT_MIN;
  gain(root);
  return best;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode a2 = {2, NULL, NULL};
  struct TreeNode a3 = {3, NULL, NULL};
  struct TreeNode root1 = {1, &a2, &a3};

  struct TreeNode n9 = {9, NULL, NULL};
  struct TreeNode n15 = {15, NULL, NULL};
  struct TreeNode n7 = {7, NULL, NULL};
  struct TreeNode n20 = {20, &n15, &n7};
  struct TreeNode root2 = {-10, &n9, &n20};

  struct TreeNode root3 = {-3, NULL, NULL};

  struct TreeNode c1 = {-1, NULL, NULL};
  struct TreeNode c2 = {-2, NULL, NULL};
  struct TreeNode root4 = {2, &c1, &c2};

  printf("Input:  [1, 2, 3]\n");
  printf("Output: %d\n", maxPathSum(&root1));

  printf("Input:  [-10, 9, 20, null, null, 15, 7]\n");
  printf("Output: %d\n", maxPathSum(&root2));

  printf("Input:  [-3]\n");
  printf("Output: %d\n", maxPathSum(&root3));

  printf("Input:  [2, -1, -2]\n");
  printf("Output: %d\n", maxPathSum(&root4));

  return EXIT_SUCCESS;
}
