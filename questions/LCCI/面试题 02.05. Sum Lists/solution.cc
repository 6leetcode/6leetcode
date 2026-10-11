#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode dummy(0);
    ListNode *tail = &dummy;
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
      tail->next = new ListNode(sum % 10);
      tail = tail->next;
      carry = sum / 10;
    }
    return dummy.next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct ListNode *l1 = ListNode_init(vector<int>{7, 1, 6});
  struct ListNode *l2 = ListNode_init(vector<int>{5, 9, 2});
  cout << "Input:  " << ListNode_show(l1) << ", " << ListNode_show(l2) << endl;
  Solution solution;
  struct ListNode *res = solution.addTwoNumbers(l1, l2);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(l1);
  ListNode_destory(l2);
  ListNode_destory(res);
  return EXIT_SUCCESS;
}
