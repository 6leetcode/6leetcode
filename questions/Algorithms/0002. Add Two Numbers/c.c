#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  int carry = 0;
  struct ListNode dummy;
  struct ListNode *p = l1, *prev = &dummy;

  dummy.next = p;
  while (l1 != NULL || l2 != NULL) {
    int sum = 0;
    int last_carry = carry;

    if (l1 != NULL) {
      if (p == NULL) {
        prev->next = l1;
        p = l1;
      }
      sum += l1->val;
      l1 = l1->next;
    }

    if (l2 != NULL) {
      if (p == NULL) {
        prev->next = l2;
        p = l2;
      }
      sum += l2->val;
      l2 = l2->next;
    }

    sum += last_carry;
    carry = sum / 10;
    p->val = sum % 10;
    prev = p;
    p = p->next;
  }

  if (carry) {
    p = malloc(sizeof(*p));
    p->val = carry;
    p->next = NULL;
    prev->next = p;
  }

  return dummy.next;
}

// ------------------------------- solution end ---------------------------------

int main(int argc, char **argv) {
  int arr1[3] = {2, 4, 6};
  int arr2[3] = {5, 6, 4};

  struct ListNode *l1 = init(arr1, sizeof(arr1) / sizeof(int));
  sds input1 = show(l1);

  struct ListNode *l2 = init(arr2, sizeof(arr2) / sizeof(int));
  sds input2 = show(l2);
  printf("Input:  %s %s", input1, input2);

  sdsfree(input1);
  sdsfree(input2);

  struct ListNode *res = addTwoNumbers(l1, l2);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);

  destory(res);
  destory(l2);

  return EXIT_SUCCESS;
}
