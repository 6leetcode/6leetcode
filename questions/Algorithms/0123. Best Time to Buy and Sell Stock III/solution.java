// -------------------------------solution begin-------------------------------
class Solution {
  public int maxProfit(int[] prices) {
    int buy1 = -prices[0], sell1 = 0;
    int buy2 = -prices[0], sell2 = 0;

    for (int price : prices) {
      buy1 = Math.max(buy1, -price);
      sell1 = Math.max(sell1, buy1 + price);
      buy2 = Math.max(buy2, sell1 - price);
      sell2 = Math.max(sell2, buy2 + price);
    }

    return sell2;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] prices1 = new int[] { 3, 3, 5, 0, 0, 3, 1, 4 };
    int[] prices2 = new int[] { 1, 2, 3, 4, 5 };
    int[] prices3 = new int[] { 7, 6, 4, 3, 1 };
    int[] prices4 = new int[] { 1 };

    Solution solution = new Solution();

    System.out.println("Input:  " + ArrayShowInteger(prices1));
    System.out.println("Output: " + solution.maxProfit(prices1));

    System.out.println("Input:  " + ArrayShowInteger(prices2));
    System.out.println("Output: " + solution.maxProfit(prices2));

    System.out.println("Input:  " + ArrayShowInteger(prices3));
    System.out.println("Output: " + solution.maxProfit(prices3));

    System.out.println("Input:  " + ArrayShowInteger(prices4));
    System.out.println("Output: " + solution.maxProfit(prices4));
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
