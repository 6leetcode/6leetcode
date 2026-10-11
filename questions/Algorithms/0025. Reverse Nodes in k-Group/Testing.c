#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *reverseKGroup(struct ListNode *head, int k) {
  if (head == NULL) {
    return head;
  }
  struct ListNode *tail = head;
  for (int i = 0; i < k; i++) {
    if (tail == NULL) {
      return head;
    }
    tail = tail->next;
  }
  struct ListNode *cur = head, *pre = NULL, *next = NULL;
  while (cur != tail) {
    next = cur->next;
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  head->next = reverseKGroup(tail, k);
  return pre;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 4, 5};
  struct ListNode *head = init(arr, 5);
  int input = 2;
  sds show_input = show(head);
  printf("Input:  %s %d\n", show_input, input);
  sdsfree(show_input);

  struct ListNode *res = reverseKGroup(head, input);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);

  return EXIT_SUCCESS;
}
