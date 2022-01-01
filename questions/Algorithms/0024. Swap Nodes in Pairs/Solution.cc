#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *swapPairs(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
      return head;
    }
    ListNode *newHead = head->next;
    head->next = swapPairs(newHead->next);
    newHead->next = head;
    return newHead;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 2, 3, 4};
  struct ListNode *input = ListNode_init(arr);
  cout << "Input:  " << ListNode_show(input) << endl;

  Solution solution;
  struct ListNode *output = solution.swapPairs(input);
  cout << "Output: " << ListNode_show(output) << endl;

  ListNode_destory(output);

  return EXIT_SUCCESS;
}
