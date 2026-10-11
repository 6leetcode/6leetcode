#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
static struct ListNode *mergeTwoLists(struct ListNode *a, struct ListNode *b) {
  struct ListNode dummy;
  dummy.next = NULL;
  struct ListNode *tail = &dummy;

  while (a && b) {
    if (a->val <= b->val) {
      tail->next = a;
      a = a->next;
    } else {
      tail->next = b;
      b = b->next;
    }
    tail = tail->next;
  }
  tail->next = a ? a : b;
  return dummy.next;
}

struct ListNode *sortList(struct ListNode *head) {
  if (!head || !head->next) return head;

  struct ListNode *slow = head;
  struct ListNode *fast = head->next;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }

  struct ListNode *mid = slow->next;
  slow->next = NULL;

  return mergeTwoLists(sortList(head), sortList(mid));
}
// ------------------------------- solution end ---------------------------------

static void run(int *arr, int len) {
  struct ListNode *head = init(arr, len);
  sds input = show(head);
  printf("Input:  [%s]\n", input);
  sdsfree(input);

  struct ListNode *res = sortList(head);
  sds output = show(res);
  printf("Output: [%s]\n", output);
  sdsfree(output);
  destory(res);
}

int main(int argc, char const *argv[]) {
  int a[] = {4, 2, 1, 3};
  run(a, 4);

  int b[] = {-1, 5, 3, 4, 0};
  run(b, 5);

  int c[] = {};
  run(c, 0);

  return EXIT_SUCCESS;
}
