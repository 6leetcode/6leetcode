#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static bool pathSumCheck(struct TreeNode *node, int targetSum, int current) {
  if (node == NULL) return false;
  current += node->val;
  if (node->left == NULL && node->right == NULL) return current == targetSum;
  return pathSumCheck(node->left, targetSum, current) ||
         pathSumCheck(node->right, targetSum, current);
}

bool hasPathSum(struct TreeNode *root, int targetSum) {
  return pathSumCheck(root, targetSum, 0);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n7 = {7, NULL, NULL};
  struct TreeNode n2 = {2, NULL, NULL};
  struct TreeNode n11 = {11, &n7, &n2};
  struct TreeNode n13 = {13, NULL, NULL};
  struct TreeNode n1 = {1, NULL, NULL};
  struct TreeNode n4r = {4, NULL, &n1};
  struct TreeNode n4l = {4, &n11, NULL};
  struct TreeNode n8 = {8, &n13, &n4r};
  struct TreeNode root1 = {5, &n4l, &n8};

  struct TreeNode a2 = {2, NULL, NULL};
  struct TreeNode a3 = {3, NULL, NULL};
  struct TreeNode root2 = {1, &a2, &a3};

  struct TreeNode b2 = {2, NULL, NULL};
  struct TreeNode root3 = {1, &b2, NULL};

  printf("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22\n");
  printf("Output: %s\n", hasPathSum(&root1, 22) ? "true" : "false");

  printf("Input:  [1, 2, 3], targetSum = 5\n");
  printf("Output: %s\n", hasPathSum(&root2, 5) ? "true" : "false");

  printf("Input:  [], targetSum = 0\n");
  printf("Output: %s\n", hasPathSum(NULL, 0) ? "true" : "false");

  printf("Input:  [1, 2], targetSum = 3\n");
  printf("Output: %s\n", hasPathSum(&root3, 3) ? "true" : "false");

  return EXIT_SUCCESS;
}
