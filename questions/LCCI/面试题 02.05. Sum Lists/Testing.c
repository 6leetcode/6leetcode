#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode dummy;
  dummy.next = NULL;
  struct ListNode *tail = &dummy;
  int carry = 0;
  while (l1 || l2 || carry) {
    int sum = carry;
    if (l1) {
      sum += l1->val;
      l1 = l1->next;
    }
    if (l2) {
      sum += l2->val;
      l2 = l2->next;
    }
    tail->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    tail = tail->next;
    tail->val = sum % 10;
    tail->next = NULL;
    carry = sum / 10;
  }
  return dummy.next;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a1[] = {7, 1, 6};
  int a2[] = {5, 9, 2};
  struct ListNode *l1 = init(a1, 3);
  struct ListNode *l2 = init(a2, 3);
  sds s1 = show(l1), s2 = show(l2);
  printf("Input:  %s, %s\n", s1, s2);
  sdsfree(s1);
  sdsfree(s2);
  struct ListNode *res = addTwoNumbers(l1, l2);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(l1);
  destory(l2);
  destory(res);
  return EXIT_SUCCESS;
}
