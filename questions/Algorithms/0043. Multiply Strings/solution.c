#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *multiply(char *num1, char *num2) {
  int m = strlen(num1), n = strlen(num2);
  char *ans = malloc(sizeof(char) * (m + n + 3));
  memset(ans, 0, sizeof(char) * (m + n + 3));
  if ((m == 1 && num1[0] == '0') || (n == 1 && num2[0] == '0')) {
    ans[0] = '0', ans[1] = 0;
    return ans;
  }
  int *ansArr = malloc(sizeof(int) * (m + n + 3));
  memset(ansArr, 0, sizeof(int) * (m + n + 3));
  for (int i = m - 1; i >= 0; i--) {
    int x = num1[i] - '0';
    for (int j = n - 1; j >= 0; j--) {
      int y = num2[j] - '0';
      ansArr[i + j + 1] += x * y;
    }
  }
  for (int i = m + n - 1; i > 0; i--) {
    ansArr[i - 1] += ansArr[i] / 10;
    ansArr[i] %= 10;
  }
  int index = ansArr[0] == 0 ? 1 : 0;
  int ansLen = 0;
  while (index < m + n) {
    ans[ansLen++] = ansArr[index];
    index++;
  }
  for (int i = 0; i < ansLen; i++) ans[i] += '0';
  free(ansArr);
  return ans;
}

int main(int argc, char const *argv[]) {
  char input1[] = "2333";
  char input2[] = "3334";
  printf("Input:  %s, %s\n", input1, input2);
  char *output = multiply(input1, input2);
  printf("Output: %s\n", output);
  free(output);
  return EXIT_SUCCESS;
}
