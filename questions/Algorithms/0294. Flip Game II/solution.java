// -------------------------------solution begin-------------------------------
class Solution {
  public boolean canWin(String s) {
    char[] b = s.toCharArray();
    return win(b);
  }

  private boolean win(char[] b) {
    for (int i = 1; i < b.length; i++) {
      if (b[i] == '+' && b[i - 1] == '+') {
        b[i] = b[i - 1] = '-';
        boolean ok = !win(b);
        b[i] = b[i - 1] = '+';
        if (ok) {
          return true;
        }
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "++++";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.canWin(input));
  }
}
