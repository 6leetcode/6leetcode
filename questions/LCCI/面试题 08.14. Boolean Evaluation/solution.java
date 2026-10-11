import java.util.HashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  private Map<String, Long> memo = new HashMap<>();

  private long solve(String s, int i, int j, int want) {
    if (i == j) return (s.charAt(i) - '0') == want ? 1 : 0;
    String key = i + "," + j + "," + want;
    if (memo.containsKey(key)) return memo.get(key);
    long total = 0;
    for (int k = i + 1; k < j; k += 2) {
      char op = s.charAt(k);
      long l0 = solve(s, i, k - 1, 0), l1 = solve(s, i, k - 1, 1);
      long r0 = solve(s, k + 1, j, 0), r1 = solve(s, k + 1, j, 1);
      long t, f;
      if (op == '&') {
        t = l1 * r1;
        f = (l0 + l1) * (r0 + r1) - t;
      } else if (op == '|') {
        f = l0 * r0;
        t = (l0 + l1) * (r0 + r1) - f;
      } else {
        t = l0 * r1 + l1 * r0;
        f = l0 * r0 + l1 * r1;
      }
      total += want == 1 ? t : f;
    }
    memo.put(key, total);
    return total;
  }

  public int countEval(String s, int result) {
    memo.clear();
    return (int) solve(s, 0, s.length() - 1, result);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String s = "1^0|0|1";
    int result = 0;
    System.out.println("Input:  s = " + s + ", result = " + result);
    System.out.println("Output: " + new Solution().countEval(s, result));
  }
}
