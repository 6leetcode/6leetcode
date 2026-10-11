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
  TreeNode *build(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd) {
    if (inStart > inEnd) return nullptr;
    int rootVal = postorder[postEnd];
    int idx = inStart;
    while (inorder[idx] != rootVal) idx++;
    int leftLen = idx - inStart;
    TreeNode *root = new TreeNode(rootVal);
    root->left = build(inorder, inStart, idx - 1, postorder, postStart, postStart + leftLen - 1);
    root->right = build(inorder, idx + 1, inEnd, postorder, postStart + leftLen, postEnd - 1);
    return root;
  }

public:
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    return build(inorder, 0, (int)inorder.size() - 1, postorder, 0, (int)postorder.size() - 1);
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

  vector<int> inorder1 = {9, 3, 15, 20, 7};
  vector<int> postorder1 = {9, 15, 7, 20, 3};
  cout << "Input:  inorder = " << vector_show(inorder1) << ", postorder = " << vector_show(postorder1) << endl;
  TreeNode *root1 = solution.buildTree(inorder1, postorder1);
  cout << "Output: " << tree_show(root1) << endl;
  free_tree(root1);

  vector<int> inorder2 = {-1};
  vector<int> postorder2 = {-1};
  cout << "Input:  inorder = " << vector_show(inorder2) << ", postorder = " << vector_show(postorder2) << endl;
  TreeNode *root2 = solution.buildTree(inorder2, postorder2);
  cout << "Output: " << tree_show(root2) << endl;
  free_tree(root2);

  return EXIT_SUCCESS;
}
