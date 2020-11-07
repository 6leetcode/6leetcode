#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  bool parseBoolExpr(string expression) {
    vector<char> stack;

    for (char c : expression) {
      switch (c) {
      case 't':
      case 'f':
      case '(':
      case '!':
      case '&':
      case '|':
        stack.push_back(c);
        break;
      case ')':
        resolve(stack);
      }
    }
    return stack[0] == 't';
  }

  void resolve(vector<char> &stack) {
    vector<char> temp;

    while (stack.back() != '(') {
      temp.push_back(stack.back());
      stack.pop_back();
    }

    stack.pop_back();
    char op = stack.back();
    stack.pop_back();
    if (op == '!')
      stack.push_back(temp[0] == 'f' ? 't' : 'f');
    else if (op == '&')
      stack.push_back(find(temp.begin(), temp.end(), 'f') == temp.end() ? 't' : 'f');
    else if (op == '|')
      stack.push_back(find(temp.begin(), temp.end(), 't') != temp.end() ? 't' : 'f');
  }
};

// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;
  string input = "|(&(t,f,t),!(t))";
  bool output = solution.parseBoolExpr(input);
  cout << "Input:  " << input << endl;
  cout << "Output: " << (output ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
