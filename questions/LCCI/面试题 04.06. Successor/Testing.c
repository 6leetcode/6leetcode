#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
struct TreeNode *inorderSuccessor(struct TreeNode *root, struct TreeNode *p) {
  if (p->right) {
    struct TreeNode *node = p->right;
    while (node->left) node = node->left;
    return node;
  }
  struct TreeNode *succ = NULL, *node = root;
  while (node) {
    if (p->val < node->val) {
      succ = node;
      node = node->left;
    } else if (p->val > node->val) {
      node = node->right;
    } else {
      break;
    }
  }
  return succ;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n2 = {2, NULL, NULL}, n1 = {1, NULL, NULL}, n3 = {3, NULL, NULL};
  n2.left = &n1;
  n2.right = &n3;
  printf("Input:  root = [2, 1, 3], p = 1\n");
  struct TreeNode *res = inorderSuccessor(&n2, &n1);
  if (res) {
    printf("Output: %d\n", res->val);
  } else {
    printf("Output: null\n");
  }
  return EXIT_SUCCESS;
}
