#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    vector<int> stack;
    for (const string &t : tokens) {
      if (t == "+" || t == "-" || t == "*" || t == "/") {
        int b = stack.back();
        stack.pop_back();
        int a = stack.back();
        stack.pop_back();
        int r = 0;
        if (t == "+") {
          r = a + b;
        } else if (t == "-") {
          r = a - b;
        } else if (t == "*") {
          r = a * b;
        } else {
          r = a / b;
        }
        stack.push_back(r);
      } else {
        stack.push_back(stoi(t));
      }
    }
    return stack.back();
  }
};
// ------------------------------- solution end ---------------------------------

static void run(vector<string> tokens) {
  cout << "Input:  [";
  for (size_t i = 0; i < tokens.size(); i++) {
    if (i == 0) {
      cout << "\"" << tokens[i] << "\"";
    } else {
      cout << ", \"" << tokens[i] << "\"";
    }
  }
  cout << "]" << endl;
  Solution solution;
  cout << "Output: " << solution.evalRPN(tokens) << endl;
}

int main(int argc, char const *argv[]) {
  run({"2", "1", "+", "3", "*"});
  run({"4", "13", "5", "/", "+"});
  run({"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"});
  return EXIT_SUCCESS;
}
