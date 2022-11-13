// ------------------------------- solution begin -------------------------------
class Solution {
  public String multiply(String num1, String num2) {
    if (num1.equals("0") || num2.equals("0")) {
      return "0";
    }
    int m = num1.length(), n = num2.length();
    int[] ansArr = new int[m + n];
    for (int i = m - 1; i >= 0; i--) {
      int x = num1.charAt(i) - '0';
      for (int j = n - 1; j >= 0; j--) {
        int y = num2.charAt(j) - '0';
        ansArr[i + j + 1] += x * y;
      }
    }
    for (int i = m + n - 1; i > 0; i--) {
      ansArr[i - 1] += ansArr[i] / 10;
      ansArr[i] %= 10;
    }
    int index = ansArr[0] == 0 ? 1 : 0;
    StringBuffer ans = new StringBuffer();
    while (index < m + n) {
      ans.append(ansArr[index]);
      index++;
    }
    return ans.toString();
  }
}

// ------------------------------- solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String input1 = "2333";
    String input2 = "3334";
    Solution solution = new Solution();
    System.out.printf("Input:  %s, %s%n", input1, input2);
    System.out.printf("Output: %s%n", solution.multiply(input1, input2));
  }
}
