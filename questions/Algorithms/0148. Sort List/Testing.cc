#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  ListNode *mergeTwoLists(ListNode *a, ListNode *b) {
    ListNode dummy;
    ListNode *tail = &dummy;
    while (a && b) {
      if (a->val <= b->val) {
        tail->next = a;
        a = a->next;
      } else {
        tail->next = b;
        b = b->next;
      }
      tail = tail->next;
    }
    tail->next = a ? a : b;
    return dummy.next;
  }

public:
  ListNode *sortList(ListNode *head) {
    if (!head || !head->next) return head;

    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }

    ListNode *mid = slow->next;
    slow->next = nullptr;

    return mergeTwoLists(sortList(head), sortList(mid));
  }
};
// ------------------------------- solution end ---------------------------------

static void run(vector<int> arr) {
  ListNode *head = ListNode_init(arr);
  cout << "Input:  [" << ListNode_show(head) << "]" << endl;
  Solution solution;
  ListNode *res = solution.sortList(head);
  cout << "Output: [" << ListNode_show(res) << "]" << endl;
  ListNode_destory(res);
}

int main(int argc, char const *argv[]) {
  run({4, 2, 1, 3});
  run({-1, 5, 3, 4, 0});
  run({});
  return EXIT_SUCCESS;
}
