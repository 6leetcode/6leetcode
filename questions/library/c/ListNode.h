#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sds.h>

#pragma once

struct ListNode {
  int val;
  struct ListNode *next;
};

sds show(struct ListNode *node) {
  bool first = true;

  sds str = sdsnew("");
  struct ListNode *p = node;
  while (p != NULL) {
    if (first) {
      str = sdscatprintf(str, "%d", p->val);
      first = false;
    } else {
      str = sdscatprintf(str, " -> %d", p->val);
    }
    p = p->next;
  }
  return str;
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
