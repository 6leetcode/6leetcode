import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void backtrack(String s, boolean[] used, StringBuilder cur, List<String> res) {
    if (cur.length() == s.length()) {
      res.add(cur.toString());
      return;
    }
    for (int i = 0; i < s.length(); i++) {
      if (used[i]) continue;
      used[i] = true;
      cur.append(s.charAt(i));
      backtrack(s, used, cur, res);
      cur.deleteCharAt(cur.length() - 1);
      used[i] = false;
    }
  }

  public String[] permutation(String S) {
    List<String> res = new ArrayList<>();
    backtrack(S, new boolean[S.length()], new StringBuilder(), res);
    return res.toArray(new String[0]);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = "qwe";
    System.out.println("Input:  " + input);
    String[] res = new Solution().permutation(input);
    StringBuilder sb = new StringBuilder("Output: [");
    for (int i = 0; i < res.length; i++) sb.append(i == 0 ? "" : ", ").append("\"").append(res[i]).append("\"");
    sb.append("]");
    System.out.println(sb);
  }
}
