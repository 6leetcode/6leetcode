#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
void deleteNode(struct ListNode *node) {
  struct ListNode *next = node->next;
  node->val = next->val;
  node->next = next->next;
  free(next);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {4, 5, 1, 9};
  struct ListNode *head = init(arr, 4);
  sds input = show(head);
  printf("Input:  %s\n", input);
  sdsfree(input);
  deleteNode(head->next);
  sds output = show(head);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(head);
  return EXIT_SUCCESS;
}
