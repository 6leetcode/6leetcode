#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *deleteDuplicates(struct ListNode *head) {
  struct ListNode *cur = head;
  while (cur && cur->next) {
    if (cur->val == cur->next->val) {
      struct ListNode *tmp = cur->next;
      cur->next = cur->next->next;
      free(tmp);
    } else {
      cur = cur->next;
    }
  }
  return head;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 1, 2};
  struct ListNode *head = init(arr, 3);
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
