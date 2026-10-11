// -------------------------------solution begin-------------------------------
class Solution {
  public int calculate(String s) {
    long result = 0, prev = 0, cur = 0;
    char op = '+';
    int n = s.length();
    for (int i = 0; i <= n; i++) {
      if (i < n && Character.isDigit(s.charAt(i))) {
        cur = cur * 10 + (s.charAt(i) - '0');
      } else if (i == n || s.charAt(i) != ' ') {
        if (op == '+') {
          result += prev;
          prev = cur;
        } else if (op == '-') {
          result += prev;
          prev = -cur;
        } else if (op == '*') {
          prev *= cur;
        } else if (op == '/') {
          prev /= cur;
        }
        if (i < n) op = s.charAt(i);
        cur = 0;
      }
    }
    return (int) (result + prev);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "3+2*2";
    System.out.println("Input:  \"" + input + "\"");
    System.out.println("Output: " + new Solution().calculate(input));
  }
}
