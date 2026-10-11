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
  TreeNode *build(vector<int> &nums, int lo, int hi) {
    if (lo > hi) return nullptr;
    int mid = lo + (hi - lo) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = build(nums, lo, mid - 1);
    root->right = build(nums, mid + 1, hi);
    return root;
  }

public:
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    return build(nums, 0, nums.size() - 1);
  }
};
// ------------------------------- solution end ---------------------------------

static void preorder(TreeNode *node, bool &first) {
  if (!node) return;
  cout << (first ? "" : ", ") << node->val;
  first = false;
  preorder(node->left, first);
  preorder(node->right, first);
}

static void destroy(TreeNode *node) {
  if (!node) return;
  destroy(node->left);
  destroy(node->right);
  delete node;
}

int main(int argc, char const *argv[]) {
  vector<int> nums = {-10, -3, 0, 5, 9};
  cout << "Input:  [-10, -3, 0, 5, 9]" << endl;
  Solution solution;
  TreeNode *root = solution.sortedArrayToBST(nums);
  cout << "Output: [";
  bool first = true;
  preorder(root, first);
  cout << "]" << endl;
  destroy(root);
  return EXIT_SUCCESS;
}
