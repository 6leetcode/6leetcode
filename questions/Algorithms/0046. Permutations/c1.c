#include <stdio.h>
#include <stdlib.h>

#include <array.h>
#include <matrix.h>

void swap(int *a, int *b) {
  int m = *a;
  *a = *b;
  *b = m;
}

int factorial(int num) {
  int ans = 1;
  if (num >= 2) {
    for (int i = 2; i <= num; i++) {
      ans = ans * i;
    }
  }
  return ans;
}

int **ans;
int _index = 0;

void perm(int *array, int begin, int length) {
  if (begin == length - 1) {
    for (int i = 0; i < length; i++) {
      ans[_index][i] = array[i];
    }
    _index++;
  } else {
    for (int i = begin; i < length; i++) {
      swap(array + begin, array + i);
      perm(array, begin + 1, length);
      swap(array + begin, array + i);
    }
  }
}

int **permute(int *nums, int numsSize, int *returnSize, int **returnColumnSizes) {
  *returnSize = factorial(numsSize);
  *returnColumnSizes = (int *)malloc(sizeof(int) * *returnSize);
  ans = (int **)malloc(sizeof(int *) * factorial(numsSize));
  for (int i = 0; i < *returnSize; i++) {
    (*returnColumnSizes)[i] = numsSize;
    ans[i] = (int *)malloc(sizeof(int) * numsSize);
  }
  perm(nums, 0, numsSize);
  return ans;
}

int main(int argc, char const *argv[]) {
  int input1[] = {1};
  int input2 = sizeof(input1) / sizeof(int);
  printf("Input:  ");
  array_show(input1, input2);
  printf("\n");

  int output1;
  int *output2;
  printf("Output: ");
  int **output3 = permute(input1, input2, &output1, &output2);
  matrix_show(output3, output1, output2);
  free(output2);
  for (int i = 0; i < output1; i++) {
    free(output3[i]);
  }
  free(output3);
  return EXIT_SUCCESS;
}
