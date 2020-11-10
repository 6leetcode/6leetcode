import java.util.Arrays;

// ------------------------------- solution begin -------------------------------
class Solution {
  public int countPrimes(int n) {
    boolean[] isPrim = new boolean[n];
    Arrays.fill(isPrim, true);
    for (int i = 2; i * i < n; i++)
      if (isPrim[i])
        for (int j = i * i; j < n; j += i)
          isPrim[j] = false;

    int count = 0;
    for (int i = 2; i < n; i++)
      if (isPrim[i]) count++;
    return count;
  }
}
// ------------------------------- solution end ---------------------------------

public class java1 {
  public static void main(String[] args) {
    int input = 10;
    System.out.printf("Input:  %d\n", input);
    Solution solution = new Solution();
    System.out.printf("Output: %d\n", solution.countPrimes(input));
  }
}
