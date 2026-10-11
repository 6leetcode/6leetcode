#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
  int count(TreeNode *node, long long target) {
    if (!node) return 0;
    int res = (node->val == target) ? 1 : 0;
    res += count(node->left, target - node->val);
    res += count(node->right, target - node->val);
    return res;
  }

public:
  int pathSum(TreeNode *root, int sum) {
    if (!root) return 0;
    return count(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  TreeNode n1(1), n2(2), n3(3);
  n1.left = &n2;
  n1.right = &n3;
  int sum = 3;
  cout << "Input:  [1, 2, 3], sum = " << sum << endl;
  Solution solution;
  cout << "Output: " << solution.pathSum(&n1, sum) << endl;
  return EXIT_SUCCESS;
}
