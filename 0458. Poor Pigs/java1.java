class Solution {
    public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int times = minutesToTest / minutesToDie;
        int base = times + 1;
        // base ^ ans >= buckets 
        // ans >= log(buckets) / log(base)
        double temp = Math.log(buckets) / Math.log(base);
        int ans = (int)Math.ceil(temp);
        return ans;
    }
}

public class java1 {
    public static void main (String[] args) {
        Solution solution = new Solution();
        int buckets = 1000, minutesToDie = 15, minutesToTest = 1000;
        System.out.printf("Input:  %d, %d, %d\n", buckets, minutesToDie, minutesToTest);
        System.out.printf("Output: %d\n", solution.poorPigs(buckets, minutesToDie, minutesToTest));
    }
}
