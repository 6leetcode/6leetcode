#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static long long dfs(struct TreeNode *node, long long current) {
  if (node == NULL) return 0;
  current = current * 10 + node->val;
  if (node->left == NULL && node->right == NULL) return current;
  return dfs(node->left, current) + dfs(node->right, current);
}

int sumNumbers(struct TreeNode *root) {
  return (int)dfs(root, 0);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode a2 = {2, NULL, NULL};
  struct TreeNode a3 = {3, NULL, NULL};
  struct TreeNode root1 = {1, &a2, &a3};

  struct TreeNode n5 = {5, NULL, NULL};
  struct TreeNode n1 = {1, NULL, NULL};
  struct TreeNode n9 = {9, &n5, &n1};
  struct TreeNode n0 = {0, NULL, NULL};
  struct TreeNode root2 = {4, &n9, &n0};

  struct TreeNode root3 = {0, NULL, NULL};

  struct TreeNode d5 = {5, NULL, NULL};
  struct TreeNode root4 = {1, &d5, NULL};

  printf("Input:  [1, 2, 3]\n");
  printf("Output: %d\n", sumNumbers(&root1));

  printf("Input:  [4, 9, 0, 5, 1]\n");
  printf("Output: %d\n", sumNumbers(&root2));

  printf("Input:  [0]\n");
  printf("Output: %d\n", sumNumbers(&root3));

  printf("Input:  [1, 5]\n");
  printf("Output: %d\n", sumNumbers(&root4));

  return EXIT_SUCCESS;
}
