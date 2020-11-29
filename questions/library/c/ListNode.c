#include <stdio.h>

#include <ListNode.h>

int main(int argc, char const *argv[]) {
  int arr[3] = {1, 2, 3};
  struct ListNode *node = init(arr, sizeof(arr) / sizeof(int));
  show(node);
  destory(node);
  return EXIT_SUCCESS;
}
