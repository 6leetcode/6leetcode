#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void destroy(struct TreeNode *node) {
  if (!node) return;
  destroy(node->left);
  destroy(node->right);
  free(node);
}

static struct TreeNode *clone(struct TreeNode *node) {
  if (!node) return NULL;
  struct TreeNode *n = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  n->val = node->val;
  n->left = clone(node->left);
  n->right = clone(node->right);
  return n;
}

static struct TreeNode **gen(int start, int end, int *count) {
  struct TreeNode **res = (struct TreeNode **)malloc(sizeof(struct TreeNode *) * 2000);
  *count = 0;
  if (start > end) {
    res[(*count)++] = NULL;
    return res;
  }
  for (int i = start; i <= end; i++) {
    int lc, rc;
    struct TreeNode **lefts = gen(start, i - 1, &lc);
    struct TreeNode **rights = gen(i + 1, end, &rc);
    for (int l = 0; l < lc; l++) {
      for (int r = 0; r < rc; r++) {
        struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        root->val = i;
        root->left = clone(lefts[l]);
        root->right = clone(rights[r]);
        res[(*count)++] = root;
      }
    }
    for (int l = 0; l < lc; l++) destroy(lefts[l]);
    for (int r = 0; r < rc; r++) destroy(rights[r]);
    free(lefts);
    free(rights);
  }
  return res;
}

struct TreeNode **generateTrees(int n, int *returnSize) {
  if (n == 0) {
    *returnSize = 0;
    return NULL;
  }
  return gen(1, n, returnSize);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  printf("Input:  %d\n", input);
  int size = 0;
  struct TreeNode **res = generateTrees(input, &size);
  printf("Output: %d\n", size);
  for (int i = 0; i < size; i++) destroy(res[i]);
  free(res);
  return EXIT_SUCCESS;
}
