#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

// ------------------------------- solution begin -------------------------------
struct ListNode *create_node(int val) {
  struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
  if (node != NULL) {
    node->val = val;
    node->next = NULL;
  }
  return node;
}

struct ListNode *rotateRight(struct ListNode *head, int k) {
  int sz = 0;

  for (struct ListNode *cur = head; cur != NULL; cur = cur->next, sz++) {};

  if (sz == 0) return NULL;

  struct ListNode *old_head = head;
  struct ListNode *new_head = NULL;
  struct ListNode *new_cur = NULL;
  for (int length = k % sz; length > 0; length--) {
    if (new_head == NULL) {
      new_cur = create_node(0);
      new_head = new_cur;
    } else {
      new_cur->next = create_node(0);
      new_cur = new_cur->next;
    }
  }

  for (int length = sz - (k % sz); length > 0; length--) {
    if (new_head == NULL) {
      new_cur = create_node(old_head->val);
      new_head = new_cur;
    } else {
      new_cur->next = create_node(old_head->val);
      new_cur = new_cur->next;
    }
    old_head = old_head->next;
  }

  struct ListNode *new_tmp = new_head;

  for (int length = k % sz; length > 0; length--) {
    new_tmp->val = old_head->val;
    new_tmp = new_tmp->next;
    old_head = old_head->next;
  }

  return new_head;
}
// ------------------------------- solution end ---------------------------------

void free_node(struct ListNode *head) {
  if (head == NULL) {
    return;
  }
  if (head->next != NULL) {
    free_node(head->next);
  }
  free(head);
}

int main(int argc, char const *argv[]) {
  struct ListNode node1;
  struct ListNode node2;
  struct ListNode node3;
  struct ListNode node4;
  struct ListNode node5;

  node1.val = 1;
  node2.val = 2;
  node3.val = 3;
  node4.val = 4;
  node5.val = 5;

  node1.next = &node2;
  node2.next = &node3;
  node3.next = &node4;
  node4.next = &node5;
  node5.next = NULL;

  struct ListNode *ans = rotateRight(&node1, 3);

  struct ListNode temp = node1;

  printf("Input:  %d ", temp.val);
  temp = *temp.next;
  while (true) {
    printf("-> %d ", temp.val);
    if (temp.next == NULL) {
      break;
    }
    temp = *temp.next;
  }

  printf("\n");

  printf("Output: %d ", ans->val);
  struct ListNode *ans_tmp = ans->next;
  if (ans_tmp == NULL) {
    printf("null\n");
  } else {
    while (true) {
      printf("-> %d ", ans_tmp->val);
      if (ans_tmp->next == NULL) {
        break;
      }
      ans_tmp = ans_tmp->next;
    }
  }

  free_node(ans);

  return EXIT_SUCCESS;
}
