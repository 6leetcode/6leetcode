#include <stdio.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
  if (l1 == NULL) {
    return l2;
  } else if (l2 == NULL) {
    return l1;
  } else if (l1->val < l2->val) {
    l1->next = mergeTwoLists(l1->next, l2);
    return l1;
  } else {
    l2->next = mergeTwoLists(l1, l2->next);
    return l2;
  }
}

// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int arr1[3] = {1, 2, 4};
  struct ListNode *l1 = init(arr1, sizeof(arr1) / sizeof(int));
  sds input1 = show(l1);

  int arr2[3] = {1, 3, 4};
  struct ListNode *l2 = init(arr2, sizeof(arr2) / sizeof(int));
  sds input2 = show(l2);
  printf("Input:  %s %s\n", input1, input2);

  sdsfree(input1);
  sdsfree(input2);

  struct ListNode *res = mergeTwoLists(l1, l2);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);

  destory(res);

  return EXIT_SUCCESS;
}
