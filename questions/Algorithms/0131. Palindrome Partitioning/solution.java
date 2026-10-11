import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private boolean isPalindrome(String s, int l, int r) {
    while (l < r) {
      if (s.charAt(l++) != s.charAt(r--)) return false;
    }
    return true;
  }

  private void backtrack(String s, int start, List<String> path, List<List<String>> res) {
    if (start == s.length()) {
      res.add(new ArrayList<>(path));
      return;
    }
    for (int end = start; end < s.length(); end++) {
      if (!isPalindrome(s, start, end)) continue;
      path.add(s.substring(start, end + 1));
      backtrack(s, end + 1, path, res);
      path.remove(path.size() - 1);
    }
  }

  public List<List<String>> partition(String s) {
    List<List<String>> res = new ArrayList<>();
    backtrack(s, 0, new ArrayList<>(), res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String[] tests = { "aab", "a" };
    Solution solution = new Solution();
    for (String s : tests) {
      System.out.println("Input:  " + s);
      System.out.println("Output: " + solution.partition(s));
    }
  }
}
