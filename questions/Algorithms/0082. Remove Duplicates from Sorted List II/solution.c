#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *deleteDuplicates(struct ListNode *head) {
  struct ListNode dummy;
  dummy.next = head;
  struct ListNode *prev = &dummy;
  struct ListNode *cur = head;
  while (cur) {
    if (cur->next && cur->val == cur->next->val) {
      int val = cur->val;
      while (cur && cur->val == val) {
        struct ListNode *tmp = cur;
        cur = cur->next;
        free(tmp);
      }
      prev->next = cur;
    } else {
      prev = cur;
      cur = cur->next;
    }
  }
  return dummy.next;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 3, 4, 4, 5};
  struct ListNode *head = init(arr, 7);
  sds input = show(head);
  printf("Input:  %s\n", input);
  sdsfree(input);
  struct ListNode *res = deleteDuplicates(head);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);
  return EXIT_SUCCESS;
}
