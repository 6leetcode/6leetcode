#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int trap(int *height, int heightSize) {
  int l = 0, r = heightSize - 1, lmax = 0, rmax = 0, res = 0;
  while (l < r) {
    if (height[l] < height[r]) {
      if (height[l] >= lmax) {
        lmax = height[l];
      } else {
        res += lmax - height[l];
      }
      l++;
    } else {
      if (height[r] >= rmax) {
        rmax = height[r];
      } else {
        res += rmax - height[r];
      }
      r--;
    }
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  sds input = array_show(height, 12);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", trap(height, 12));
  return EXIT_SUCCESS;
}
