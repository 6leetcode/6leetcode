#include <stdio.h>
#include <stdlib.h>

#include <ListNode.h>

// ------------------------------- solution begin -------------------------------
static struct ListNode *mergeTwoLists(struct ListNode *a, struct ListNode *b) {
  if (a == NULL) return b;
  if (b == NULL) return a;
  if (a->val < b->val) {
    a->next = mergeTwoLists(a->next, b);
    return a;
  }
  b->next = mergeTwoLists(a, b->next);
  return b;
}

struct ListNode *mergeKLists(struct ListNode **lists, int listsSize) {
  struct ListNode *ans = NULL;
  for (int i = 0; i < listsSize; i++) {
    ans = mergeTwoLists(ans, lists[i]);
  }
  return ans;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int a1[] = {1, 4, 5};
  int a2[] = {1, 3, 4};
  int a3[] = {2, 6};
  struct ListNode *lists[3];
  lists[0] = init(a1, 3);
  lists[1] = init(a2, 3);
  lists[2] = init(a3, 2);

  printf("Input:  ");
  for (int i = 0; i < 3; i++) {
    sds s = show(lists[i]);
    printf("%s%s", i == 0 ? "" : ", ", s);
    sdsfree(s);
  }
  printf("\n");

  struct ListNode *res = mergeKLists(lists, 3);
  sds output = show(res);
  printf("Output: %s\n", output);
  sdsfree(output);
  destory(res);

  return EXIT_SUCCESS;
}
