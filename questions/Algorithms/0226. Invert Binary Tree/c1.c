#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode *invertTree(struct TreeNode *root) {
  if (root != NULL) {
    struct TreeNode *node = root->left;

    root->left  = root->right;
    root->right = node;

    invertTree(root->left);
    invertTree(root->right);
  }
  return root;
}

struct LinkList {
  struct TreeNode *node;
  struct LinkList *next;
};

struct LinkList *removeHead(struct LinkList *list) {
  struct LinkList *ret = NULL;
  if (list != NULL) {
    ret = list->next;
    free(list);
  }
  return ret;
}

void addTail(struct LinkList *list, struct TreeNode *node) {
  if (list->next == NULL) {
    struct LinkList *n = (struct LinkList *)malloc(sizeof(struct LinkList));

    n->next    = NULL;
    n->node    = node;
    list->next = n;
  } else {
    addTail(list->next, node);
  }
}

int main(int argc, char const *argv[]) {
  struct TreeNode node1, node2, node3;
  node1.left  = &node2;
  node1.right = &node3;
  node1.val   = 1;
  node2.left  = NULL;
  node2.right = NULL;
  node2.val   = 2;
  node3.left  = NULL;
  node3.right = NULL;
  node3.val   = 3;

  struct LinkList *linkList = NULL;
  printf("Input:  [");
  do {
    if (linkList == NULL) {
      linkList       = (struct LinkList *)malloc(sizeof(struct LinkList));
      linkList->node = &node1;
      linkList->next = NULL;
    } else {
      if (linkList->node->left != NULL) {
        addTail(linkList, linkList->node->left);
      }
      if (linkList->node->right != NULL) {
        addTail(linkList, linkList->node->right);
      }
      printf("%d", linkList->node->val);
      linkList = removeHead(linkList);
      if (linkList != NULL) {
        printf(", ");
      }
    }
  } while (linkList != NULL);
  printf("]\n");

  struct TreeNode *tempNode;
  tempNode = invertTree(&node1);
  printf("Output: [");
  do {
    if (linkList == NULL) {
      linkList       = (struct LinkList *)malloc(sizeof(struct LinkList));
      linkList->node = tempNode;
      linkList->next = NULL;
    } else {
      if (linkList->node->left != NULL) {
        addTail(linkList, linkList->node->left);
      }
      if (linkList->node->right != NULL) {
        addTail(linkList, linkList->node->right);
      }
      printf("%d", linkList->node->val);
      linkList = removeHead(linkList);
      if (linkList != NULL) {
        printf(", ");
      }
    }
  } while (linkList != NULL);
  printf("]\n");

  return EXIT_SUCCESS;
}
