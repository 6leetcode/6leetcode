#include <cstdlib>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
int majorityElement(int *nums, int numsSize) {
  int candidate = nums[0], count = 1;
  for (int i = 1; i < numsSize; i++) {
    if (count == 0) {
      candidate = nums[i];
      count     = 1;
    } else if (nums[i] == candidate) {
      count++;
    } else {
      count--;
    }
  }
  return candidate;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input[] = {-1, -1, 2147483647};
  int length  = sizeof(input) / sizeof(int);
  cout << "Input: [";
  for (int i = 0; i < length; i++) {
    cout << input[i];
    if (i < length - 1) {
      cout << " ";
    }
  }
  cout << "]" << endl;
  cout << "Output: " << majorityElement(input, length) << endl;
  return EXIT_SUCCESS;
}
