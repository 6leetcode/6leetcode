#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class TripleInOne {
  vector<int> arr;
  int size;
  int top[3];

public:
  TripleInOne(int stackSize) : arr(3 * stackSize), size(stackSize) {
    top[0] = top[1] = top[2] = 0;
  }
  void push(int stackNum, int value) {
    if (top[stackNum] < size) arr[stackNum * size + top[stackNum]++] = value;
  }
  int pop(int stackNum) {
    if (top[stackNum] == 0) return -1;
    return arr[stackNum * size + --top[stackNum]];
  }
  int peek(int stackNum) {
    if (top[stackNum] == 0) return -1;
    return arr[stackNum * size + top[stackNum] - 1];
  }
  bool isEmpty(int stackNum) { return top[stackNum] == 0; }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"TripleInOne\", \"push\", \"push\", \"pop\", \"pop\", \"pop\", \"isEmpty\"]" << endl;
  TripleInOne obj(1);
  obj.push(0, 1);
  obj.push(0, 2);
  cout << "Output: [null, null, null, " << obj.pop(0) << ", " << obj.pop(0) << ", " << obj.pop(0) << ", "
       << (obj.isEmpty(0) ? "true" : "false") << "]" << endl;
  return EXIT_SUCCESS;
}
