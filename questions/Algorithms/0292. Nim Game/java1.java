// ------------------------------- solution begin -------------------------------
class Solution {
  public boolean canWinNim(int n) {
    return n % 4 == 0;
  }
}
// ------------------------------- solution end ---------------------------------

public class java1 {
  public static void main(String[] args) {
    int input = 4;
    System.out.printf("Input:  %d\n", input);
    Solution solution = new Solution();
    System.out.printf("Output: %b\n", solution.canWinNim(input));
  }
}

