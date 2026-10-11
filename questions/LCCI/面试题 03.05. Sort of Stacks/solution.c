#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *data;
  int size;
} SortedStack;

SortedStack *sortedStackCreate(void) {
  SortedStack *obj = (SortedStack *)malloc(sizeof(SortedStack));
  obj->data = (int *)malloc(sizeof(int) * 200000);
  obj->size = 0;
  return obj;
}

void sortedStackPush(SortedStack *obj, int val) {
  int *tmp = (int *)malloc(sizeof(int) * (obj->size + 1));
  int t = 0;
  while (obj->size > 0 && obj->data[obj->size - 1] < val) {
    tmp[t++] = obj->data[--obj->size];
  }
  obj->data[obj->size++] = val;
  while (t > 0) {
    obj->data[obj->size++] = tmp[--t];
  }
  free(tmp);
}

void sortedStackPop(SortedStack *obj) {
  if (obj->size > 0) obj->size--;
}

int sortedStackPeek(SortedStack *obj) {
  return obj->size > 0 ? obj->data[obj->size - 1] : -1;
}

bool sortedStackIsEmpty(SortedStack *obj) {
  return obj->size == 0;
}

void sortedStackFree(SortedStack *obj) {
  free(obj->data);
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"SortedStack\", \"push\", \"push\", \"peek\", \"pop\", \"peek\"]\n");
  SortedStack *obj = sortedStackCreate();
  sortedStackPush(obj, 1);
  sortedStackPush(obj, 2);
  int a = sortedStackPeek(obj);
  sortedStackPop(obj);
  int b = sortedStackPeek(obj);
  printf("Output: [null, null, null, %d, null, %d]\n", a, b);
  sortedStackFree(obj);
  return EXIT_SUCCESS;
}
