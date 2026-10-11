#include <iostream>
#include <string.h>

#include <cc/ListNode.hpp>

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  struct ListNode *dummy = new ListNode(0);
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int carry = 0;
    struct ListNode *p = l1, *prev = dummy;

    dummy->next = p;
    while (l1 != NULL || l2 != NULL) {
      int sum = 0;
      int last_carry = carry;

      if (l1 != NULL) {
        if (p == NULL) {
          prev->next = l1;
          p = l1;
        }
        sum += l1->val;
        l1 = l1->next;
      }

      if (l2 != NULL) {
        if (p == NULL) {
          prev->next = l2;
          p = l2;
        }
        sum += l2->val;
        l2 = l2->next;
      }

      sum += last_carry;
      carry = sum / 10;
      p->val = sum % 10;
      prev = p;
      p = p->next;
    }

    if (carry) {
      p = new ListNode(0);
      p->val = carry;
      p->next = NULL;
      prev->next = p;
    }

    return dummy->next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char **argv) {
  vector<int> arr1 = {2, 4, 6};
  vector<int> arr2 = {5, 6, 4};

  struct ListNode *l1 = ListNode_init(arr1);
  struct ListNode *l2 = ListNode_init(arr2);
  cout << "Input:  " << ListNode_show(l1) << ", " << ListNode_show(l1) << endl;

  Solution solution;
  struct ListNode *res = solution.addTwoNumbers(l1, l2);
  cout << "Output: " << ListNode_show(res) << endl;

  ListNode_destory(solution.dummy);
  ListNode_destory(l2);

  return EXIT_SUCCESS;
}
