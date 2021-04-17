#include <iostream>
#include <string.h>
#include <vector>

#include <ListNode.hpp>

using namespace std;

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *a, ListNode *b) {
    if ((!a) || (!b)) return a ? a : b;
    ListNode head, *tail = &head, *aPtr = a, *bPtr = b;
    while (aPtr && bPtr) {
      if (aPtr->val < bPtr->val) {
        tail->next = aPtr;
        aPtr = aPtr->next;
      } else {
        tail->next = bPtr;
        bPtr = bPtr->next;
      }
      tail = tail->next;
    }
    tail->next = (aPtr ? aPtr : bPtr);
    return head.next;
  }

  ListNode *mergeKLists(vector<ListNode *> &lists) {
    ListNode *ans = nullptr;
    for (size_t i = 0; i < lists.size(); ++i) {
      ans = mergeTwoLists(ans, lists[i]);
    }
    return ans;
  }
};

int main(int argc, char **argv) {
  int arr1[] = {1, 4, 5};
  int arr2[] = {1, 3, 4};
  int arr3[] = {2, 6};

  struct ListNode *l1 = ListNode_init(arr1, sizeof(arr1) / sizeof(int));
  struct ListNode *l2 = ListNode_init(arr2, sizeof(arr2) / sizeof(int));
  struct ListNode *l3 = ListNode_init(arr2, sizeof(arr3) / sizeof(int));
  vector<ListNode *> input = {l1, l2, l3};
  cout << "Input:  " << ListNode_vector_show(input) << endl;

  Solution solution;
  struct ListNode *res = solution.mergeKLists(input);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(res);

  return EXIT_SUCCESS;
}
