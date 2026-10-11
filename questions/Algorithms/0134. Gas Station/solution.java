// -------------------------------solution begin-------------------------------
class Solution {
  public int canCompleteCircuit(int[] gas, int[] cost) {
    int total = 0;
    int tank = 0;
    int start = 0;

    for (int i = 0; i < gas.length; i++) {
      int diff = gas[i] - cost[i];
      total += diff;
      tank += diff;
      if (tank < 0) {
        start = i + 1;
        tank = 0;
      }
    }

    return total >= 0 ? start : -1;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();

    int[] gas1 = { 1, 2, 3, 4, 5 };
    int[] cost1 = { 3, 4, 5, 1, 2 };
    System.out.printf("Input:  %s %s\n", ArrayShowInteger(gas1), ArrayShowInteger(cost1));
    System.out.printf("Output: %d\n", solution.canCompleteCircuit(gas1, cost1));

    int[] gas2 = { 2, 3, 4 };
    int[] cost2 = { 3, 4, 3 };
    System.out.printf("Input:  %s %s\n", ArrayShowInteger(gas2), ArrayShowInteger(cost2));
    System.out.printf("Output: %d\n", solution.canCompleteCircuit(gas2, cost2));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      if (i == 0) {
        res += Integer.toString(arr[i]);
      } else {
        res += ", " + Integer.toString(arr[i]);
      }
    }
    res += "]";
    return res;
  }
}
