#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *partition(struct ListNode *head, int x) {
  struct ListNode lessDummy, greaterDummy;
  lessDummy.next = NULL;
  greaterDummy.next = NULL;
  struct ListNode *less = &lessDummy, *greater = &greaterDummy;
  for (struct ListNode *cur = head; cur; cur = cur->next) {
    if (cur->val < x) {
      less->next = cur;
      less = cur;
    } else {
      greater->next = cur;
      greater = cur;
    }
  }
  greater->next = NULL;
  less->next = greaterDummy.next;
  return lessDummy.next;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 4, 3, 2, 5, 2};
  struct ListNode *head = init(arr, 6);
  int x = 3;
  sds input = show(head);
  printf("Input:  %s, %d\n", input, x);
  sdsfree(input);
  struct ListNode *res = partition(head, x);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);
  return EXIT_SUCCESS;
}
