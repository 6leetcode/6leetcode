#include <iostream>

#include <ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr) {
      return l2;
    } else if (l2 == nullptr) {
      return l1;
    } else if (l1->val < l2->val) {
      l1->next = mergeTwoLists(l1->next, l2);
      return l1;
    } else {
      l2->next = mergeTwoLists(l1, l2->next);
      return l2;
    }
  }
};

// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr1[3] = {1, 2, 4};
  int arr2[3] = {1, 3, 4};

  struct ListNode *l1 = ListNode_init(arr1, sizeof(arr1) / sizeof(int));
  struct ListNode *l2 = ListNode_init(arr2, sizeof(arr2) / sizeof(int));
  cout << "Input:  " << ListNode_show(l1) << ", " << ListNode_show(l2) << endl;

  Solution solution;
  struct ListNode *res = solution.mergeTwoLists(l1, l2);
  cout << "Input:  " << ListNode_show(res) << endl;

  ListNode_destory(res);

  return EXIT_SUCCESS;
}
