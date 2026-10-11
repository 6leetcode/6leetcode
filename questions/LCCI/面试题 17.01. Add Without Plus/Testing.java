// -------------------------------solution begin-------------------------------
class Solution {
  public int add(int a, int b) {
    while (b != 0) {
      int sum = a ^ b;
      int carry = (a & b) << 1;
      a = sum;
      b = carry;
    }
    return a;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input1 = -1, input2 = 2;
    System.out.println("Input:  " + input1 + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.add(input1, input2));
  }
}
