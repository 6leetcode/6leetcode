// -------------------------------solution begin-------------------------------
class Solution {
  private boolean check(String pattern, String value, int la, int lb) {
    int n = value.length();
    int aPos = -1, bPos = -1, aLen = -1, bLen = -1, pos = 0;
    for (int i = 0; i < pattern.length(); i++) {
      if (pattern.charAt(i) == 'a') {
        if (pos + la > n) return false;
        if (aPos == -1) {
          aPos = pos;
          aLen = la;
        } else if (aLen != la || !value.regionMatches(aPos, value, pos, la)) {
          return false;
        }
        pos += la;
      } else {
        if (pos + lb > n) return false;
        if (bPos == -1) {
          bPos = pos;
          bLen = lb;
        } else if (bLen != lb || !value.regionMatches(bPos, value, pos, lb)) {
          return false;
        }
        pos += lb;
      }
    }
    if (pos != n) return false;
    if (aPos != -1 && bPos != -1 && aLen == bLen && value.regionMatches(aPos, value, bPos, bLen)) return false;
    return true;
  }

  public boolean patternMatching(String pattern, String value) {
    int n = value.length();
    if (pattern.isEmpty()) return n == 0;
    int na = 0;
    for (int i = 0; i < pattern.length(); i++) if (pattern.charAt(i) == 'a') na++;
    int nb = pattern.length() - na;
    for (int la = 0; la <= n; la++) {
      if (na * la > n) break;
      int rem = n - na * la;
      if (nb == 0) {
        if (rem == 0 && check(pattern, value, la, 0)) return true;
      } else {
        if (rem % nb != 0) continue;
        if (check(pattern, value, la, rem / nb)) return true;
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String pattern = "abba", value = "dogcatcatdog";
    System.out.println("Input:  pattern = " + pattern + ", value = " + value);
    System.out.println("Output: " + new Solution().patternMatching(pattern, value));
  }
}
