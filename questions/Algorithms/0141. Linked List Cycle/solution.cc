#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool hasCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        return true;
      }
    }
    return false;
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
  cout << "Output: " << (solution.hasCycle(head) ? "true" : "false") << endl;

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
