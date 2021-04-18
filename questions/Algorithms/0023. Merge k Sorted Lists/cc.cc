#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
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
// ------------------------------- solution end ---------------------------------

int main(int argc, char **argv) {
  vector<int> arr1 = {1, 4, 5};
  vector<int> arr2 = {1, 3, 4};
  vector<int> arr3 = {2, 6};

  struct ListNode *l1 = ListNode_init(arr1);
  struct ListNode *l2 = ListNode_init(arr2);
  struct ListNode *l3 = ListNode_init(arr2);
  vector<ListNode *> input = {l1, l2, l3};
  cout << "Input:  " << ListNode_vector_show(input) << endl;

  Solution solution;
  struct ListNode *res = solution.mergeKLists(input);
  cout << "Output: " << ListNode_show(res) << endl;
  ListNode_destory(res);

  return EXIT_SUCCESS;
}
