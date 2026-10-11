#include <iostream>
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
  void collect(TreeNode *node, vector<int> &vals) {
    if (!node) return;
    collect(node->left, vals);
    vals.push_back(node->val);
    collect(node->right, vals);
  }

  void assign(TreeNode *node, vector<int> &vals, int &idx) {
    if (!node) return;
    assign(node->left, vals, idx);
    node->val = vals[idx++];
    assign(node->right, vals, idx);
  }

public:
  void recoverTree(TreeNode *root) {
    vector<int> vals;
    collect(root, vals);
    int n = vals.size();
    int i = 0;
    while (i < n - 1 && vals[i] < vals[i + 1]) i++;
    int j = n - 1;
    while (j > 0 && vals[j - 1] < vals[j]) j--;
    swap(vals[i], vals[j]);
    int idx = 0;
    assign(root, vals, idx);
  }
};
// ------------------------------- solution end ---------------------------------

static void show(TreeNode *node, bool &first) {
  if (!node) return;
  show(node->left, first);
  cout << (first ? "" : ", ") << node->val;
  first = false;
  show(node->right, first);
}

int main(int argc, char const *argv[]) {
  TreeNode n1 = {1}, n3 = {3}, n2 = {2};
  n1.right = &n3;
  n3.right = &n2;
  cout << "Input:  [1, 3, null, null, 2]" << endl;
  Solution solution;
  solution.recoverTree(&n1);
  cout << "Output: [";
  bool first = true;
  show(&n1, first);
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
