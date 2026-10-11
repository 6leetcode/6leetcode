#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class StackOfPlates {
  int cap;
  vector<vector<int>> stacks;

public:
  StackOfPlates(int cap) : cap(cap) {}
  void push(int val) {
    if (cap == 0) return;
    if (stacks.empty() || (int)stacks.back().size() == cap) stacks.push_back({});
    stacks.back().push_back(val);
  }
  int pop() {
    if (stacks.empty()) return -1;
    int v = stacks.back().back();
    stacks.back().pop_back();
    if (stacks.back().empty()) stacks.pop_back();
    return v;
  }
  int popAt(int index) {
    if (index < 0 || index >= (int)stacks.size()) return -1;
    int v = stacks[index].back();
    stacks[index].pop_back();
    if (stacks[index].empty()) stacks.erase(stacks.begin() + index);
    return v;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"StackOfPlates\", \"push\", \"push\", \"push\", \"popAt\", \"popAt\", \"popAt\"]" << endl;
  StackOfPlates obj(2);
  obj.push(1);
  obj.push(2);
  obj.push(3);
  int a = obj.popAt(0);
  int b = obj.popAt(0);
  int c = obj.popAt(0);
  cout << "Output: [null, null, null, null, " << a << ", " << b << ", " << c << "]" << endl;
  return EXIT_SUCCESS;
}
