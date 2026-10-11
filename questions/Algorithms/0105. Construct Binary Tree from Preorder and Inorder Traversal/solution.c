#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static struct TreeNode *build(int *preorder, int preStart, int preEnd, int *inorder, int inStart, int inEnd) {
  if (preStart > preEnd) return NULL;
  int rootVal = preorder[preStart];
  int idx = inStart;
  while (inorder[idx] != rootVal) idx++;
  int leftLen = idx - inStart;
  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->val = rootVal;
  root->left = build(preorder, preStart + 1, preStart + leftLen, inorder, inStart, idx - 1);
  root->right = build(preorder, preStart + leftLen + 1, preEnd, inorder, idx + 1, inEnd);
  return root;
}

struct TreeNode *buildTree(int *preorder, int preorderSize, int *inorder, int inorderSize) {
  return build(preorder, 0, preorderSize - 1, inorder, 0, inorderSize - 1);
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
  int preorder1[] = {3, 9, 20, 15, 7};
  int inorder1[] = {9, 3, 15, 20, 7};
  int preorder2[] = {-1};
  int inorder2[] = {-1};

  printf("Input:  preorder = ");
  print_array(preorder1, 5);
  printf(", inorder = ");
  print_array(inorder1, 5);
  printf("\n");
  struct TreeNode *root1 = buildTree(preorder1, 5, inorder1, 5);
  printf("Output: ");
  tree_show(root1);
  printf("\n");
  free_tree(root1);

  printf("Input:  preorder = ");
  print_array(preorder2, 1);
  printf(", inorder = ");
  print_array(inorder2, 1);
  printf("\n");
  struct TreeNode *root2 = buildTree(preorder2, 1, inorder2, 1);
  printf("Output: ");
  tree_show(root2);
  printf("\n");
  free_tree(root2);

  (void)argc;
  (void)argv;
  return EXIT_SUCCESS;
}
