// -------------------------------solution begin-------------------------------
class Solution {
    public int hammingDistance(int x, int y) {
        return Integer.bitCount(x ^ y);
    }
}
// -------------------------------solution end---------------------------------

public class java {
  public static void main(String[] args) {
    int input1 = 1, input2 = 4;
    System.out.printf("Input:  %d, %d\n", input1, input2);

    Solution solution = new Solution();
    System.out.printf("Output: %d\n", solution.hammingDistance(input1, input2));
  }
}
