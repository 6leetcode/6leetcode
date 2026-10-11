#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<ListNode *> listOfDepth(TreeNode *tree) {
    vector<ListNode *> res;
    if (!tree) return res;
    queue<TreeNode *> q;
    q.push(tree);
    while (!q.empty()) {
      int levelSize = q.size();
      ListNode dummy(0);
      ListNode *lt = &dummy;
      for (int i = 0; i < levelSize; i++) {
        TreeNode *node = q.front();
        q.pop();
        lt->next = new ListNode(node->val);
        lt = lt->next;
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
      res.push_back(dummy.next);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n1(1), n2(2), n3(3), n4(4), n5(5), n7(7), n8(8);
  n1.left = &n2;
  n1.right = &n3;
  n2.left = &n4;
  n2.right = &n5;
  n3.right = &n7;
  n4.left = &n8;
  cout << "Input:  [1, 2, 3, 4, 5, null, 7, 8]" << endl;
  Solution solution;
  vector<ListNode *> res = solution.listOfDepth(&n1);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) {
    cout << (i == 0 ? "" : ", ") << "[";
    ListNode *p = res[i];
    bool first = true;
    while (p) {
      cout << (first ? "" : ", ") << p->val;
      first = false;
      p = p->next;
    }
    cout << "]";
  }
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
