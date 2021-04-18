#include <iostream>

#include <cc/TreeNode.hpp>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  TreeNode *tree = TreeNode_create(array);
  cout << "Output: " << TreeNode_show(tree) << endl;
  TreeNode_destory(tree);
  return EXIT_SUCCESS;
}
