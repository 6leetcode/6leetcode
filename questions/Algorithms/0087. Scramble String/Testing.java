// -------------------------------solution begin-------------------------------
class Solution {
  private boolean check(String s1, String s2) {
    if (s1.equals(s2)) return true;
    if (s1.length() == 1) return false;
    int[] cnt = new int[26];
    for (int i = 0; i < s1.length(); i++) {
      cnt[s1.charAt(i) - 'a']++;
      cnt[s2.charAt(i) - 'a']--;
    }
    for (int c : cnt) {
      if (c != 0) return false;
    }
    int n = s1.length();
    for (int i = 1; i < n; i++) {
      if ((check(s1.substring(0, i), s2.substring(0, i)) && check(s1.substring(i), s2.substring(i)))
          || (check(s1.substring(0, i), s2.substring(n - i)) && check(s1.substring(i), s2.substring(0, n - i)))) {
        return true;
      }
    }
    return false;
  }

  public boolean isScramble(String s1, String s2) {
    return check(s1, s2);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String s1 = "great", s2 = "rgeat";
    System.out.println("Input:  " + s1 + " " + s2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isScramble(s1, s2));
  }
}
