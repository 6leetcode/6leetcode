#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *swapPairs(struct ListNode *head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  struct ListNode *newHead = head->next;
  head->next = swapPairs(newHead->next);
  newHead->next = head;
  return newHead;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 4};
  struct ListNode *head = init(arr, 4);
  sds input = show(head);
  printf("Input:  %s\n", input);
  sdsfree(input);

  struct ListNode *res = swapPairs(head);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);

  return EXIT_SUCCESS;
}
