// -------------------------------solution begin-------------------------------
class Solution {
  public int lengthOfLIS(int[] nums) {
    int n = nums.length;
    if (n == 0) {
      return 0;
    }
    int[] dp = new int[n];
    int maxLen = 1;
    for (int i = 0; i < n; i++) {
      dp[i] = 1;
      for (int j = 0; j < i; j++) {
        if (nums[i] > nums[j] && dp[j] + 1 > dp[i]) {
          dp[i] = dp[j] + 1;
        }
      }
      maxLen = Math.max(maxLen, dp[i]);
    }
    return maxLen;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] inputs = {
      { 10, 9, 2, 5, 3, 7, 101, 18 },
      { 0, 1, 0, 3, 2, 3 },
      { 7, 7, 7, 7, 7 },
    };
    Solution solution = new Solution();
    for (int[] input : inputs) {
      System.out.println("Input:  " + ArrayShowInteger(input));
      System.out.println("Output: " + solution.lengthOfLIS(input));
    }
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
