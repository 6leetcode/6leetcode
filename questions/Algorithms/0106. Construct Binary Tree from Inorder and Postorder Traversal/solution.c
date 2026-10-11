#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static struct TreeNode *build(int *inorder, int inStart, int inEnd, int *postorder, int postStart, int postEnd) {
  if (inStart > inEnd) return NULL;
  int rootVal = postorder[postEnd];
  int idx = inStart;
  while (inorder[idx] != rootVal) idx++;
  int leftLen = idx - inStart;
  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->val = rootVal;
  root->left = build(inorder, inStart, idx - 1, postorder, postStart, postStart + leftLen - 1);
  root->right = build(inorder, idx + 1, inEnd, postorder, postStart + leftLen, postEnd - 1);
  return root;
}

struct TreeNode *buildTree(int *inorder, int inorderSize, int *postorder, int postorderSize) {
  return build(inorder, 0, inorderSize - 1, postorder, 0, postorderSize - 1);
}
// ------------------------------- solution end ---------------------------------

static void free_tree(struct TreeNode *node) {
  if (!node) return;
  free_tree(node->left);
  free_tree(node->right);
  free(node);
}

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

static void print_array(int *nums, int size) {
  printf("[");
  for (int i = 0; i < size; i++) {
    if (i) printf(", ");
    printf("%d", nums[i]);
  }
  printf("]");
}

int main(int argc, char const *argv[]) {
  int inorder1[] = {9, 3, 15, 20, 7};
  int postorder1[] = {9, 15, 7, 20, 3};
  int inorder2[] = {-1};
  int postorder2[] = {-1};

  printf("Input:  inorder = ");
  print_array(inorder1, 5);
  printf(", postorder = ");
  print_array(postorder1, 5);
  printf("\n");
  struct TreeNode *root1 = buildTree(inorder1, 5, postorder1, 5);
  printf("Output: ");
  tree_show(root1);
  printf("\n");
  free_tree(root1);

  printf("Input:  inorder = ");
  print_array(inorder2, 1);
  printf(", postorder = ");
  print_array(postorder2, 1);
  printf("\n");
  struct TreeNode *root2 = buildTree(inorder2, 1, postorder2, 1);
  printf("Output: ");
  tree_show(root2);
  printf("\n");
  free_tree(root2);

  (void)argc;
  (void)argv;
  return EXIT_SUCCESS;
}
