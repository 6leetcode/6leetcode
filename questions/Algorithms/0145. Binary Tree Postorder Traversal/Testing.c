#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void dfs(struct TreeNode *node, int *out, int *size) {
  if (node == NULL) return;
  dfs(node->left, out, size);
  dfs(node->right, out, size);
  out[(*size)++] = node->val;
}

int *postorderTraversal(struct TreeNode *root, int *returnSize) {
  int *out = (int *)malloc(sizeof(int) * 101);
  *returnSize = 0;
  dfs(root, out, returnSize);
  return out;
}
// ------------------------------- solution end ---------------------------------

static void printInts(const char *prefix, int *arr, int size) {
  printf("%s[", prefix);
  for (int i = 0; i < size; i++) printf("%s%d", i ? ", " : "", arr[i]);
  printf("]\n");
}

int main(int argc, char const *argv[]) {
  struct TreeNode b3 = {3, NULL, NULL};
  struct TreeNode b2 = {2, &b3, NULL};
  struct TreeNode root1 = {1, NULL, &b2};

  struct TreeNode root2 = {1, NULL, NULL};

  struct TreeNode c4 = {4, NULL, NULL};
  struct TreeNode c5 = {5, NULL, NULL};
  struct TreeNode c2 = {2, &c4, &c5};
  struct TreeNode c3 = {3, NULL, NULL};
  struct TreeNode root3 = {1, &c2, &c3};

  int returnSize;
  int *out;

  printf("Input:  [1, null, 2, 3]\n");
  out = postorderTraversal(&root1, &returnSize);
  printInts("Output: ", out, returnSize);
  free(out);

  printf("Input:  []\n");
  out = postorderTraversal(NULL, &returnSize);
  printInts("Output: ", out, returnSize);
  free(out);

  printf("Input:  [1]\n");
  out = postorderTraversal(&root2, &returnSize);
  printInts("Output: ", out, returnSize);
  free(out);

  printf("Input:  [1, 2, 3, 4, 5]\n");
  out = postorderTraversal(&root3, &returnSize);
  printInts("Output: ", out, returnSize);
  free(out);

  return EXIT_SUCCESS;
}
