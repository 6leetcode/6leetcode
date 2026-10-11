import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int search(int[] arr, int target) {
    int lo = 0, hi = arr.length - 1, res = -1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (arr[mid] == target) {
        res = mid;
        hi = mid - 1;
      } else if (arr[mid] > arr[lo]) {
        if (target >= arr[lo] && target < arr[mid]) {
          hi = mid - 1;
        } else {
          lo = mid + 1;
        }
      } else if (arr[mid] < arr[lo]) {
        if (target > arr[mid] && target <= arr[hi]) {
          lo = mid + 1;
        } else {
          hi = mid - 1;
        }
      } else {
        if (arr[lo] != target) {
          lo++;
        } else {
          res = mid;
          hi = mid - 1;
        }
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] arr = { 15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14 };
    int target = 5;
    System.out.println("Input:  " + Arrays.toString(arr) + ", target = " + target);
    System.out.println("Output: " + new Solution().search(arr, target));
  }
}
