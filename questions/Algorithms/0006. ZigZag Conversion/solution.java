// -------------------------------solution begin-------------------------------
class Solution {
  public String convert(String s, int numRows) {
    if (numRows == 1) {
      return s;
    }
    int n = s.length();
    int cycle = 2 * numRows - 2;
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < numRows; i++) {
      for (int j = 0; i + j < n; j += cycle) {
        sb.append(s.charAt(i + j));
        if (i != 0 && i != numRows - 1 && j + cycle - i < n) {
          sb.append(s.charAt(j + cycle - i));
        }
      }
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    String input = "PAYPALISHIRING";
    int rows = 3;
    System.out.println("Input:  " + input + " " + rows);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.convert(input, rows));
  }
}
