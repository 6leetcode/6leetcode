#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *data;
  int size;
} StreamRank;

StreamRank *streamRankCreate(void) {
  StreamRank *obj = (StreamRank *)malloc(sizeof(StreamRank));
  obj->data = (int *)malloc(sizeof(int) * 200000);
  obj->size = 0;
  return obj;
}

void streamRankTrack(StreamRank *obj, int x) {
  int i = obj->size;
  while (i > 0 && obj->data[i - 1] > x) {
    obj->data[i] = obj->data[i - 1];
    i--;
  }
  obj->data[i] = x;
  obj->size++;
}

int streamRankGetRankOfNumber(StreamRank *obj, int x) {
  int count = 0;
  for (int i = 0; i < obj->size; i++) {
    if (obj->data[i] <= x) {
      count++;
    } else {
      break;
    }
  }
  return count;
}

void streamRankFree(StreamRank *obj) {
  free(obj->data);
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"StreamRank\", \"getRankOfNumber\", \"track\", \"getRankOfNumber\"], [[], [1], [0], [0]]\n");
  StreamRank *obj = streamRankCreate();
  int a = streamRankGetRankOfNumber(obj, 1);
  streamRankTrack(obj, 0);
  int b = streamRankGetRankOfNumber(obj, 0);
  printf("Output: [null, %d, null, %d]\n", a, b);
  streamRankFree(obj);
  return EXIT_SUCCESS;
}
