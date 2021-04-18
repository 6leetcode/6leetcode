#include <iostream>
#include <vector>

#include <cc/ListNode.hpp>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> array = {1, 2, 3};
  struct ListNode *node = ListNode_init(array);
  cout << "Output: " << ListNode_show(node) << endl;
  ListNode_destory(node);
  return EXIT_SUCCESS;
}
