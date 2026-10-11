#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
bool isPalindrome(struct ListNode *head) {
  int vals[100000];
  int n = 0;
  for (struct ListNode *p = head; p; p = p->next) {
    vals[n++] = p->val;
  }
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    if (vals[i] != vals[j]) return false;
  }
  return true;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 2, 1};
  struct ListNode *head = init(arr, 4);
  sds input = show(head);
  printf("Input:  %s\n", input);
  sdsfree(input);
  printf("Output: %s\n", isPalindrome(head) ? "true" : "false");
  destory(head);
  return EXIT_SUCCESS;
}
