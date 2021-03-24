#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int maxArea(int *height, int heightSize) {
  int min = 0, max = heightSize - 1;
  int area_max = 0;
  while (min < max) {
    int area = (max - min) * (height[min] < height[max] ? height[min] : height[max]);
    area_max = area > area_max ? area : area_max;
    if (height[min] < height[max]) {
      min++;
    } else {
      max--;
    }
  }
  return area_max;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int input2 = (int)(sizeof(input1) / sizeof(int));
  // sds show = array_show(input1, input2);
  // printf("Input:  %s %d\n", show, input2);
  // sds_free(&show);
  printf("Output: %d\n", maxArea(input1, input2));
  return EXIT_SUCCESS;
}
