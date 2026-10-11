#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int *keys;
  int *vals;
  int *order;
  int size;
  int capacity;
} LRUCache;

LRUCache *lRUCacheCreate(int capacity) {
  LRUCache *obj = (LRUCache *)malloc(sizeof(LRUCache));
  obj->keys = (int *)malloc(sizeof(int) * capacity);
  obj->vals = (int *)malloc(sizeof(int) * capacity);
  obj->order = (int *)malloc(sizeof(int) * capacity);
  obj->size = 0;
  obj->capacity = capacity;
  return obj;
}

static void touch(LRUCache *obj, int idx) {
  for (int i = idx; i < obj->size - 1; i++) {
    obj->keys[i] = obj->keys[i + 1];
    obj->vals[i] = obj->vals[i + 1];
    obj->order[i] = obj->order[i + 1];
  }
}

int lRUCacheGet(LRUCache *obj, int key) {
  for (int i = 0; i < obj->size; i++) {
    if (obj->keys[i] == key) {
      int val = obj->vals[i];
      touch(obj, i);
      obj->size--;
      obj->keys[obj->size] = key;
      obj->vals[obj->size] = val;
      obj->size++;
      return val;
    }
  }
  return -1;
}

void lRUCachePut(LRUCache *obj, int key, int value) {
  for (int i = 0; i < obj->size; i++) {
    if (obj->keys[i] == key) {
      touch(obj, i);
      obj->size--;
      break;
    }
  }
  if (obj->size == obj->capacity) {
    touch(obj, 0);
    obj->size--;
  }
  obj->keys[obj->size] = key;
  obj->vals[obj->size] = value;
  obj->size++;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)\n");
  LRUCache *cache = lRUCacheCreate(2);
  lRUCachePut(cache, 1, 1);
  lRUCachePut(cache, 2, 2);
  int a = lRUCacheGet(cache, 1);
  lRUCachePut(cache, 3, 3);
  int b = lRUCacheGet(cache, 2);
  lRUCachePut(cache, 4, 4);
  int c = lRUCacheGet(cache, 1);
  int d = lRUCacheGet(cache, 3);
  int e = lRUCacheGet(cache, 4);
  printf("Output: [%d, %d, %d, %d, %d]\n", a, b, c, d, e);
  free(cache->keys);
  free(cache->vals);
  free(cache->order);
  free(cache);
  return EXIT_SUCCESS;
}
