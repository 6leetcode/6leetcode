#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
static const char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                             "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                             "Seventeen", "Eighteen", "Nineteen"};
static const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
static const char *thousands[] = {"", "Thousand", "Million", "Billion"};

static void append(char *out, const char *word) {
  if (out[0] != '\0') strcat(out, " ");
  strcat(out, word);
}

static void below1000(int n, char *out) {
  if (n >= 100) {
    append(out, ones[n / 100]);
    append(out, "Hundred");
    n %= 100;
  }
  if (n >= 20) {
    append(out, tens[n / 10]);
    n %= 10;
  }
  if (n > 0) {
    append(out, ones[n]);
  }
}

char *numberToWords(int num) {
  char *res = (char *)calloc(2000, 1);
  if (num < 0) {
    append(res, "Negative");
    num = -num;
  }
  if (num == 0 && res[0] == '\0') {
    strcpy(res, "Zero");
    return res;
  }
  int chunks[4], count = 0;
  int tmp = num;
  while (tmp > 0) {
    chunks[count++] = tmp % 1000;
    tmp /= 1000;
  }
  for (int i = count - 1; i >= 0; i--) {
    if (chunks[i] == 0) continue;
    char part[512] = "";
    below1000(chunks[i], part);
    append(res, part);
    if (thousands[i][0] != '\0') append(res, thousands[i]);
  }
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 12345;
  printf("Input:  %d\n", input);
  char *res = numberToWords(input);
  printf("Output: \"%s\"\n", res);
  free(res);
  return EXIT_SUCCESS;
}
