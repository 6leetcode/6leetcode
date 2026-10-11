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
  int mid = lo + (hi - lo + 1) / 2;
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
  int nums1[] = {-10, -3, 0, 5, 9};
  int nums2[] = {1, 3};

  printf("Input:  nums = ");
  print_array(nums1, 5);
  printf("\n");
  struct TreeNode *root1 = sortedArrayToBST(nums1, 5);
  printf("Output: ");
  tree_show(root1);
  printf("\n");
  free_tree(root1);

  printf("Input:  nums = ");
  print_array(nums2, 2);
  printf("\n");
  struct TreeNode *root2 = sortedArrayToBST(nums2, 2);
  printf("Output: ");
  tree_show(root2);
  printf("\n");
  free_tree(root2);

  (void)argc;
  (void)argv;
  return EXIT_SUCCESS;
}
