#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static bool same(struct TreeNode *a, struct TreeNode *b) {
  if (!a && !b) return true;
  if (!a || !b) return false;
  return a->val == b->val && same(a->left, b->left) && same(a->right, b->right);
}

bool checkSubTree(struct TreeNode *t1, struct TreeNode *t2) {
  if (!t2) return true;
  if (!t1) return false;
  return same(t1, t2) || checkSubTree(t1->left, t2) || checkSubTree(t1->right, t2);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode a3 = {3, NULL, NULL}, a4 = {4, NULL, NULL}, a5 = {5, NULL, NULL};
  struct TreeNode a1 = {1, NULL, NULL}, a2 = {2, NULL, NULL};
  a3.left = &a4;
  a3.right = &a5;
  a4.left = &a1;
  a4.right = &a2;
  struct TreeNode b4 = {4, NULL, NULL}, b1 = {1, NULL, NULL}, b2 = {2, NULL, NULL};
  b4.left = &b1;
  b4.right = &b2;
  printf("Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]\n");
  printf("Output: %s\n", checkSubTree(&a3, &b4) ? "true" : "false");
  return EXIT_SUCCESS;
}
