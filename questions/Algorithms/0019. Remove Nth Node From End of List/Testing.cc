#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode *fast = &dummy, *slow = &dummy;
    for (int i = 0; i < n; i++) {
      fast = fast->next;
    }
    while (fast->next) {
      fast = fast->next;
      slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy.next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input1 = {1, 2, 3, 4, 5};
  int input2 = 2;
  ListNode *head = ListNode_init(input1);
  cout << "Input:  " << ListNode_show(head) << " " << input2 << endl;
  Solution solution;
  cout << "Output: " << ListNode_show(solution.removeNthFromEnd(head, input2)) << endl;
  return EXIT_SUCCESS;
}
