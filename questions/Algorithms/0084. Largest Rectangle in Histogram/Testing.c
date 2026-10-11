#include <stdio.h>
#include <stdlib.h>

#include <array.h>

// ------------------------------- solution begin -------------------------------
int largestRectangleArea(int *heights, int heightsSize) {
  int *stack = (int *)malloc(sizeof(int) * (heightsSize + 1));
  int top = -1, maxArea = 0;
  for (int i = 0; i <= heightsSize; i++) {
    int h = (i == heightsSize) ? 0 : heights[i];
    while (top >= 0 && heights[stack[top]] > h) {
      int height = heights[stack[top--]];
      int width = top < 0 ? i : i - stack[top] - 1;
      if (height * width > maxArea) maxArea = height * width;
    }
    stack[++top] = i;
  }
  free(stack);
  return maxArea;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int heights[] = {2, 1, 5, 6, 2, 3};
  int size = sizeof(heights) / sizeof(int);
  sds input = array_show(heights, size);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %d\n", largestRectangleArea(heights, size));
  return EXIT_SUCCESS;
}
