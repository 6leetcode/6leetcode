import java.util.*;

// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isValid(String s) {
    int n = s.length();
    if (n % 2 == 1) {
      return false;
    }

    Map<Character, Character> pairs = new HashMap<Character, Character>() {
      {
        put(')', '(');
        put(']', '[');
        put('}', '{');
      }
    };
    Deque<Character> stack = new LinkedList<Character>();
    for (int i = 0; i < n; i++) {
      char ch = s.charAt(i);
      if (pairs.containsKey(ch)) {
        if (stack.isEmpty() || stack.peek() != pairs.get(ch)) {
          return false;
        }
        stack.pop();
      } else {
        stack.push(ch);
      }
    }
    return stack.isEmpty();
  }
}
// -------------------------------solution end---------------------------------

public class main {
  public static void main(String[] args) {
    Solution solution = new Solution();
    String input = "()[]{}";
    System.out.println("Input:  " + input);
    System.out.println("Output: " + solution.isValid(input));
  }
}
