import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class Solution {
  public int longestValidParentheses(String s) {
    int best = 0;
    Deque<Integer> stack = new ArrayDeque<>();
    stack.push(-1);
    for (int i = 0; i < s.length(); i++) {
      if (s.charAt(i) == '(') {
        stack.push(i);
      } else {
        stack.pop();
        if (stack.isEmpty()) {
          stack.push(i);
        } else {
          best = Math.max(best, i - stack.peek());
        }
      }
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "(()";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.longestValidParentheses(input));
  }
}
