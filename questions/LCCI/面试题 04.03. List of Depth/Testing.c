#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct ListNode {
  int val;
  struct ListNode *next;
};

// ------------------------------- solution begin -------------------------------
struct ListNode **listOfDepth(struct TreeNode *tree, int *returnSize) {
  struct ListNode **res = (struct ListNode **)malloc(sizeof(struct ListNode *) * 10000);
  *returnSize = 0;
  if (!tree) return res;
  struct TreeNode **queue = (struct TreeNode **)malloc(sizeof(struct TreeNode *) * 10000);
  int head = 0, tail = 0;
  queue[tail++] = tree;
  while (head < tail) {
    int levelSize = tail - head;
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode *lt = &dummy;
    for (int i = 0; i < levelSize; i++) {
      struct TreeNode *node = queue[head++];
      lt->next = (struct ListNode *)malloc(sizeof(struct ListNode));
      lt = lt->next;
      lt->val = node->val;
      lt->next = NULL;
      if (node->left) queue[tail++] = node->left;
      if (node->right) queue[tail++] = node->right;
    }
    res[(*returnSize)++] = dummy.next;
  }
  free(queue);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n1 = {1, NULL, NULL}, n2 = {2, NULL, NULL}, n3 = {3, NULL, NULL};
  struct TreeNode n4 = {4, NULL, NULL}, n5 = {5, NULL, NULL}, n7 = {7, NULL, NULL}, n8 = {8, NULL, NULL};
  n1.left = &n2;
  n1.right = &n3;
  n2.left = &n4;
  n2.right = &n5;
  n3.right = &n7;
  n4.left = &n8;
  printf("Input:  [1, 2, 3, 4, 5, null, 7, 8]\n");
  int size = 0;
  struct ListNode **res = listOfDepth(&n1, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    struct ListNode *p = res[i];
    int first = 1;
    while (p) {
      printf("%s%d", first ? "" : ", ", p->val);
      first = 0;
      p = p->next;
    }
    printf("]");
    while (res[i]) {
      struct ListNode *tmp = res[i];
      res[i] = res[i]->next;
      free(tmp);
    }
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
