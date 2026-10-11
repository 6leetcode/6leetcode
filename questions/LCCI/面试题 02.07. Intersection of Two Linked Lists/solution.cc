#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *a = headA, *b = headB;
    while (a != b) {
      a = a ? a->next : headB;
      b = b ? b->next : headA;
    }
    return a;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  ListNode s1(8), s2(4), s3(5);
  s1.next = &s2;
  s2.next = &s3;
  ListNode a2(1), a1(4);
  a1.next = &a2;
  a2.next = &s1;
  ListNode b3(1), b2(0), b1(5);
  b1.next = &b2;
  b2.next = &b3;
  b3.next = &s1;
  cout << "Input:  [4, 1, 8, 4, 5], [5, 0, 1, 8, 4, 5]" << endl;
  Solution solution;
  ListNode *res = solution.getIntersectionNode(&a1, &b1);
  if (res) {
    cout << "Output: Intersected at '" << res->val << "'" << endl;
  } else {
    cout << "Output: No intersection" << endl;
  }
  return EXIT_SUCCESS;
}
