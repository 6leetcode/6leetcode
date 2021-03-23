#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ListNode.h>

static struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
  if (n == 0) {
    return NULL;
  }

  struct ListNode *p, *prev, dummy;
  dummy.next = head;
  p = prev = &dummy;
  while (n-- > 0) {
    p = p->next;
  }

  while (p->next != NULL) {
    p = p->next;
    prev = prev->next;
  }

  struct ListNode *tmp = prev->next;
  prev->next = tmp->next;
  if (tmp == head) {
    head = tmp->next;
  }
  free(tmp);

  return head;
}

int main(int argc, char const *argv[]) {
  int array[] = {1, 2, 3, 4, 5};

  struct ListNode *input1 = init(array, sizeof(array) / sizeof(int));
  int input2 = 2;

  printf("Input:  %s %d\n", show(input1), input2);

  struct ListNode *output = removeNthFromEnd(input1, input2);

  printf("Output: %s\n", show(output));

  destory(input1);

  return 0;
}
