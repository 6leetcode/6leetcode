#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  struct Node *next;
  struct Node *random;
};

// ------------------------------- solution begin -------------------------------
struct Node *copyRandomList(struct Node *head) {
  if (head == NULL) {
    return NULL;
  }

  struct Node *orig[1001];
  struct Node *copy[1001];
  int size = 0;

  for (struct Node *cur = head; cur != NULL; cur = cur->next) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->val = cur->val;
    node->next = NULL;
    node->random = NULL;
    orig[size] = cur;
    copy[size] = node;
    size++;
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (orig[i]->next != NULL && orig[j] == orig[i]->next) {
        copy[i]->next = copy[j];
      }
      if (orig[i]->random != NULL && orig[j] == orig[i]->random) {
        copy[i]->random = copy[j];
      }
    }
  }

  return copy[0];
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int vals[] = {7, 13, 11, 10, 1};
  int randoms[] = {-1, 0, 4, 2, 0};
  int size = 5;

  struct Node nodes[5];
  for (int i = 0; i < size; i++) {
    nodes[i].val = vals[i];
    nodes[i].next = (i + 1 < size) ? &nodes[i + 1] : NULL;
    nodes[i].random = NULL;
  }
  for (int i = 0; i < size; i++) {
    if (randoms[i] >= 0) {
      nodes[i].random = &nodes[randoms[i]];
    }
  }

  printf("Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]\n");
  struct Node *clone = copyRandomList(&nodes[0]);

  struct Node *list[1001];
  int count = 0;
  for (struct Node *cur = clone; cur != NULL; cur = cur->next) {
    list[count++] = cur;
  }

  printf("Output: [");
  for (int i = 0; i < count; i++) {
    int index = -1;
    for (int j = 0; j < count; j++) {
      if (list[j] == list[i]->random) {
        index = j;
      }
    }
    printf("%s[%d, ", i == 0 ? "" : ", ", list[i]->val);
    if (index < 0) {
      printf("null]");
    } else {
      printf("%d]", index);
    }
  }
  printf("]\n");

  for (int i = 0; i < count; i++) {
    free(list[i]);
  }
  return EXIT_SUCCESS;
}
