// -------------------------------solution begin-------------------------------
class Solution {
  public int maxProfit(int[] prices) {
    if (prices.length == 0) {
      return 0;
    }
    int minPrice = prices[0];
    int best = 0;
    for (int i = 1; i < prices.length; i++) {
      if (prices[i] < minPrice) {
        minPrice = prices[i];
      } else if (prices[i] - minPrice > best) {
        best = prices[i] - minPrice;
      }
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 7, 1, 5, 3, 6, 4 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.maxProfit(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
