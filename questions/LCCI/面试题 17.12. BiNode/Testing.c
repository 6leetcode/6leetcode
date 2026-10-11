#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void inorder(struct TreeNode *node, struct TreeNode **prev) {
  if (!node) return;
  inorder(node->left, prev);
  node->left = NULL;
  (*prev)->right = node;
  *prev = node;
  inorder(node->right, prev);
}

struct TreeNode *convertBiNode(struct TreeNode *root) {
  struct TreeNode dummy = {0, NULL, NULL};
  struct TreeNode *prev = &dummy;
  inorder(root, &prev);
  if (prev) prev->right = NULL;
  return dummy.right;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n4 = {4, NULL, NULL}, n2 = {2, NULL, NULL}, n5 = {5, NULL, NULL};
  struct TreeNode n1 = {1, NULL, NULL}, n3 = {3, NULL, NULL}, n6 = {6, NULL, NULL};
  struct TreeNode n0 = {0, NULL, NULL};
  n4.left = &n2;
  n4.right = &n5;
  n2.left = &n1;
  n2.right = &n3;
  n5.right = &n6;
  n1.left = &n0;
  printf("Input:  [4,2,5,1,3,null,6,0]\n");
  struct TreeNode *head = convertBiNode(&n4);
  printf("Output: [");
  int first = 1;
  for (struct TreeNode *p = head; p; p = p->right) {
    printf("%s%d, null", first ? "" : ", ", p->val);
    first = 0;
  }
  printf("]\n");
  return EXIT_SUCCESS;
}
