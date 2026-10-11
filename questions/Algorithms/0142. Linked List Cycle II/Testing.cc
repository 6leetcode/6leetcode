#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        ListNode *p = head;
        while (p != slow) {
          p = p->next;
          slow = slow->next;
        }
        return p;
      }
    }
    return NULL;
  }
};
// ------------------------------- solution end ---------------------------------

static void run(vector<int> arr, int pos) {
  cout << "Input:  head = [";
  for (size_t i = 0; i < arr.size(); i++) {
    cout << (i == 0 ? "" : ", ") << arr[i];
  }
  cout << "], pos = " << pos << endl;

  struct ListNode *head = ListNode_init(arr);
  struct ListNode *tail = NULL;
  if (head) {
    tail = head;
    while (tail->next) {
      tail = tail->next;
    }
  }
  if (pos >= 0) {
    struct ListNode *entry = head;
    for (int i = 0; i < pos; i++) {
      entry = entry->next;
    }
    tail->next = entry;
  }

  Solution solution;
  ListNode *res = solution.detectCycle(head);
  int idx = -1;
  struct ListNode *p = head;
  for (int i = 0; p && i < (int)arr.size(); i++) {
    if (p == res) {
      idx = i;
      break;
    }
    p = p->next;
  }
  if (idx < 0) {
    cout << "Output: null" << endl;
  } else {
    cout << "Output: " << idx << endl;
  }

  if (pos >= 0 && tail) {
    tail->next = NULL;
  }
  ListNode_destory(head);
}

int main(int argc, char const *argv[]) {
  run({3, 2, 0, -4}, 1);
  run({1, 2}, 0);
  run({1}, -1);
  run({}, -1);
  return EXIT_SUCCESS;
}
