#include <iostream>
#include <stack>

using namespace std;

// ------------------------------- solution begin -------------------------------
class MinStack {
  stack<int> data;
  stack<int> mins;

public:
  MinStack() {}
  void push(int x) {
    data.push(x);
    mins.push(mins.empty() ? x : min(x, mins.top()));
  }
  void pop() {
    data.pop();
    mins.pop();
  }
  int top() { return data.top(); }
  int getMin() { return mins.top(); }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"MinStack\", \"push\", \"push\", \"push\", \"getMin\", \"pop\", \"top\", \"getMin\"]" << endl;
  MinStack obj;
  obj.push(-2);
  obj.push(0);
  obj.push(-3);
  int a = obj.getMin();
  obj.pop();
  int b = obj.top();
  int c = obj.getMin();
  cout << "Output: [null, null, null, null, " << a << ", null, " << b << ", " << c << "]" << endl;
  return EXIT_SUCCESS;
}
