#include <deque>
#include <iostream>
#include <sstream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

#pragma once

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct TreeNode *TreeNode_create(vector<int> nodes) {
  if (nodes.size() == 0) {
    return nullptr;
  }
  struct TreeNode *root = new TreeNode(nodes[0]);
  deque<struct TreeNode *> pool = {root};
  for (size_t i = 1; i < nodes.size(); i += 2) {
    struct TreeNode *root = pool.front();
    pool.pop_front();
    root->left = new TreeNode(nodes[i]);
    pool.push_back(root->left);
    if (i + 1 < nodes.size()) {
      root->right = new TreeNode(nodes[i + 1]);
      pool.push_back(root->right);
    }
  }
  return root;
}

string TreeNode_show(struct TreeNode *tree) {
  if (tree == nullptr) {
    return "";
  }
  stringstream ss;
  ss << "[";
  bool first = true;
  struct TreeNode *tmp = tree;
  deque<struct TreeNode *> pool = {tmp};
  while (pool.empty() == false) {
    TreeNode *node = pool.front();
    if (first) {
      first = false;
      ss << node->val;
    } else {
      ss << ", " << node->val;
    }
    pool.pop_front();
    if (node->left != NULL) { pool.push_back(node->left); }
    if (node->right != NULL) { pool.push_back(node->right); }
  }
  ss << "]";
  return ss.str();
}

string TreeNode_array_show(vector<int> nodes) {
  return array_show(nodes);
}

void TreeNode_destory(struct TreeNode *tree) {
  if (tree->left != nullptr) {
    TreeNode_destory(tree->left);
  }
  if (tree->right != nullptr) {
    TreeNode_destory(tree->right);
  }
  delete tree;
}
