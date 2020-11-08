#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void show(struct ListNode *node) {
  bool first = true;

  struct ListNode *p = node;
  while (p != NULL) {
    if (first) {
      printf("%d", p->val);
      first = false;
    } else {
      printf(" -> %d", p->val);
    }
    p = p->next;
  }
  printf("\n");
}

struct ListNode *init(int *arr, int len) {
  struct ListNode *result = NULL;
  struct ListNode *prev = NULL;
  struct ListNode *node = NULL;

  bool first = true;

  for (int i = 0; i < len; i++) {
    node = (struct ListNode *)malloc(sizeof(struct ListNode));

    if (first) {
      result = node;
      first = false;
    }

    node->val = *(arr + i);
    node->next = NULL;

    if (prev != NULL) {
      prev->next = node;
    }
    prev = node;
  }
  return result;
}

void destory(struct ListNode *node) {
  struct ListNode *del = node;
  while (node != NULL) {
    node = node->next;
    free(del);
    del = node;
  }
}
