import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private final String[] ones = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
      "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
  private final String[] tens = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
  private final String[] thousands = { "", "Thousand", "Million", "Billion" };

  private void below1000(int n, List<String> out) {
    if (n >= 100) {
      out.add(ones[n / 100]);
      out.add("Hundred");
      n %= 100;
    }
    if (n >= 20) {
      out.add(tens[n / 10]);
      n %= 10;
    }
    if (n > 0) out.add(ones[n]);
  }

  public String numberToWords(int num) {
    if (num == 0) return "Zero";
    List<String> out = new ArrayList<>();
    if (num < 0) {
      out.add("Negative");
      num = -num;
    }
    List<Integer> chunks = new ArrayList<>();
    for (int tmp = num; tmp > 0; tmp /= 1000) chunks.add(tmp % 1000);
    for (int i = chunks.size() - 1; i >= 0; i--) {
      if (chunks.get(i) == 0) continue;
      below1000(chunks.get(i), out);
      if (!thousands[i].isEmpty()) out.add(thousands[i]);
    }
    return String.join(" ", out);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 12345;
    System.out.println("Input:  " + input);
    System.out.println("Output: \"" + new Solution().numberToWords(input) + "\"");
  }
}
