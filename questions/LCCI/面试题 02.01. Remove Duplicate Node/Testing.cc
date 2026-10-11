#include <iostream>
#include <unordered_set>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *removeDuplicateNodes(ListNode *head) {
    unordered_set<int> seen;
    ListNode dummy(0);
    dummy.next = head;
    ListNode *prev = &dummy, *cur = head;
    while (cur) {
      if (seen.count(cur->val)) {
        prev->next = cur->next;
        delete cur;
        cur = prev->next;
      } else {
        seen.insert(cur->val);
        prev = cur;
        cur = cur->next;
      }
    }
    return dummy.next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 2, 3, 3, 2, 1};
  struct ListNode *head = ListNode_init(arr);
  cout << "Input:  " << ListNode_show(head) << endl;
  Solution solution;
  struct ListNode *res = solution.removeDuplicateNodes(head);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(res);
  return EXIT_SUCCESS;
}
