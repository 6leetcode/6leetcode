#include <iostream>

#include <cc/ListNode.hpp>

using namespace std;

class Solution {
public:
  ListNode *dummyNode = new ListNode(0);

  ListNode *reverseBetween(ListNode *head, int left, int right) {
    // 设置 dummyNode 是这一类问题的一般做法

    dummyNode->next = head;
    ListNode *pre = dummyNode;
    for (int i = 0; i < left - 1; i++) {
      pre = pre->next;
    }
    ListNode *cur = pre->next;
    ListNode *next;
    for (int i = 0; i < right - left; i++) {
      next = cur->next;
      cur->next = next->next;
      next->next = pre->next;
      pre->next = next;
    }
    return dummyNode->next;
  }
};

int main(int argc, char const *argv[]) {
  struct ListNode *input1 = ListNode_init(vector<int>{1, 2, 3, 4, 5});
  int input2 = 2, input3 = 4;
  cout << "Input:  " << ListNode_show(input1) << ", " << input2 << ", " << input3 << endl;
  Solution solution;
  struct ListNode *output = solution.reverseBetween(input1, input2, input3);
  cout << "Output: " << ListNode_show(output) << endl;
  ListNode_destory(solution.dummyNode);
  return EXIT_SUCCESS;
}
