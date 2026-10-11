import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public String largestNumber(int[] nums) {
    Integer[] arr = new Integer[nums.length];
    for (int i = 0; i < nums.length; i++) {
      arr[i] = nums[i];
    }
    Arrays.sort(arr, (a, b) -> (b + "" + a).compareTo(a + "" + b));
    if (arr[0] == 0) {
      return "0";
    }
    StringBuilder sb = new StringBuilder();
    for (int x : arr) {
      sb.append(x);
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 3, 30, 34, 5, 9 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.largestNumber(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
