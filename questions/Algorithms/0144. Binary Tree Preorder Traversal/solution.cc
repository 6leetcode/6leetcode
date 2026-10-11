#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
  void dfs(TreeNode *node, vector<int> &out) {
    if (!node) return;
    out.push_back(node->val);
    dfs(node->left, out);
    dfs(node->right, out);
  }

public:
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> out;
    dfs(root, out);
    return out;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode b3(3), b2(2), root1(1);
  b2.left = &b3;
  root1.right = &b2;

  TreeNode root2(1);

  TreeNode c4(4), c5(5), c2(2), c3(3), root3(1);
  c2.left = &c4;
  c2.right = &c5;
  root3.left = &c2;
  root3.right = &c3;

  Solution solution;

  cout << "Input:  [1, null, 2, 3]" << endl;
  cout << "Output: " << array_show(solution.preorderTraversal(&root1)) << endl;

  cout << "Input:  []" << endl;
  cout << "Output: " << array_show(solution.preorderTraversal(NULL)) << endl;

  cout << "Input:  [1]" << endl;
  cout << "Output: " << array_show(solution.preorderTraversal(&root2)) << endl;

  cout << "Input:  [1, 2, 3, 4, 5]" << endl;
  cout << "Output: " << array_show(solution.preorderTraversal(&root3)) << endl;

  return EXIT_SUCCESS;
}
