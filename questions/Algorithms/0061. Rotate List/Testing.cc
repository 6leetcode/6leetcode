#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {
    if (!head || !head->next || k == 0) {
      return head;
    }
    int len = 1;
    ListNode *tail = head;
    while (tail->next) {
      tail = tail->next;
      len++;
    }
    k %= len;
    if (k == 0) {
      return head;
    }
    tail->next = head;
    ListNode *newTail = head;
    for (int i = 0; i < len - k - 1; i++) {
      newTail = newTail->next;
    }
    ListNode *newHead = newTail->next;
    newTail->next = nullptr;
    return newHead;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 2, 3, 4, 5};
  struct ListNode *head = ListNode_init(arr);
  int k = 2;
  cout << "Input:  " << ListNode_show(head) << ", " << k << endl;
  Solution solution;
  struct ListNode *res = solution.rotateRight(head, k);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(res);
  return EXIT_SUCCESS;
}
