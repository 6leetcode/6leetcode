#include <iostream>
#include <queue>
#include <vector>

#include <cc/TreeNode.hpp>
#include <cc/matrix.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> res;
    if (root == nullptr) return res;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      int size = q.size();
      vector<int> level;
      for (int i = 0; i < size; i++) {
        TreeNode *node = q.front();
        q.pop();
        level.push_back(node->val);
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
      res.push_back(level);
    }
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

static TreeNode *build() {
  TreeNode *root = new TreeNode(3);
  root->left = new TreeNode(9);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);
  return root;
}

int main(int argc, char const *argv[]) {
  Solution solution;

  TreeNode *t1 = build();
  cout << "Input:  [3, 9, 20, null, null, 15, 7]" << endl;
  cout << "Output: " << matrix_show(solution.levelOrder(t1)) << endl;
  TreeNode_destory(t1);

  TreeNode *t2 = new TreeNode(1);
  cout << "Input:  [1]" << endl;
  cout << "Output: " << matrix_show(solution.levelOrder(t2)) << endl;
  TreeNode_destory(t2);

  cout << "Input:  []" << endl;
  cout << "Output: " << matrix_show(solution.levelOrder(nullptr)) << endl;

  return EXIT_SUCCESS;
}
