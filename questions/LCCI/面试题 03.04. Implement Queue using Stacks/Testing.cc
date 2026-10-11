#include <iostream>
#include <stack>

using namespace std;

// ------------------------------- solution begin -------------------------------
class MyQueue {
  stack<int> in;
  stack<int> out;

  void transfer() {
    if (out.empty()) {
      while (!in.empty()) {
        out.push(in.top());
        in.pop();
      }
    }
  }

public:
  MyQueue() {}
  void push(int x) { in.push(x); }
  int pop() {
    transfer();
    int v = out.top();
    out.pop();
    return v;
  }
  int peek() {
    transfer();
    return out.top();
  }
  bool empty() { return in.empty() && out.empty(); }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"MyQueue\", \"push\", \"push\", \"peek\", \"pop\", \"empty\"]" << endl;
  MyQueue obj;
  obj.push(1);
  obj.push(2);
  int p = obj.peek();
  int q = obj.pop();
  bool e = obj.empty();
  cout << "Output: [null, null, null, " << p << ", " << q << ", " << (e ? "true" : "false") << "]" << endl;
  return EXIT_SUCCESS;
}
