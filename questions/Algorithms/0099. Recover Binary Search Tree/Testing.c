#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void collect(struct TreeNode *node, int *vals, int *n) {
  if (!node) return;
  collect(node->left, vals, n);
  vals[(*n)++] = node->val;
  collect(node->right, vals, n);
}

static void assign(struct TreeNode *node, int *vals, int *idx) {
  if (!node) return;
  assign(node->left, vals, idx);
  node->val = vals[(*idx)++];
  assign(node->right, vals, idx);
}

void recoverTree(struct TreeNode *root) {
  int vals[1000], n = 0;
  collect(root, vals, &n);
  int i = 0;
  while (i < n - 1 && vals[i] < vals[i + 1]) i++;
  int j = n - 1;
  while (j > 0 && vals[j - 1] < vals[j]) j--;
  int t = vals[i];
  vals[i] = vals[j];
  vals[j] = t;
  int idx = 0;
  assign(root, vals, &idx);
}
// ------------------------------- solution end ---------------------------------

static void printInorder(struct TreeNode *node) {
  if (!node) return;
  printInorder(node->left);
  printf("%s%d", node->left ? ", " : "", node->val);
  if (node->left) return;
  // handled by caller for simplicity
}

static void show(struct TreeNode *node, int *first) {
  if (!node) return;
  show(node->left, first);
  printf("%s%d", *first ? "" : ", ", node->val);
  *first = 0;
  show(node->right, first);
}

int main(int argc, char const *argv[]) {
  struct TreeNode n1 = {1, NULL, NULL};
  struct TreeNode n3 = {3, NULL, NULL};
  struct TreeNode n2 = {2, NULL, NULL};
  n1.right = &n3;
  n3.right = &n2;
  printf("Input:  [1, 3, null, null, 2]\n");
  recoverTree(&n1);
  printf("Output: [");
  int first = 1;
  show(&n1, &first);
  printf("]\n");
  (void)printInorder;
  return 0;
}
