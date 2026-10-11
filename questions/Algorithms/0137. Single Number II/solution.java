// -------------------------------solution begin-------------------------------
class Solution {
  public int singleNumber(int[] nums) {
    int ones = 0, twos = 0;
    for (int num : nums) {
      ones = ones ^ (num & ~twos);
      twos = twos ^ (num & ~ones);
    }
    return ones;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 0, 1, 0, 1, 0, 1, 99 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.singleNumber(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
