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
int minDepth(struct TreeNode *root) {
  if (root == NULL) return 0;
  if (root->left == NULL && root->right == NULL) return 1;
  if (root->left == NULL) return minDepth(root->right) + 1;
  if (root->right == NULL) return minDepth(root->left) + 1;
  int left = minDepth(root->left);
  int right = minDepth(root->right);
  return (left < right ? left : right) + 1;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode *t1 = newNode(3);
  t1->left = newNode(9);
  t1->right = newNode(20);
  t1->right->left = newNode(15);
  t1->right->right = newNode(7);
  printf("Input:  [3, 9, 20, null, null, 15, 7]\n");
  printf("Output: %d\n", minDepth(t1));
  freeTree(t1);

  struct TreeNode *t2 = newNode(2);
  t2->right = newNode(3);
  t2->right->right = newNode(4);
  t2->right->right->right = newNode(5);
  t2->right->right->right->right = newNode(6);
  printf("Input:  [2, null, 3, null, 4, null, 5, null, 6]\n");
  printf("Output: %d\n", minDepth(t2));
  freeTree(t2);

  return EXIT_SUCCESS;
}
