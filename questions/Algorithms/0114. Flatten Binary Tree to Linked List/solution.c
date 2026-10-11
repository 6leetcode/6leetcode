#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
void flatten(struct TreeNode *root) {
  struct TreeNode *cur = root;
  while (cur != NULL) {
    if (cur->left != NULL) {
      struct TreeNode *prev = cur->left;
      while (prev->right != NULL) prev = prev->right;
      prev->right = cur->right;
      cur->right = cur->left;
      cur->left = NULL;
    }
    cur = cur->right;
  }
}
// ------------------------------- solution end ---------------------------------

static void tree_show(struct TreeNode *root) {
  if (root == NULL) {
    printf("[]");
    return;
  }
  int cap = 20000;
  int *vals = (int *)malloc(sizeof(int) * cap);
  int *is_null = (int *)malloc(sizeof(int) * cap);
  struct TreeNode **queue = (struct TreeNode **)malloc(sizeof(struct TreeNode *) * cap);
  int n = 0, head = 0, tail = 0;
  queue[tail++] = root;
  while (head < tail) {
    struct TreeNode *node = queue[head++];
    if (node == NULL) {
      vals[n] = 0;
      is_null[n] = 1;
      n++;
    } else {
      vals[n] = node->val;
      is_null[n] = 0;
      n++;
      queue[tail++] = node->left;
      queue[tail++] = node->right;
    }
  }
  while (n > 0 && is_null[n - 1]) n--;
  printf("[");
  for (int i = 0; i < n; i++) {
    if (i) printf(", ");
    if (is_null[i]) {
      printf("null");
    } else {
      printf("%d", vals[i]);
    }
  }
  printf("]");
  free(vals);
  free(is_null);
  free(queue);
}

int main(int argc, char const *argv[]) {
  struct TreeNode n1 = {1, NULL, NULL};
  struct TreeNode n2 = {2, NULL, NULL};
  struct TreeNode n3 = {3, NULL, NULL};
  struct TreeNode n4 = {4, NULL, NULL};
  struct TreeNode n5 = {5, NULL, NULL};
  struct TreeNode n6 = {6, NULL, NULL};
  n1.left = &n2;
  n1.right = &n5;
  n2.left = &n3;
  n2.right = &n4;
  n5.right = &n6;

  printf("Input:  root = ");
  tree_show(&n1);
  printf("\n");
  flatten(&n1);
  printf("Output: ");
  tree_show(&n1);
  printf("\n");

  struct TreeNode n0 = {0, NULL, NULL};
  printf("Input:  root = ");
  tree_show(&n0);
  printf("\n");
  flatten(&n0);
  printf("Output: ");
  tree_show(&n0);
  printf("\n");

  printf("Input:  root = ");
  tree_show(NULL);
  printf("\n");
  flatten(NULL);
  printf("Output: ");
  tree_show(NULL);
  printf("\n");

  (void)argc;
  (void)argv;
  return EXIT_SUCCESS;
}
