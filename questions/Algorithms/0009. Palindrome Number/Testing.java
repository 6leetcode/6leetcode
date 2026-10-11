// -------------------------------solution begin-------------------------------
class Solution {
  public boolean isPalindrome(int x) {
    if (x < 0) {
      return false;
    }
    long k = 0;
    int n = x;
    while (n > 0) {
      k = k * 10 + n % 10;
      n /= 10;
    }
    return k == x;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int input = 121;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.isPalindrome(input));
  }
}
