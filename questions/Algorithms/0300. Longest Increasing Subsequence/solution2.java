// -------------------------------solution begin-------------------------------
class Solution {
  public int lengthOfLIS(int[] nums) {
    int[] tails = new int[nums.length];
    int size = 0;
    for (int num : nums) {
      int lo = 0, hi = size;
      while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (tails[mid] < num) {
          lo = mid + 1;
        } else {
          hi = mid;
        }
      }
      tails[lo] = num;
      if (lo == size) {
        size++;
      }
    }
    return size;
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
