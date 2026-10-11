#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *data;
  int size;
} MedianFinder;

MedianFinder *medianFinderCreate(void) {
  MedianFinder *obj = (MedianFinder *)malloc(sizeof(MedianFinder));
  obj->data = (int *)malloc(sizeof(int) * 200000);
  obj->size = 0;
  return obj;
}

void medianFinderAddNum(MedianFinder *obj, int num) {
  int i = obj->size;
  while (i > 0 && obj->data[i - 1] > num) {
    obj->data[i] = obj->data[i - 1];
    i--;
  }
  obj->data[i] = num;
  obj->size++;
}

double medianFinderFindMedian(MedianFinder *obj) {
  if (obj->size % 2 == 1) {
    return obj->data[obj->size / 2];
  }
  return (obj->data[obj->size / 2 - 1] + obj->data[obj->size / 2]) / 2.0;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()\n");
  MedianFinder *obj = medianFinderCreate();
  medianFinderAddNum(obj, 1);
  medianFinderAddNum(obj, 2);
  double a = medianFinderFindMedian(obj);
  medianFinderAddNum(obj, 3);
  double b = medianFinderFindMedian(obj);
  printf("Output: [%g, %g]\n", a, b);
  free(obj->data);
  free(obj);
  return EXIT_SUCCESS;
}
