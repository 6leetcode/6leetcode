#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Node {
public:
  int val;
  vector<Node *> neighbors;
  Node() : val(0) {}
  explicit Node(int _val) : val(_val) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  unordered_map<Node *, Node *> visited;

  Node *cloneGraph(Node *node) {
    if (node == nullptr) {
      return nullptr;
    }
    if (visited.count(node)) {
      return visited[node];
    }
    Node *copy = new Node(node->val);
    visited[node] = copy;
    for (Node *neighbor : node->neighbors) {
      copy->neighbors.push_back(cloneGraph(neighbor));
    }
    return copy;
  }
};
// ------------------------------- solution end ---------------------------------

static void collect(Node *node, vector<Node *> &byVal) {
  if (node == nullptr || byVal[node->val] != nullptr) {
    return;
  }
  byVal[node->val] = node;
  for (Node *neighbor : node->neighbors) {
    collect(neighbor, byVal);
  }
}

static void printGraph(Node *node) {
  vector<Node *> byVal(101, nullptr);
  collect(node, byVal);
  int count = 0;
  for (int v = 1; v <= 100; v++) {
    if (byVal[v] != nullptr) {
      count = v;
    }
  }
  cout << "[";
  for (int v = 1; v <= count; v++) {
    cout << (v == 1 ? "" : ", ") << "[";
    for (size_t i = 0; i < byVal[v]->neighbors.size(); i++) {
      cout << (i == 0 ? "" : ", ") << byVal[v]->neighbors[i]->val;
    }
    cout << "]";
  }
  cout << "]" << endl;
}

static void gather(Node *node, vector<Node *> &list, vector<bool> &seen) {
  if (node == nullptr || seen[node->val]) {
    return;
  }
  seen[node->val] = true;
  list.push_back(node);
  for (Node *neighbor : node->neighbors) {
    gather(neighbor, list, seen);
  }
}

int main(int argc, char const *argv[]) {
  Node n1(1), n2(2), n3(3), n4(4);
  n1.neighbors = {&n2, &n4};
  n2.neighbors = {&n1, &n3};
  n3.neighbors = {&n2, &n4};
  n4.neighbors = {&n1, &n3};

  cout << "Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]" << endl;
  Solution solution;
  Node *clone = solution.cloneGraph(&n1);
  cout << "Output: ";
  printGraph(clone);

  vector<Node *> all;
  vector<bool> seen(101, false);
  gather(clone, all, seen);
  for (Node *node : all) {
    delete node;
  }
  return EXIT_SUCCESS;
}
