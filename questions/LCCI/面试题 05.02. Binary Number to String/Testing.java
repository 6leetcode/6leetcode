// -------------------------------solution begin-------------------------------
class Solution {
  public String printBin(double num) {
    StringBuilder sb = new StringBuilder("0.");
    while (num > 0 && sb.length() < 32) {
      num *= 2;
      if (num >= 1) {
        sb.append('1');
        num -= 1;
      } else {
        sb.append('0');
      }
    }
    return num > 0 ? "ERROR" : sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    double input = 0.625;
    System.out.println("Input:  " + input);
    System.out.println("Output: " + new Solution().printBin(input));
  }
}
