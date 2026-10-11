import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<Integer> findSubstring(String s, String[] words) {
    List<Integer> res = new ArrayList<>();
    if (words.length == 0 || s.isEmpty()) {
      return res;
    }
    int w = words[0].length();
    int total = w * words.length;
    int n = s.length();
    for (int i = 0; i + total <= n; i++) {
      boolean[] used = new boolean[words.length];
      boolean ok = true;
      for (int j = 0; j < words.length && ok; j++) {
        boolean found = false;
        for (int t = 0; t < words.length; t++) {
          if (!used[t] && s.startsWith(words[t], i + j * w)) {
            used[t] = true;
            found = true;
            break;
          }
        }
        ok = found;
      }
      if (ok) {
        res.add(i);
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input1 = "barfoothefoobarman";
    String[] input2 = { "foo", "bar" };
    System.out.println("Input:  " + input1 + " [foo, bar]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.findSubstring(input1, input2));
  }
}
