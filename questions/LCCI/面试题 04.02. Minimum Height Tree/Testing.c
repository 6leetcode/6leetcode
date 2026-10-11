#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static struct TreeNode *build(int *nums, int lo, int hi) {
  if (lo > hi) return NULL;
  int mid = lo + (hi - lo) / 2;
  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->val = nums[mid];
  root->left = build(nums, lo, mid - 1);
  root->right = build(nums, mid + 1, hi);
  return root;
}

struct TreeNode *sortedArrayToBST(int *nums, int numsSize) {
  return build(nums, 0, numsSize - 1);
}
// ------------------------------- solution end ---------------------------------

static void preorder(struct TreeNode *node, int *first) {
  if (!node) return;
  printf("%s%d", *first ? "" : ", ", node->val);
  *first = 0;
  preorder(node->left, first);
  preorder(node->right, first);
}

static void destroy(struct TreeNode *node) {
  if (!node) return;
  destroy(node->left);
  destroy(node->right);
  free(node);
}

int main(int argc, char const *argv[]) {
  int nums[] = {-10, -3, 0, 5, 9};
  printf("Input:  [-10, -3, 0, 5, 9]\n");
  struct TreeNode *root = sortedArrayToBST(nums, 5);
  printf("Output: [");
  int first = 1;
  preorder(root, &first);
  printf("]\n");
  destroy(root);
  return EXIT_SUCCESS;
}
