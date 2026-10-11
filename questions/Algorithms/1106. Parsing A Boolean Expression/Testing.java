import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class Solution {
  public boolean parseBoolExpr(String expression) {
    Deque<Character> stack = new ArrayDeque<>();
    for (int i = 0; i < expression.length(); i++) {
      char c = expression.charAt(i);
      if (c == 't' || c == 'f' || c == '(' || c == '!' || c == '&' || c == '|') {
        stack.push(c);
      } else if (c == ')') {
        boolean hasTrue = false, hasFalse = false;
        while (stack.peek() != '(') {
          char x = stack.pop();
          if (x == 't') {
            hasTrue = true;
          } else {
            hasFalse = true;
          }
        }
        stack.pop();
        char op = stack.pop();
        char res;
        if (op == '!') {
          res = hasFalse ? 't' : 'f';
        } else if (op == '&') {
          res = hasFalse ? 'f' : 't';
        } else {
          res = hasTrue ? 't' : 'f';
        }
        stack.push(res);
      }
    }
    return stack.peek() == 't';
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "|(&(t,f,t),!(t))";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.parseBoolExpr(input));
  }
}
