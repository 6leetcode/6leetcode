#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  struct Node *left;
  struct Node *right;
  struct Node *next;
};

// ------------------------------- solution begin -------------------------------
struct Node *connect(struct Node *root) {
  struct Node *cur = root;
  while (cur) {
    struct Node dummy;
    dummy.next = NULL;
    struct Node *tail = &dummy;
    struct Node *node = cur;
    while (node) {
      if (node->left) {
        tail->next = node->left;
        tail = tail->next;
      }
      if (node->right) {
        tail->next = node->right;
        tail = tail->next;
      }
      node = node->next;
    }
    cur = dummy.next;
  }
  return root;
}
// ------------------------------- solution end ---------------------------------

static struct Node *first_of_next_level(struct Node *cur) {
  while (cur) {
    if (cur->left) return cur->left;
    if (cur->right) return cur->right;
    cur = cur->next;
  }
  return NULL;
}

static void show(struct Node *root) {
  printf("[");
  int first = 1;
  struct Node *cur = root;
  while (cur) {
    struct Node *node = cur;
    while (node) {
      if (!first) printf(",");
      printf("%d", node->val);
      first = 0;
      node = node->next;
    }
    if (!first) printf(",");
    printf("#");
    first = 0;
    cur = first_of_next_level(cur);
  }
  printf("]\n");
}

int main(int argc, char const *argv[]) {
  struct Node nodes[6];
  for (int i = 0; i < 6; i++) {
    nodes[i].left = NULL;
    nodes[i].right = NULL;
    nodes[i].next = NULL;
  }
  nodes[0].val = 1;
  nodes[1].val = 2;
  nodes[2].val = 3;
  nodes[3].val = 4;
  nodes[4].val = 5;
  nodes[5].val = 7;

  nodes[0].left = &nodes[1];
  nodes[0].right = &nodes[2];
  nodes[1].left = &nodes[3];
  nodes[1].right = &nodes[4];
  nodes[2].right = &nodes[5];

  printf("Input:  [1, 2, 3, 4, 5, null, 7]\n");
  printf("Output: ");
  show(connect(&nodes[0]));

  printf("Input:  []\n");
  printf("Output: ");
  show(connect(NULL));

  return EXIT_SUCCESS;
}
