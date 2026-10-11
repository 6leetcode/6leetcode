import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> T9(String num, String[] words) {
    String[] map = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    List<String> res = new ArrayList<>();
    for (String w : words) {
      if (w.length() != num.length()) continue;
      boolean ok = true;
      for (int j = 0; j < w.length(); j++) {
        if (map[num.charAt(j) - '0'].indexOf(w.charAt(j)) < 0) {
          ok = false;
          break;
        }
      }
      if (ok) res.add(w);
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String num = "8733";
    String[] words = { "tree", "used" };
    System.out.println("Input:  num = \"8733\", words = [\"tree\", \"used\"]");
    System.out.println("Output: " + new Solution().T9(num, words));
  }
}
