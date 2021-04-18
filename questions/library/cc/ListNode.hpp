#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

string ListNode_show(struct ListNode *node) {
  stringstream ss;
  bool first = true;

  struct ListNode *p = node;
  while (p != NULL) {
    if (first) {
      ss << p->val;
      first = false;
    } else {
      ss << " -> " << p->val;
    }
    p = p->next;
  }
  return ss.str();
}

string ListNode_vector_show(vector<ListNode *> lists) {
  stringstream ss;
  for (size_t i = 0; i < lists.size(); i++) {
    if (i == 0) {
      ss << ListNode_show(lists[i]);
    } else {
      ss << ", " << ListNode_show(lists[i]);
    }
  }
  return ss.str();
}

struct ListNode *ListNode_init(vector<int> nodes) {
  struct ListNode *result = NULL;
  struct ListNode *prev = NULL;
  struct ListNode *node = NULL;

  bool first = true;

  for (auto n : nodes) {
    node = new ListNode(0);

    if (first) {
      result = node;
      first = false;
    }

    node->val = n;
    node->next = NULL;

    if (prev != NULL) {
      prev->next = node;
    }
    prev = node;
  }
  return result;
}

void ListNode_destory(struct ListNode *node) {
  struct ListNode *del = node;
  while (node != NULL) {
    node = node->next;
    delete del;
    del = node;
  }
}
