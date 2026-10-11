import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class Solution {
  public String simplifyPath(String path) {
    Deque<String> st = new ArrayDeque<>();
    for (String tok : path.split("/")) {
      if (tok.isEmpty() || tok.equals(".")) {
        continue;
      }
      if (tok.equals("..")) {
        if (!st.isEmpty()) st.pollLast();
      } else {
        st.addLast(tok);
      }
    }
    if (st.isEmpty()) {
      return "/";
    }
    StringBuilder sb = new StringBuilder();
    for (String s : st) {
      sb.append('/').append(s);
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "/a/./b/../../c/";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.simplifyPath(input));
  }
}
