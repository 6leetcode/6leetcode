// -------------------------------solution begin-------------------------------
class Solution {
  public String intToRoman(int num) {
    String[] symbol = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int[] value = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < value.length && num > 0; i++) {
      while (num >= value[i]) {
        num -= value[i];
        sb.append(symbol[i]);
      }
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 3;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.intToRoman(input));
  }
}
