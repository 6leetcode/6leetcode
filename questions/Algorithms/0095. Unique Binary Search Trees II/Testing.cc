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
  static void destroy(TreeNode *node) {
    if (!node) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
  }

  static TreeNode *clone(TreeNode *node) {
    if (!node) return nullptr;
    TreeNode *n = new TreeNode(node->val);
    n->left = clone(node->left);
    n->right = clone(node->right);
    return n;
  }

  vector<TreeNode *> gen(int start, int end) {
    vector<TreeNode *> res;
    if (start > end) {
      res.push_back(nullptr);
      return res;
    }
    for (int i = start; i <= end; i++) {
      vector<TreeNode *> lefts = gen(start, i - 1);
      vector<TreeNode *> rights = gen(i + 1, end);
      for (TreeNode *l : lefts) {
        for (TreeNode *r : rights) {
          TreeNode *root = new TreeNode(i);
          root->left = clone(l);
          root->right = clone(r);
          res.push_back(root);
        }
      }
      for (TreeNode *l : lefts) destroy(l);
      for (TreeNode *r : rights) destroy(r);
    }
    return res;
  }

public:
  vector<TreeNode *> generateTrees(int n) {
    if (n == 0) return {};
    return gen(1, n);
  }

  static void freeTrees(vector<TreeNode *> &trees) {
    for (TreeNode *t : trees) destroy(t);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 3;
  cout << "Input:  " << input << endl;
  Solution solution;
  vector<TreeNode *> res = solution.generateTrees(input);
  cout << "Output: " << res.size() << endl;
  Solution::freeTrees(res);
  return EXIT_SUCCESS;
}
