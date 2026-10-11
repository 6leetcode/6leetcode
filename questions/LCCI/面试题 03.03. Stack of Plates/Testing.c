#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int cap;
  int **stacks;
  int *sizes;
  int count;
} StackOfPlates;

StackOfPlates *stackOfPlatesCreate(int cap) {
  StackOfPlates *obj = (StackOfPlates *)malloc(sizeof(StackOfPlates));
  obj->cap = cap;
  obj->stacks = (int **)malloc(sizeof(int *) * 2000);
  obj->sizes = (int *)calloc(2000, sizeof(int));
  obj->count = 0;
  return obj;
}

void stackOfPlatesPush(StackOfPlates *obj, int val) {
  if (obj->cap == 0) return;
  if (obj->count == 0 || obj->sizes[obj->count - 1] == obj->cap) {
    obj->stacks[obj->count] = (int *)malloc(sizeof(int) * obj->cap);
    obj->sizes[obj->count] = 0;
    obj->count++;
  }
  obj->stacks[obj->count - 1][obj->sizes[obj->count - 1]++] = val;
}

int stackOfPlatesPop(StackOfPlates *obj) {
  if (obj->count == 0) return -1;
  int v = obj->stacks[obj->count - 1][--obj->sizes[obj->count - 1]];
  if (obj->sizes[obj->count - 1] == 0) {
    free(obj->stacks[obj->count - 1]);
    obj->count--;
  }
  return v;
}

int stackOfPlatesPopAt(StackOfPlates *obj, int index) {
  if (index < 0 || index >= obj->count) return -1;
  int v = obj->stacks[index][--obj->sizes[index]];
  if (obj->sizes[index] == 0) {
    free(obj->stacks[index]);
    for (int i = index; i < obj->count - 1; i++) {
      obj->stacks[i] = obj->stacks[i + 1];
      obj->sizes[i] = obj->sizes[i + 1];
    }
    obj->count--;
  }
  return v;
}

void stackOfPlatesFree(StackOfPlates *obj) {
  for (int i = 0; i < obj->count; i++) free(obj->stacks[i]);
  free(obj->stacks);
  free(obj->sizes);
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"StackOfPlates\", \"push\", \"push\", \"push\", \"popAt\", \"popAt\", \"popAt\"]\n");
  StackOfPlates *obj = stackOfPlatesCreate(2);
  stackOfPlatesPush(obj, 1);
  stackOfPlatesPush(obj, 2);
  stackOfPlatesPush(obj, 3);
  int a = stackOfPlatesPopAt(obj, 0);
  int b = stackOfPlatesPopAt(obj, 0);
  int c = stackOfPlatesPopAt(obj, 0);
  printf("Output: [null, null, null, null, %d, %d, %d]\n", a, b, c);
  stackOfPlatesFree(obj);
  return EXIT_SUCCESS;
}
