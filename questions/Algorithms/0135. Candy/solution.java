// -------------------------------solution begin-------------------------------
class Solution {
  public int candy(int[] ratings) {
    int n = ratings.length;
    int[] c = new int[n];
    for (int i = 0; i < n; i++) {
      c[i] = 1;
    }

    for (int i = 1; i < n; i++) {
      if (ratings[i] > ratings[i - 1]) {
        c[i] = c[i - 1] + 1;
      }
    }
    for (int i = n - 2; i >= 0; i--) {
      if (ratings[i] > ratings[i + 1] && c[i] <= c[i + 1]) {
        c[i] = c[i + 1] + 1;
      }
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
      total += c[i];
    }
    return total;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();

    int[] t1 = { 1, 0, 2 };
    System.out.printf("Input:  %s\n", ArrayShowInteger(t1));
    System.out.printf("Output: %d\n", solution.candy(t1));

    int[] t2 = { 1, 2, 2 };
    System.out.printf("Input:  %s\n", ArrayShowInteger(t2));
    System.out.printf("Output: %d\n", solution.candy(t2));
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
