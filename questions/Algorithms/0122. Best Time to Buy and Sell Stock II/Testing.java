// -------------------------------solution begin-------------------------------
class Solution {
  public int maxProfit(int[] prices) {
    int profit = 0;
    for (int i = 1; i < prices.length; i++) {
      if (prices[i] > prices[i - 1]) {
        profit += prices[i] - prices[i - 1];
      }
    }
    return profit;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] prices1 = new int[] { 7, 1, 5, 3, 6, 4 };
    int[] prices2 = new int[] { 1, 2, 3, 4, 5 };
    int[] prices3 = new int[] { 7, 6, 4, 3, 1 };

    Solution solution = new Solution();

    System.out.println("Input:  " + ArrayShowInteger(prices1));
    System.out.println("Output: " + solution.maxProfit(prices1));

    System.out.println("Input:  " + ArrayShowInteger(prices2));
    System.out.println("Output: " + solution.maxProfit(prices2));

    System.out.println("Input:  " + ArrayShowInteger(prices3));
    System.out.println("Output: " + solution.maxProfit(prices3));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      if (i == 0) {
        res += Integer.toString(arr[i]);
      } else {
        res += ", " + Integer.toString(arr[i]);
      }
    }
    res += "]";
    return res;
  }
}
