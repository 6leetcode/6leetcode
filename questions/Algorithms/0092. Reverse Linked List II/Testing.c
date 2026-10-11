#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *reverseBetween(struct ListNode *head, int left, int right) {
  struct ListNode dummy;
  dummy.next = head;
  struct ListNode *pre = &dummy;
  for (int i = 0; i < left - 1; i++) {
    pre = pre->next;
  }
  struct ListNode *cur = pre->next;
  for (int i = 0; i < right - left; i++) {
    struct ListNode *next = cur->next;
    cur->next = next->next;
    next->next = pre->next;
    pre->next = next;
  }
  return dummy.next;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 4, 5};
  struct ListNode *head = init(arr, 5);
  int left = 2, right = 4;
  sds input = show(head);
  printf("Input:  %s, %d, %d\n", input, left, right);
  sdsfree(input);

  struct ListNode *res = reverseBetween(head, left, right);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);
  return EXIT_SUCCESS;
}
