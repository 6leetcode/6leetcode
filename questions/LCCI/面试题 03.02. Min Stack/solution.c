#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *data;
  int *mins;
  int top;
  int capacity;
} MinStack;

MinStack *minStackCreate(void) {
  MinStack *obj = (MinStack *)malloc(sizeof(MinStack));
  obj->capacity = 100000;
  obj->data = (int *)malloc(sizeof(int) * obj->capacity);
  obj->mins = (int *)malloc(sizeof(int) * obj->capacity);
  obj->top = 0;
  return obj;
}

void minStackPush(MinStack *obj, int x) {
  obj->data[obj->top] = x;
  int m = x;
  if (obj->top > 0 && obj->mins[obj->top - 1] < m) m = obj->mins[obj->top - 1];
  obj->mins[obj->top] = m;
  obj->top++;
}

void minStackPop(MinStack *obj) {
  if (obj->top > 0) obj->top--;
}

int minStackTop(MinStack *obj) {
  return obj->data[obj->top - 1];
}

int minStackGetMin(MinStack *obj) {
  return obj->mins[obj->top - 1];
}

void minStackFree(MinStack *obj) {
  free(obj->data);
  free(obj->mins);
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"MinStack\", \"push\", \"push\", \"push\", \"getMin\", \"pop\", \"top\", \"getMin\"]\n");
  MinStack *obj = minStackCreate();
  minStackPush(obj, -2);
  minStackPush(obj, 0);
  minStackPush(obj, -3);
  int a = minStackGetMin(obj);
  minStackPop(obj);
  int b = minStackTop(obj);
  int c = minStackGetMin(obj);
  printf("Output: [null, null, null, null, %d, null, %d, %d]\n", a, b, c);
  minStackFree(obj);
  return EXIT_SUCCESS;
}
