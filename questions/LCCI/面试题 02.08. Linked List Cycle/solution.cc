#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        ListNode *p = head;
        while (p != slow) {
          p = p->next;
          slow = slow->next;
        }
        return p;
      }
    }
    return nullptr;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  ListNode n1(3), n2(2), n3(0), n4(-4);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n2;
  cout << "Input:  [3, 2, 0, -4], pos = 1" << endl;
  Solution solution;
  ListNode *res = solution.detectCycle(&n1);
  if (res) {
    cout << "Output: tail connects to node with value " << res->val << endl;
  } else {
    cout << "Output: no cycle" << endl;
  }
  return EXIT_SUCCESS;
}
