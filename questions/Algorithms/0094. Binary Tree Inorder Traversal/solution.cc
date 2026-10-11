#include <iostream>
#include <vector>

#include <cc/TreeNode.hpp>
#include <cc/array.hpp>

using namespace std;

class Solution {
public:
  void inorder(TreeNode *root, vector<int> &res) {
    if (!root) {
      return;
    }
    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
  }
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> res;
    inorder(root, res);
    return res;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> array = {1, 2, 3};
  TreeNode *input = TreeNode_create(array);
  cout << "Input:  " << TreeNode_show(input) << endl;
  Solution solution;
  cout << "Output: " << array_show(solution.inorderTraversal(input)) << endl;
  TreeNode_destory(input);
  return EXIT_SUCCESS;
}
