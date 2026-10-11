#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int kthToLast(ListNode *head, int k) {
    ListNode *fast = head, *slow = head;
    for (int i = 0; i < k; i++) fast = fast->next;
    while (fast) {
      fast = fast->next;
      slow = slow->next;
    }
    return slow->val;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 2, 3, 4, 5};
  struct ListNode *head = ListNode_init(arr);
  int k = 2;
  cout << "Input:  " << ListNode_show(head) << ", " << k << endl;
  Solution solution;
  cout << "Output: " << solution.kthToLast(head, k) << endl;
  ListNode_destory(head);
  return EXIT_SUCCESS;
}
