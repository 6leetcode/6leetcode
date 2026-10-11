#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void inorder(struct TreeNode *root, int *res, int *size) {
  if (!root) {
    return;
  }
  inorder(root->left, res, size);
  res[(*size)++] = root->val;
  inorder(root->right, res, size);
}

int *inorderTraversal(struct TreeNode *root, int *returnSize) {
  int *res = (int *)malloc(sizeof(int) * 100);
  *returnSize = 0;
  inorder(root, res, returnSize);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n1 = {1, NULL, NULL};
  struct TreeNode n2 = {2, NULL, NULL};
  struct TreeNode n3 = {3, NULL, NULL};
  n1.left = &n2;
  n1.right = &n3;
  printf("Input:  [1, 2, 3]\n");

  int size = 0;
  int *res = inorderTraversal(&n1, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s%d", i == 0 ? "" : ", ", res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
