#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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
int maxDepth(struct TreeNode *root) {
  if (root == NULL) return 0;
  int left = maxDepth(root->left);
  int right = maxDepth(root->right);
  return 1 + (left > right ? left : right);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode *t1 = newNode(3);
  t1->left = newNode(9);
  t1->right = newNode(20);
  t1->right->left = newNode(15);
  t1->right->right = newNode(7);
  printf("Input:  [3, 9, 20, null, null, 15, 7]\n");
  printf("Output: %d\n", maxDepth(t1));
  freeTree(t1);

  struct TreeNode *t2 = newNode(1);
  t2->right = newNode(2);
  printf("Input:  [1, null, 2]\n");
  printf("Output: %d\n", maxDepth(t2));
  freeTree(t2);

  return EXIT_SUCCESS;
}
