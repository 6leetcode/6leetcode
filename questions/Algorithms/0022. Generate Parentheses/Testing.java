import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> generateParenthesis(int n) {
    List<String> res = new ArrayList<>();
    backtrack(res, new StringBuilder(), 0, 0, n);
    return res;
  }

  private void backtrack(List<String> res, StringBuilder cur, int open, int close, int n) {
    if (cur.length() == n * 2) {
      res.add(cur.toString());
      return;
    }
    if (open < n) {
      cur.append('(');
      backtrack(res, cur, open + 1, close, n);
      cur.deleteCharAt(cur.length() - 1);
    }
    if (close < open) {
      cur.append(')');
      backtrack(res, cur, open, close + 1, n);
      cur.deleteCharAt(cur.length() - 1);
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 3;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.generateParenthesis(input));
  }
}
