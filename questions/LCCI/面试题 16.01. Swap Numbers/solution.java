import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void swapNumbers(int[] numbers) {
    numbers[0] ^= numbers[1];
    numbers[1] ^= numbers[0];
    numbers[0] ^= numbers[1];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 1, 2 };
    System.out.println("Input:  " + Arrays.toString(input));
    new Solution().swapNumbers(input);
    System.out.println("Output: " + Arrays.toString(input));
  }
}
