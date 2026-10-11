#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode *prev = &dummy;
    ListNode *cur = head;
    while (cur) {
      if (cur->next && cur->val == cur->next->val) {
        int val = cur->val;
        while (cur && cur->val == val) {
          ListNode *tmp = cur;
          cur = cur->next;
          delete tmp;
        }
        prev->next = cur;
      } else {
        prev = cur;
        cur = cur->next;
      }
    }
    return dummy.next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 2, 3, 3, 4, 4, 5};
  struct ListNode *head = ListNode_init(arr);
  cout << "Input:  " << ListNode_show(head) << endl;
  Solution solution;
  struct ListNode *res = solution.deleteDuplicates(head);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(res);
  return EXIT_SUCCESS;
}
