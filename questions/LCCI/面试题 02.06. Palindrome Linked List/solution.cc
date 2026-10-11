#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool isPalindrome(ListNode *head) {
    vector<int> vals;
    for (ListNode *p = head; p; p = p->next) vals.push_back(p->val);
    for (int i = 0, j = (int)vals.size() - 1; i < j; i++, j--) {
      if (vals[i] != vals[j]) return false;
    }
    return true;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> arr = {1, 2, 2, 1};
  struct ListNode *head = ListNode_init(arr);
  cout << "Input:  " << ListNode_show(head) << endl;
  Solution solution;
  cout << "Output: " << (solution.isPalindrome(head) ? "true" : "false") << endl;
  ListNode_destory(head);
  return EXIT_SUCCESS;
}
