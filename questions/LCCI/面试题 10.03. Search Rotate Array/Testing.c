#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int search(int *arr, int arrSize, int target) {
  int lo = 0, hi = arrSize - 1, res = -1;
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
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14};
  int target = 5;
  sds input = array_show(arr, 12);
  printf("Input:  %s, target = %d\n", input, target);
  sdsfree(input);
  printf("Output: %d\n", search(arr, 12, target));
  return EXIT_SUCCESS;
}
