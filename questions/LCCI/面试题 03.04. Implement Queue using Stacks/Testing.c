#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *in;
  int inSize;
  int *out;
  int outSize;
} MyQueue;

MyQueue *myQueueCreate(void) {
  MyQueue *obj = (MyQueue *)malloc(sizeof(MyQueue));
  obj->in = (int *)malloc(sizeof(int) * 100000);
  obj->out = (int *)malloc(sizeof(int) * 100000);
  obj->inSize = obj->outSize = 0;
  return obj;
}

void myQueuePush(MyQueue *obj, int x) {
  obj->in[obj->inSize++] = x;
}

static void transfer(MyQueue *obj) {
  if (obj->outSize == 0) {
    while (obj->inSize > 0) {
      obj->out[obj->outSize++] = obj->in[--obj->inSize];
    }
  }
}

int myQueuePop(MyQueue *obj) {
  transfer(obj);
  return obj->out[--obj->outSize];
}

int myQueuePeek(MyQueue *obj) {
  transfer(obj);
  return obj->out[obj->outSize - 1];
}

bool myQueueEmpty(MyQueue *obj) {
  return obj->inSize == 0 && obj->outSize == 0;
}

void myQueueFree(MyQueue *obj) {
  free(obj->in);
  free(obj->out);
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"MyQueue\", \"push\", \"push\", \"peek\", \"pop\", \"empty\"]\n");
  MyQueue *obj = myQueueCreate();
  myQueuePush(obj, 1);
  myQueuePush(obj, 2);
  int p = myQueuePeek(obj);
  int q = myQueuePop(obj);
  bool e = myQueueEmpty(obj);
  printf("Output: [null, null, null, %d, %d, %s]\n", p, q, e ? "true" : "false");
  myQueueFree(obj);
  return EXIT_SUCCESS;
}
