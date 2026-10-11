#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void deleteNode(ListNode *node) {
    ListNode *next = node->next;
    node->val = next->val;
    node->next = next->next;
    delete next;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {4, 5, 1, 9};
  struct ListNode *head = ListNode_init(arr);
  cout << "Input:  " << ListNode_show(head) << endl;
  Solution solution;
  solution.deleteNode(head->next);
  cout << "Output: " << ListNode_show(head) << endl;
  ListNode_destory(head);
  return EXIT_SUCCESS;
}
