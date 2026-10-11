#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *insertionSortList(struct ListNode *head) {
  struct ListNode dummy;
  dummy.next = NULL;

  struct ListNode *cur = head;
  while (cur) {
    struct ListNode *next = cur->next;
    struct ListNode *prev = &dummy;
    while (prev->next && prev->next->val < cur->val) {
      prev = prev->next;
    }
    cur->next = prev->next;
    prev->next = cur;
    cur = next;
  }
  return dummy.next;
}
// ------------------------------- solution end ---------------------------------

static void run(int *arr, int len) {
  struct ListNode *head = init(arr, len);
  sds input = show(head);
  printf("Input:  [%s]\n", input);
  sdsfree(input);

  struct ListNode *res = insertionSortList(head);
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

  return EXIT_SUCCESS;
}
