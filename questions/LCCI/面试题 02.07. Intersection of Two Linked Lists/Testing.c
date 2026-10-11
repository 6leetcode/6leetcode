#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

// ------------------------------- solution begin -------------------------------
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
  struct ListNode *a = headA, *b = headB;
  while (a != b) {
    a = a ? a->next : headB;
    b = b ? b->next : headA;
  }
  return a;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct ListNode s1 = {8, NULL}, s2 = {4, NULL}, s3 = {5, NULL};
  s1.next = &s2;
  s2.next = &s3;
  struct ListNode a2 = {1, &s1}, a1 = {4, &a2};
  struct ListNode b3 = {1, &s1}, b2 = {0, &b3}, b1 = {5, &b2};
  printf("Input:  [4, 1, 8, 4, 5], [5, 0, 1, 8, 4, 5]\n");
  struct ListNode *res = getIntersectionNode(&a1, &b1);
  if (res) {
    printf("Output: Intersected at '%d'\n", res->val);
  } else {
    printf("Output: No intersection\n");
  }
  return EXIT_SUCCESS;
}
