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
  Solution solution;

  int arr1[3] = {1, 2, 4};
  struct ListNode *l1 = init(arr1, sizeof(arr1) / sizeof(int));
  printf("Input:  ");
  show(l1);

  int arr2[3] = {1, 3, 4};
  struct ListNode *l2 = init(arr2, sizeof(arr2) / sizeof(int));
  printf("Input:  ");
  show(l2);

  struct ListNode *res = solution.mergeTwoLists(l1, l2);
  printf("Output: ");
  show(res);

  destory(res);

  return EXIT_SUCCESS;
}
