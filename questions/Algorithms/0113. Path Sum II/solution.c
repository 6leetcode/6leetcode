#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void dfs(struct TreeNode *node, int remain, int *path, int depth,
                int ***res, int *returnSize, int **colSizes, int *capacity) {
  if (node == NULL) return;
  path[depth] = node->val;
  remain -= node->val;
  if (node->left == NULL && node->right == NULL) {
    if (remain == 0) {
      if (*returnSize == *capacity) {
        *capacity = *capacity ? *capacity * 2 : 8;
        *res = (int **)realloc(*res, sizeof(int *) * (*capacity));
        *colSizes = (int *)realloc(*colSizes, sizeof(int) * (*capacity));
      }
      int *row = (int *)malloc(sizeof(int) * (depth + 1));
      for (int i = 0; i <= depth; i++) row[i] = path[i];
      (*res)[*returnSize] = row;
      (*colSizes)[*returnSize] = depth + 1;
      (*returnSize)++;
    }
    return;
  }
  dfs(node->left, remain, path, depth + 1, res, returnSize, colSizes, capacity);
  dfs(node->right, remain, path, depth + 1, res, returnSize, colSizes, capacity);
}

int **pathSum(struct TreeNode *root, int targetSum, int *returnSize, int **returnColumnSizes) {
  int **res = NULL;
  int *colSizes = NULL;
  int capacity = 0;
  int path[5001];
  *returnSize = 0;
  dfs(root, targetSum, path, 0, &res, returnSize, &colSizes, &capacity);
  *returnColumnSizes = colSizes;
  return res;
}
// ------------------------------- solution end ---------------------------------

static void printMatrix(int **m, int rows, int *cols) {
  printf("[");
  for (int i = 0; i < rows; i++) {
    printf("%s[", i ? ", " : "");
    for (int j = 0; j < cols[i]; j++) printf("%s%d", j ? ", " : "", m[i][j]);
    printf("]");
  }
  printf("]\n");
}

static void freeMatrix(int **m, int rows) {
  for (int i = 0; i < rows; i++) free(m[i]);
  free(m);
}

int main(int argc, char const *argv[]) {
  struct TreeNode n7 = {7, NULL, NULL};
  struct TreeNode n2 = {2, NULL, NULL};
  struct TreeNode n11 = {11, &n7, &n2};
  struct TreeNode n13 = {13, NULL, NULL};
  struct TreeNode n5r = {5, NULL, NULL};
  struct TreeNode n1 = {1, NULL, NULL};
  struct TreeNode n4b = {4, &n5r, &n1};
  struct TreeNode n4a = {4, &n11, NULL};
  struct TreeNode n8 = {8, &n13, &n4b};
  struct TreeNode root1 = {5, &n4a, &n8};

  struct TreeNode a2 = {2, NULL, NULL};
  struct TreeNode a3 = {3, NULL, NULL};
  struct TreeNode root2 = {1, &a2, &a3};

  struct TreeNode b2 = {2, NULL, NULL};
  struct TreeNode root3 = {1, &b2, NULL};

  int returnSize;
  int *returnColumnSizes;

  printf("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22\n");
  int **res1 = pathSum(&root1, 22, &returnSize, &returnColumnSizes);
  printf("Output: ");
  printMatrix(res1, returnSize, returnColumnSizes);
  freeMatrix(res1, returnSize);
  free(returnColumnSizes);

  printf("Input:  [1, 2, 3], targetSum = 5\n");
  int **res2 = pathSum(&root2, 5, &returnSize, &returnColumnSizes);
  printf("Output: ");
  printMatrix(res2, returnSize, returnColumnSizes);
  freeMatrix(res2, returnSize);
  free(returnColumnSizes);

  printf("Input:  [1, 2], targetSum = 0\n");
  int **res3 = pathSum(&root3, 0, &returnSize, &returnColumnSizes);
  printf("Output: ");
  printMatrix(res3, returnSize, returnColumnSizes);
  freeMatrix(res3, returnSize);
  free(returnColumnSizes);

  printf("Input:  [1, 2, 3], targetSum = 3\n");
  int **res4 = pathSum(&root2, 3, &returnSize, &returnColumnSizes);
  printf("Output: ");
  printMatrix(res4, returnSize, returnColumnSizes);
  freeMatrix(res4, returnSize);
  free(returnColumnSizes);

  return EXIT_SUCCESS;
}
