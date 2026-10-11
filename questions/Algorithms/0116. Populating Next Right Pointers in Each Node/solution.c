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
  if (!root || !root->left) {
    return root;
  }
  root->left->next = root->right;
  if (root->next) {
    root->right->next = root->next->left;
  }
  connect(root->left);
  connect(root->right);
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
  struct Node nodes[7];
  for (int i = 0; i < 7; i++) {
    nodes[i].val = i + 1;
    nodes[i].left = NULL;
    nodes[i].right = NULL;
    nodes[i].next = NULL;
  }
  nodes[0].left = &nodes[1];
  nodes[0].right = &nodes[2];
  nodes[1].left = &nodes[3];
  nodes[1].right = &nodes[4];
  nodes[2].left = &nodes[5];
  nodes[2].right = &nodes[6];

  printf("Input:  [1, 2, 3, 4, 5, 6, 7]\n");
  printf("Output: ");
  show(connect(&nodes[0]));

  printf("Input:  []\n");
  printf("Output: ");
  show(connect(NULL));

  return EXIT_SUCCESS;
}
