#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *insertionSortList(ListNode *head) {
    ListNode dummy;
    ListNode *cur = head;
    while (cur) {
      ListNode *next = cur->next;
      ListNode *prev = &dummy;
      while (prev->next && prev->next->val < cur->val) {
        prev = prev->next;
      }
      cur->next = prev->next;
      prev->next = cur;
      cur = next;
    }
    return dummy.next;
  }
};
// ------------------------------- solution end ---------------------------------

static void run(vector<int> arr) {
  ListNode *head = ListNode_init(arr);
  cout << "Input:  [" << ListNode_show(head) << "]" << endl;
  Solution solution;
  ListNode *res = solution.insertionSortList(head);
  cout << "Output: [" << ListNode_show(res) << "]" << endl;
  ListNode_destory(res);
}

int main(int argc, char const *argv[]) {
  run({4, 2, 1, 3});
  run({-1, 5, 3, 4, 0});
  return EXIT_SUCCESS;
}
