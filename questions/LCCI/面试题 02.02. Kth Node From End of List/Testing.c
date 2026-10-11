#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
int kthToLast(struct ListNode *head, int k) {
  struct ListNode *fast = head, *slow = head;
  for (int i = 0; i < k; i++) fast = fast->next;
  while (fast) {
    fast = fast->next;
    slow = slow->next;
  }
  return slow->val;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 4, 5};
  struct ListNode *head = init(arr, 5);
  int k = 2;
  sds input = show(head);
  printf("Input:  %s, %d\n", input, k);
  sdsfree(input);
  printf("Output: %d\n", kthToLast(head, k));
  destory(head);
  return EXIT_SUCCESS;
}
