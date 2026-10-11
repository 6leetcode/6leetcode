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
static int height(struct TreeNode *node) {
  if (node == NULL) return 0;
  int left = height(node->left);
  if (left == -1) return -1;
  int right = height(node->right);
  if (right == -1) return -1;
  if (left - right > 1 || right - left > 1) return -1;
  return (left > right ? left : right) + 1;
}

bool isBalanced(struct TreeNode *root) {
  return height(root) != -1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode *t1 = newNode(3);
  t1->left = newNode(9);
  t1->right = newNode(20);
  t1->right->left = newNode(15);
  t1->right->right = newNode(7);
  printf("Input:  [3, 9, 20, null, null, 15, 7]\n");
  printf("Output: %s\n", isBalanced(t1) ? "true" : "false");
  freeTree(t1);

  struct TreeNode *t2 = newNode(1);
  t2->left = newNode(2);
  t2->right = newNode(2);
  t2->left->left = newNode(3);
  t2->left->right = newNode(3);
  t2->left->left->left = newNode(4);
  t2->left->left->right = newNode(4);
  printf("Input:  [1, 2, 2, 3, 3, null, null, 4, 4]\n");
  printf("Output: %s\n", isBalanced(t2) ? "true" : "false");
  freeTree(t2);

  printf("Input:  []\n");
  printf("Output: %s\n", isBalanced(NULL) ? "true" : "false");

  return EXIT_SUCCESS;
}
