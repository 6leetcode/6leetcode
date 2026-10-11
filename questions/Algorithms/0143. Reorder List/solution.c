#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
void reorderList(struct ListNode *head) {
  if (!head || !head->next) {
    return;
  }

  struct ListNode *slow = head;
  struct ListNode *fast = head;
  while (fast->next && fast->next->next) {
    slow = slow->next;
    fast = fast->next->next;
  }

  struct ListNode *second = slow->next;
  slow->next = NULL;

  struct ListNode *prev = NULL;
  while (second) {
    struct ListNode *nxt = second->next;
    second->next = prev;
    prev = second;
    second = nxt;
  }

  struct ListNode *first = head;
  second = prev;
  while (second) {
    struct ListNode *fnext = first->next;
    struct ListNode *snext = second->next;
    first->next = second;
    second->next = fnext;
    first = fnext;
    second = snext;
  }
}
// ------------------------------- solution end ---------------------------------

static void run(int *arr, int len) {
  struct ListNode *head = init(arr, len);
  sds input = show(head);
  printf("Input:  %s\n", input);
  sdsfree(input);

  reorderList(head);

  sds output = show(head);
  printf("Output: %s\n", output);
  sdsfree(output);

  destory(head);
}

int main(int argc, char const *argv[]) {
  int a1[] = {1, 2, 3, 4};
  run(a1, 4);

  int a2[] = {1, 2, 3, 4, 5};
  run(a2, 5);

  int a3[] = {1};
  run(a3, 1);

  return EXIT_SUCCESS;
}
