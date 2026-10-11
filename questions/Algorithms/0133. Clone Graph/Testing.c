#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  int numNeighbors;
  struct Node *neighbors[100];
};

// ------------------------------- solution begin -------------------------------
static struct Node *cloneNode(struct Node *node, struct Node **visited) {
  if (node == NULL) {
    return NULL;
  }
  if (visited[node->val] != NULL) {
    return visited[node->val];
  }
  struct Node *copy = (struct Node *)malloc(sizeof(struct Node));
  copy->val = node->val;
  copy->numNeighbors = 0;
  visited[node->val] = copy;
  for (int i = 0; i < node->numNeighbors; i++) {
    copy->neighbors[copy->numNeighbors++] = cloneNode(node->neighbors[i], visited);
  }
  return copy;
}

struct Node *cloneGraph(struct Node *node) {
  struct Node *visited[101] = {NULL};
  return cloneNode(node, visited);
}
// ------------------------------- solution end ---------------------------------

static void addEdge(struct Node *a, struct Node *b) {
  a->neighbors[a->numNeighbors++] = b;
}

static void collect(struct Node *node, struct Node **byVal, int *seen) {
  if (node == NULL || seen[node->val]) {
    return;
  }
  seen[node->val] = 1;
  byVal[node->val] = node;
  for (int i = 0; i < node->numNeighbors; i++) {
    collect(node->neighbors[i], byVal, seen);
  }
}

static void printGraph(struct Node *node) {
  struct Node *byVal[101] = {NULL};
  int seen[101] = {0};
  collect(node, byVal, seen);
  int count = 0;
  for (int v = 1; v <= 100; v++) {
    if (byVal[v] != NULL) {
      count = v;
    }
  }
  printf("[");
  for (int v = 1; v <= count; v++) {
    printf("%s[", v == 1 ? "" : ", ");
    for (int i = 0; i < byVal[v]->numNeighbors; i++) {
      printf("%s%d", i == 0 ? "" : ", ", byVal[v]->neighbors[i]->val);
    }
    printf("]");
  }
  printf("]\n");
}

static void gather(struct Node *node, struct Node **list, int *count, int *seen) {
  if (node == NULL || seen[node->val]) {
    return;
  }
  seen[node->val] = 1;
  list[(*count)++] = node;
  for (int i = 0; i < node->numNeighbors; i++) {
    gather(node->neighbors[i], list, count, seen);
  }
}

int main(int argc, char const *argv[]) {
  struct Node nodes[4];
  for (int i = 0; i < 4; i++) {
    nodes[i].val = i + 1;
    nodes[i].numNeighbors = 0;
  }
  addEdge(&nodes[0], &nodes[1]);
  addEdge(&nodes[0], &nodes[3]);
  addEdge(&nodes[1], &nodes[0]);
  addEdge(&nodes[1], &nodes[2]);
  addEdge(&nodes[2], &nodes[1]);
  addEdge(&nodes[2], &nodes[3]);
  addEdge(&nodes[3], &nodes[0]);
  addEdge(&nodes[3], &nodes[2]);

  printf("Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]\n");
  struct Node *clone = cloneGraph(&nodes[0]);
  printf("Output: ");
  printGraph(clone);

  struct Node *all[101];
  int count = 0;
  int seen[101] = {0};
  gather(clone, all, &count, seen);
  for (int i = 0; i < count; i++) {
    free(all[i]);
  }
  return EXIT_SUCCESS;
}
