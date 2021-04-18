#include <iostream>
#include <tuple>
#include <vector>

#include <cc/ListNode.hpp>

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *reverseKGroup(ListNode *head, int k) {
    if (head == NULL) return head;
    ListNode *tail = head;
    while (k--) {
      if (tail == NULL) return head;
      tail = tail->next;
    }
    ListNode *cur = head, *pre = NULL, *next = NULL;
    while (cur != tail) //注意： reverse[head, tail)
    {
      next = cur->next;
      cur->next = pre;
      pre = cur;
      cur = next;
    }
    head->next = reverseKGroup(tail, k);
    return pre;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct ListNode *input1 = ListNode_init(vector<int>{1, 2, 3, 4, 5});
  int input2 = 3;
  cout << "Input:  " << ListNode_show(input1) << ", " << input2 << endl;

  Solution solution;
  struct ListNode *output = solution.reverseKGroup(input1, input2);
  cout << "Output: " << ListNode_show(output) << endl;
  ListNode_destory(output);

  return EXIT_SUCCESS;
}
