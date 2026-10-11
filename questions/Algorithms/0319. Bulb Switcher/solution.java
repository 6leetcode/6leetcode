// -------------------------------solution begin-------------------------------
class Solution {
  public int bulbSwitch(int n) {
    return (int) Math.sqrt(n);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 16;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.bulbSwitch(input));
  }
}
