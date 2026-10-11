#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *arr;
  int size;
  int top[3];
} TripleInOne;

TripleInOne *tripleInOneCreate(int stackSize) {
  TripleInOne *obj = (TripleInOne *)malloc(sizeof(TripleInOne));
  obj->arr = (int *)malloc(sizeof(int) * 3 * (stackSize > 0 ? stackSize : 1));
  obj->size = stackSize;
  obj->top[0] = obj->top[1] = obj->top[2] = 0;
  return obj;
}

void tripleInOnePush(TripleInOne *obj, int stackNum, int value) {
  if (obj->top[stackNum] < obj->size) {
    obj->arr[stackNum * obj->size + obj->top[stackNum]++] = value;
  }
}

int tripleInOnePop(TripleInOne *obj, int stackNum) {
  if (obj->top[stackNum] == 0) return -1;
  return obj->arr[stackNum * obj->size + --obj->top[stackNum]];
}

int tripleInOnePeek(TripleInOne *obj, int stackNum) {
  if (obj->top[stackNum] == 0) return -1;
  return obj->arr[stackNum * obj->size + obj->top[stackNum] - 1];
}

bool tripleInOneIsEmpty(TripleInOne *obj, int stackNum) {
  return obj->top[stackNum] == 0;
}

void tripleInOneFree(TripleInOne *obj) {
  free(obj->arr);
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"TripleInOne\", \"push\", \"push\", \"pop\", \"pop\", \"pop\", \"isEmpty\"]\n");
  TripleInOne *obj = tripleInOneCreate(1);
  tripleInOnePush(obj, 0, 1);
  tripleInOnePush(obj, 0, 2);
  printf("Output: [null, null, null, %d, %d, %d, %s]\n",
         tripleInOnePop(obj, 0), tripleInOnePop(obj, 0), tripleInOnePop(obj, 0),
         tripleInOneIsEmpty(obj, 0) ? "true" : "false");
  tripleInOneFree(obj);
  return EXIT_SUCCESS;
}
