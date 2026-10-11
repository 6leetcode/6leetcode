// -------------------------------solution begin-------------------------------
class Solution {
  public int myAtoi(String str) {
    int i = 0, n = str.length();
    while (i < n && str.charAt(i) == ' ') {
      i++;
    }

    int sign = 1;
    if (i < n && (str.charAt(i) == '+' || str.charAt(i) == '-')) {
      sign = str.charAt(i) == '-' ? -1 : 1;
      i++;
    }

    long num = 0;
    while (i < n && Character.isDigit(str.charAt(i))) {
      num = num * 10 + (str.charAt(i) - '0');
      if (sign == 1 && num > Integer.MAX_VALUE) {
        return Integer.MAX_VALUE;
      }
      if (sign == -1 && -num < Integer.MIN_VALUE) {
        return Integer.MIN_VALUE;
      }
      i++;
    }

    return (int) (sign * num);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input = " -42";
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.myAtoi(input));
  }
}
