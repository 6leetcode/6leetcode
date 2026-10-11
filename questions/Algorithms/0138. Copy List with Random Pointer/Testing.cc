#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node *random;
  explicit Node(int _val) : val(_val), next(nullptr), random(nullptr) {}
};

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  Node *copyRandomList(Node *head) {
    if (head == nullptr) {
      return nullptr;
    }
    unordered_map<Node *, Node *> mapping;
    for (Node *cur = head; cur != nullptr; cur = cur->next) {
      mapping[cur] = new Node(cur->val);
    }
    for (Node *cur = head; cur != nullptr; cur = cur->next) {
      mapping[cur]->next = cur->next != nullptr ? mapping[cur->next] : nullptr;
      mapping[cur]->random = cur->random != nullptr ? mapping[cur->random] : nullptr;
    }
    return mapping[head];
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> vals = {7, 13, 11, 10, 1};
  vector<int> randoms = {-1, 0, 4, 2, 0};
  int size = vals.size();

  vector<Node> nodes;
  nodes.reserve(size);
  for (int i = 0; i < size; i++) {
    nodes.emplace_back(vals[i]);
  }
  for (int i = 0; i < size; i++) {
    nodes[i].next = (i + 1 < size) ? &nodes[i + 1] : nullptr;
    nodes[i].random = randoms[i] >= 0 ? &nodes[randoms[i]] : nullptr;
  }

  cout << "Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]" << endl;
  Solution solution;
  Node *clone = solution.copyRandomList(&nodes[0]);

  vector<Node *> list;
  for (Node *cur = clone; cur != nullptr; cur = cur->next) {
    list.push_back(cur);
  }

  cout << "Output: [";
  for (size_t i = 0; i < list.size(); i++) {
    int index = -1;
    for (size_t j = 0; j < list.size(); j++) {
      if (list[j] == list[i]->random) {
        index = j;
      }
    }
    cout << (i == 0 ? "" : ", ") << "[" << list[i]->val << ", ";
    if (index < 0) {
      cout << "null]";
    } else {
      cout << index << "]";
    }
  }
  cout << "]" << endl;

  for (Node *node : list) {
    delete node;
  }
  return EXIT_SUCCESS;
}
