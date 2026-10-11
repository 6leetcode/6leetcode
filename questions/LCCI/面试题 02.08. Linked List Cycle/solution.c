#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

// ------------------------------- solution begin -------------------------------
struct ListNode *detectCycle(struct ListNode *head) {
  struct ListNode *slow = head, *fast = head;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      struct ListNode *p = head;
      while (p != slow) {
        p = p->next;
        slow = slow->next;
      }
      return p;
    }
  }
  return NULL;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct ListNode n4 = {-4, NULL}, n3 = {0, &n4}, n2 = {2, &n3}, n1 = {3, &n2};
  n4.next = &n2;
  printf("Input:  [3, 2, 0, -4], pos = 1\n");
  struct ListNode *res = detectCycle(&n1);
  if (res) {
    printf("Output: tail connects to node index with value %d\n", res->val);
  } else {
    printf("Output: no cycle\n");
  }
  return EXIT_SUCCESS;
}
