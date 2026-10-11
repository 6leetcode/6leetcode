import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class Solution {
  public int evalRPN(String[] tokens) {
    Deque<Integer> stack = new ArrayDeque<Integer>();
    for (String t : tokens) {
      switch (t) {
        case "+":
        case "-":
        case "*":
        case "/": {
          int b = stack.pop();
          int a = stack.pop();
          int r = 0;
          if (t.equals("+")) {
            r = a + b;
          } else if (t.equals("-")) {
            r = a - b;
          } else if (t.equals("*")) {
            r = a * b;
          } else {
            r = a / b;
          }
          stack.push(r);
          break;
        }
        default:
          stack.push(Integer.parseInt(t));
      }
    }
    return stack.pop();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    run(new String[] { "2", "1", "+", "3", "*" });
    run(new String[] { "4", "13", "5", "/", "+" });
    run(new String[] { "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" });
  }

  public static void run(String[] tokens) {
    StringBuilder sb = new StringBuilder();
    sb.append("[");
    for (int i = 0; i < tokens.length; i++) {
      sb.append(i == 0 ? "" : ", ").append("\"").append(tokens[i]).append("\"");
    }
    sb.append("]");
    System.out.println("Input:  " + sb.toString());
    System.out.println("Output: " + new Solution().evalRPN(tokens));
  }
}
