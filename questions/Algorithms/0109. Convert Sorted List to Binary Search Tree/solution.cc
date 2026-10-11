#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
  TreeNode *build(vector<int> &nums, int lo, int hi) {
    if (lo > hi) return nullptr;
    int mid = lo + (hi - lo + 1) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = build(nums, lo, mid - 1);
    root->right = build(nums, mid + 1, hi);
    return root;
  }

public:
  TreeNode *sortedListToBST(ListNode *head) {
    vector<int> nums;
    while (head) {
      nums.push_back(head->val);
      head = head->next;
    }
    return build(nums, 0, (int)nums.size() - 1);
  }
};
// ------------------------------- solution end ---------------------------------

static void free_tree(TreeNode *node) {
  if (!node) return;
  free_tree(node->left);
  free_tree(node->right);
  delete node;
}

static string tree_show(TreeNode *root) {
  if (!root) return "[]";
  vector<string> parts;
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty()) {
    TreeNode *node = q.front();
    q.pop();
    if (!node) {
      parts.push_back("null");
    } else {
      parts.push_back(to_string(node->val));
      q.push(node->left);
      q.push(node->right);
    }
  }
  while (!parts.empty() && parts.back() == "null") parts.pop_back();
  stringstream ss;
  ss << "[";
  for (size_t i = 0; i < parts.size(); i++) {
    if (i) ss << ", ";
    ss << parts[i];
  }
  ss << "]";
  return ss.str();
}

static string list_show(ListNode *head) {
  stringstream ss;
  ss << "[";
  bool first = true;
  while (head) {
    if (!first) ss << ", ";
    ss << head->val;
    first = false;
    head = head->next;
  }
  ss << "]";
  return ss.str();
}

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<int> arr1 = {-10, -3, 0, 5, 9};
  ListNode *head1 = ListNode_init(arr1);
  cout << "Input:  head = " << list_show(head1) << endl;
  TreeNode *root1 = solution.sortedListToBST(head1);
  cout << "Output: " << tree_show(root1) << endl;
  free_tree(root1);
  ListNode_destory(head1);

  vector<int> arr2 = {};
  ListNode *head2 = ListNode_init(arr2);
  cout << "Input:  head = " << list_show(head2) << endl;
  TreeNode *root2 = solution.sortedListToBST(head2);
  cout << "Output: " << tree_show(root2) << endl;
  free_tree(root2);
  ListNode_destory(head2);

  return EXIT_SUCCESS;
}
