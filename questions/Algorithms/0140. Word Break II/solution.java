import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<String> wordBreak(String s, List<String> wordDict) {
    Set<String> dict = new HashSet<>(wordDict);
    Map<Integer, List<String>> memo = new HashMap<>();
    return dfs(s, 0, dict, memo);
  }

  private List<String> dfs(String s, int start, Set<String> dict, Map<Integer, List<String>> memo) {
    if (memo.containsKey(start)) {
      return memo.get(start);
    }
    if (start == s.length()) {
      return new ArrayList<>(Arrays.asList(""));
    }
    List<String> res = new ArrayList<>();
    for (int end = start + 1; end <= s.length(); end++) {
      String w = s.substring(start, end);
      if (dict.contains(w)) {
        for (String tail : dfs(s, end, dict, memo)) {
          res.add(tail.isEmpty() ? w : w + " " + tail);
        }
      }
    }
    memo.put(start, res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    run("catsanddog", Arrays.asList("cat", "cats", "and", "sand", "dog"));
    run("pineapplepenapple", Arrays.asList("apple", "pen", "applepen", "pine", "pineapple"));
    run("catsandog", Arrays.asList("cats", "dog", "sand", "and", "cat"));
  }

  static void run(String s, List<String> dict) {
    System.out.printf("Input:  s = \"%s\", wordDict = %s\n", s, dict);
    Solution solution = new Solution();
    System.out.printf("Output: %s\n", solution.wordBreak(s, dict));
  }
}
