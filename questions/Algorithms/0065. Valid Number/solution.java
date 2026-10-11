// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isNumber(String s) {
    int i = 0, n = s.length();
    while (i < n && s.charAt(i) == ' ') i++;
    while (n > i && s.charAt(n - 1) == ' ') n--;
    boolean seenDigit = false, seenDot = false, seenExp = false;
    if (i < n && (s.charAt(i) == '+' || s.charAt(i) == '-')) i++;
    for (; i < n; i++) {
      char c = s.charAt(i);
      if (Character.isDigit(c)) {
        seenDigit = true;
      } else if (c == '.') {
        if (seenDot || seenExp) return false;
        seenDot = true;
      } else if (c == 'e' || c == 'E') {
        if (seenExp || !seenDigit) return false;
        seenExp = true;
        seenDigit = false;
        if (i + 1 < n && (s.charAt(i + 1) == '+' || s.charAt(i + 1) == '-')) i++;
      } else {
        return false;
      }
    }
    return seenDigit;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "2e10";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isNumber(input));
  }
}
