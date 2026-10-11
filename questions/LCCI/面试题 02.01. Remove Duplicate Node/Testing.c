#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *removeDuplicateNodes(struct ListNode *head) {
  int seen[20001] = {0};
  struct ListNode dummy;
  dummy.next = head;
  struct ListNode *prev = &dummy, *cur = head;
  while (cur) {
    int idx = cur->val + 10000;
    if (seen[idx]) {
      prev->next = cur->next;
      free(cur);
      cur = prev->next;
    } else {
      seen[idx] = 1;
      prev = cur;
      cur = cur->next;
    }
  }
  return dummy.next;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 3, 2, 1};
  struct ListNode *head = init(arr, 6);
  sds input = show(head);
  printf("Input:  %s\n", input);
  sdsfree(input);
  struct ListNode *res = removeDuplicateNodes(head);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);
  return EXIT_SUCCESS;
}
