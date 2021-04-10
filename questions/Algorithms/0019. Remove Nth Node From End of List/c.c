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

  sds input_show = show(input1);
  printf("Input:  %s %d\n", input_show, input2);
  sdsfree(input_show);

  struct ListNode *output = removeNthFromEnd(input1, input2);

  sds output_show = show(output);
  printf("Output: %s\n", output_show);
  sdsfree(output_show);

  destory(input1);

  return 0;
}
