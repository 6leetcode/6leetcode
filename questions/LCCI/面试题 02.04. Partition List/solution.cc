#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *partition(ListNode *head, int x) {
    ListNode lessDummy(0), greaterDummy(0);
    ListNode *less = &lessDummy, *greater = &greaterDummy;
    for (ListNode *cur = head; cur; cur = cur->next) {
      if (cur->val < x) {
        less->next = cur;
        less = cur;
      } else {
        greater->next = cur;
        greater = cur;
      }
    }
    greater->next = nullptr;
    less->next = greaterDummy.next;
    return lessDummy.next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 4, 3, 2, 5, 2};
  struct ListNode *head = ListNode_init(arr);
  int x = 3;
  cout << "Input:  " << ListNode_show(head) << ", " << x << endl;
  Solution solution;
  struct ListNode *res = solution.partition(head, x);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(res);
  return EXIT_SUCCESS;
}
