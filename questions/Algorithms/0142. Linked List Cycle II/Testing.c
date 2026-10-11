#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *detectCycle(struct ListNode *head) {
  struct ListNode *slow = head;
  struct ListNode *fast = head;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      struct ListNode *p = head;
      while (p != slow) {
        p = p->next;
        slow = slow->next;
      }
      return p;
    }
  }
  return NULL;
}
// ------------------------------- solution end ---------------------------------

static void run(int *arr, int len, int pos) {
  printf("Input:  head = [");
  for (int i = 0; i < len; i++) {
    printf("%s%d", i == 0 ? "" : ", ", arr[i]);
  }
  printf("], pos = %d\n", pos);

  struct ListNode *head = init(arr, len);
  struct ListNode *tail = NULL;
  if (head) {
    tail = head;
    while (tail->next) {
      tail = tail->next;
    }
  }
  if (pos >= 0) {
    struct ListNode *entry = head;
    for (int i = 0; i < pos; i++) {
      entry = entry->next;
    }
    tail->next = entry;
  }

  struct ListNode *res = detectCycle(head);
  int idx = -1;
  struct ListNode *p = head;
  for (int i = 0; p && i < len; i++) {
    if (p == res) {
      idx = i;
      break;
    }
    p = p->next;
  }
  if (idx < 0) {
    printf("Output: null\n");
  } else {
    printf("Output: %d\n", idx);
  }

  if (pos >= 0 && tail) {
    tail->next = NULL;
  }
  destory(head);
}

int main(int argc, char const *argv[]) {
  int a1[] = {3, 2, 0, -4};
  run(a1, 4, 1);

  int a2[] = {1, 2};
  run(a2, 2, 0);

  int a3[] = {1};
  run(a3, 1, -1);

  run(NULL, 0, -1);

  return EXIT_SUCCESS;
}
