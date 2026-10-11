#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <matrix.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

static struct TreeNode *newNode(int val) {
  struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  node->val = val;
  node->left = NULL;
  node->right = NULL;
  return node;
}

static void freeTree(struct TreeNode *root) {
  if (root == NULL) return;
  freeTree(root->left);
  freeTree(root->right);
  free(root);
}

// ------------------------------- solution begin -------------------------------
int **levelOrder(struct TreeNode *root, int *returnSize, int **returnColumnSizes) {
  if (root == NULL) {
    *returnSize = 0;
    *returnColumnSizes = NULL;
    return NULL;
  }

  int capacity = 16;
  int **res = (int **)malloc(sizeof(int *) * capacity);
  *returnColumnSizes = (int *)malloc(sizeof(int) * capacity);

  struct TreeNode **queue = (struct TreeNode **)malloc(sizeof(struct TreeNode *) * 2001);
  int front = 0, back = 0, level = 0;
  queue[back++] = root;

  while (front < back) {
    int size = back - front;
    if (level >= capacity) {
      capacity *= 2;
      res = (int **)realloc(res, sizeof(int *) * capacity);
      *returnColumnSizes = (int *)realloc(*returnColumnSizes, sizeof(int) * capacity);
    }
    res[level] = (int *)malloc(sizeof(int) * size);
    (*returnColumnSizes)[level] = size;
    for (int i = 0; i < size; i++) {
      struct TreeNode *node = queue[front++];
      res[level][i] = node->val;
      if (node->left != NULL) queue[back++] = node->left;
      if (node->right != NULL) queue[back++] = node->right;
    }
    level++;
  }

  *returnSize = level;
  free(queue);
  return res;
}
// ------------------------------- solution end ---------------------------------

static void run(struct TreeNode *root, const char *input) {
  int returnSize = 0;
  int *cols = NULL;
  int **res = levelOrder(root, &returnSize, &cols);
  printf("Input:  %s\n", input);
  sds output = matrix_show(res, returnSize, cols);
  printf("Output: %s\n", output);
  sdsfree(output);
  for (int i = 0; i < returnSize; i++) free(res[i]);
  free(res);
  free(cols);
}

int main(int argc, char const *argv[]) {
  struct TreeNode *t1 = newNode(3);
  t1->left = newNode(9);
  t1->right = newNode(20);
  t1->right->left = newNode(15);
  t1->right->right = newNode(7);
  run(t1, "[3, 9, 20, null, null, 15, 7]");
  freeTree(t1);

  struct TreeNode *t2 = newNode(1);
  run(t2, "[1]");
  freeTree(t2);

  run(NULL, "[]");

  return EXIT_SUCCESS;
}
