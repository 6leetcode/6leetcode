#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  void flatten(TreeNode *root) {
    TreeNode *cur = root;
    while (cur) {
      if (cur->left) {
        TreeNode *prev = cur->left;
        while (prev->right) prev = prev->right;
        prev->right = cur->right;
        cur->right = cur->left;
        cur->left = nullptr;
      }
      cur = cur->right;
    }
  }
};
// ------------------------------- solution end ---------------------------------

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

int main(int argc, char const *argv[]) {
  Solution solution;

  TreeNode n1(1), n2(2), n3(3), n4(4), n5(5), n6(6);
  n1.left = &n2;
  n1.right = &n5;
  n2.left = &n3;
  n2.right = &n4;
  n5.right = &n6;
  cout << "Input:  root = " << tree_show(&n1) << endl;
  solution.flatten(&n1);
  cout << "Output: " << tree_show(&n1) << endl;

  TreeNode n0(0);
  cout << "Input:  root = " << tree_show(&n0) << endl;
  solution.flatten(&n0);
  cout << "Output: " << tree_show(&n0) << endl;

  TreeNode *empty = nullptr;
  cout << "Input:  root = " << tree_show(empty) << endl;
  solution.flatten(empty);
  cout << "Output: " << tree_show(empty) << endl;

  return EXIT_SUCCESS;
}
