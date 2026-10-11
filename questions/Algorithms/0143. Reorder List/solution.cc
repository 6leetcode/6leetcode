#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void reorderList(ListNode *head) {
    if (!head || !head->next) {
      return;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next && fast->next->next) {
      slow = slow->next;
      fast = fast->next->next;
    }

    ListNode *second = slow->next;
    slow->next = NULL;

    ListNode *prev = NULL;
    while (second) {
      ListNode *nxt = second->next;
      second->next = prev;
      prev = second;
      second = nxt;
    }

    ListNode *first = head;
    second = prev;
    while (second) {
      ListNode *fnext = first->next;
      ListNode *snext = second->next;
      first->next = second;
      second->next = fnext;
      first = fnext;
      second = snext;
    }
  }
};
// ------------------------------- solution end ---------------------------------

static void run(vector<int> arr) {
  struct ListNode *head = ListNode_init(arr);
  cout << "Input:  " << ListNode_show(head) << endl;

  Solution solution;
  solution.reorderList(head);

  cout << "Output: " << ListNode_show(head) << endl;
  ListNode_destory(head);
}

int main(int argc, char const *argv[]) {
  run({1, 2, 3, 4});
  run({1, 2, 3, 4, 5});
  run({1});
  return EXIT_SUCCESS;
}
