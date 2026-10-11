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
  TreeNode *build(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd) {
    if (preStart > preEnd) return nullptr;
    int rootVal = preorder[preStart];
    int idx = inStart;
    while (inorder[idx] != rootVal) idx++;
    int leftLen = idx - inStart;
    TreeNode *root = new TreeNode(rootVal);
    root->left = build(preorder, preStart + 1, preStart + leftLen, inorder, inStart, idx - 1);
    root->right = build(preorder, preStart + leftLen + 1, preEnd, inorder, idx + 1, inEnd);
    return root;
  }

public:
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    return build(preorder, 0, (int)preorder.size() - 1, inorder, 0, (int)inorder.size() - 1);
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

static string vector_show(vector<int> &nums) {
  stringstream ss;
  ss << "[";
  for (size_t i = 0; i < nums.size(); i++) {
    if (i) ss << ", ";
    ss << nums[i];
  }
  ss << "]";
  return ss.str();
}

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<int> preorder1 = {3, 9, 20, 15, 7};
  vector<int> inorder1 = {9, 3, 15, 20, 7};
  cout << "Input:  preorder = " << vector_show(preorder1) << ", inorder = " << vector_show(inorder1) << endl;
  TreeNode *root1 = solution.buildTree(preorder1, inorder1);
  cout << "Output: " << tree_show(root1) << endl;
  free_tree(root1);

  vector<int> preorder2 = {-1};
  vector<int> inorder2 = {-1};
  cout << "Input:  preorder = " << vector_show(preorder2) << ", inorder = " << vector_show(inorder2) << endl;
  TreeNode *root2 = solution.buildTree(preorder2, inorder2);
  cout << "Output: " << tree_show(root2) << endl;
  free_tree(root2);

  return EXIT_SUCCESS;
}
