import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public boolean stoneGame(int[] piles) {
    return true;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 1, 2, 3, 4 };
    System.out.printf("Input:  %s\n", Arrays.toString(input));

    Solution solution = new Solution();
    System.out.printf("Output: %b\n", solution.stoneGame(input));
  }
}
