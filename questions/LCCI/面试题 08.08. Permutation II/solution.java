import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void backtrack(char[] s, boolean[] used, StringBuilder cur, List<String> res) {
    if (cur.length() == s.length) {
      res.add(cur.toString());
      return;
    }
    for (int i = 0; i < s.length; i++) {
      if (used[i]) continue;
      if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;
      used[i] = true;
      cur.append(s[i]);
      backtrack(s, used, cur, res);
      cur.deleteCharAt(cur.length() - 1);
      used[i] = false;
    }
  }

  public String[] permutation(String S) {
    char[] s = S.toCharArray();
    Arrays.sort(s);
    List<String> res = new ArrayList<>();
    backtrack(s, new boolean[s.length], new StringBuilder(), res);
    return res.toArray(new String[0]);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "qqe";
    System.out.println("Input:  " + input);
    String[] res = new Solution().permutation(input);
    StringBuilder sb = new StringBuilder("Output: [");
    for (int i = 0; i < res.length; i++) sb.append(i == 0 ? "" : ", ").append("\"").append(res[i]).append("\"");
    sb.append("]");
    System.out.println(sb);
  }
}
