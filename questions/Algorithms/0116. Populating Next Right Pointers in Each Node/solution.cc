#include <cstdlib>
#include <iostream>

using namespace std;

struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
  Node(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  Node *connect(Node *root) {
    if (!root || !root->left) {
      return root;
    }
    root->left->next = root->right;
    if (root->next) {
      root->right->next = root->next->left;
    }
    connect(root->left);
    connect(root->right);
    return root;
  }
};
// ------------------------------- solution end ---------------------------------

static Node *firstOfNextLevel(Node *cur) {
  while (cur) {
    if (cur->left) return cur->left;
    if (cur->right) return cur->right;
    cur = cur->next;
  }
  return NULL;
}

static void show(Node *root) {
  cout << "[";
  bool first = true;
  Node *cur = root;
  while (cur) {
    Node *node = cur;
    while (node) {
      if (!first) cout << ",";
      cout << node->val;
      first = false;
      node = node->next;
    }
    if (!first) cout << ",";
    cout << "#";
    first = false;
    cur = firstOfNextLevel(cur);
  }
  cout << "]" << endl;
}

static void destroy(Node *root) {
  if (!root) return;
  destroy(root->left);
  destroy(root->right);
  delete root;
}

int main(int argc, char const *argv[]) {
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  cout << "Input:  [1, 2, 3, 4, 5, 6, 7]" << endl;
  cout << "Output: ";
  show(Solution().connect(root));
  destroy(root);

  cout << "Input:  []" << endl;
  cout << "Output: ";
  show(Solution().connect(NULL));

  return EXIT_SUCCESS;
}
