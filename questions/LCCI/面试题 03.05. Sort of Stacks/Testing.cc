#include <iostream>
#include <stack>

using namespace std;

// ------------------------------- solution begin -------------------------------
class SortedStack {
  stack<int> data;

public:
  SortedStack() {}
  void push(int val) {
    stack<int> tmp;
    while (!data.empty() && data.top() < val) {
      tmp.push(data.top());
      data.pop();
    }
    data.push(val);
    while (!tmp.empty()) {
      data.push(tmp.top());
      tmp.pop();
    }
  }
  void pop() {
    if (!data.empty()) data.pop();
  }
  int peek() { return data.empty() ? -1 : data.top(); }
  bool isEmpty() { return data.empty(); }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"SortedStack\", \"push\", \"push\", \"peek\", \"pop\", \"peek\"]" << endl;
  SortedStack obj;
  obj.push(1);
  obj.push(2);
  int a = obj.peek();
  obj.pop();
  int b = obj.peek();
  cout << "Output: [null, null, null, " << a << ", null, " << b << "]" << endl;
  return EXIT_SUCCESS;
}
